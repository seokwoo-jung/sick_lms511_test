#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    VTK_MODULE_INIT(vtkRenderingOpenGL2);
    ui->setupUi(this);

    mpc_lms511 = new CLMS511;

    // connect

    connect(mpc_lms511,SIGNAL(SignalLMS511UpdatePCL(bool)),this,SLOT(SlotLMS511UpdatePCL(bool)));

    mpc_lms511->GetPCL()->init();
    ui->qvtkWidget->SetRenderWindow(mpc_lms511->GetPCL()->viewer->getRenderWindow());
    mpc_lms511->GetPCL()->viewer->setupInteractor(ui->qvtkWidget->GetInteractor(),ui->qvtkWidget->GetRenderWindow());
    mpc_lms511->GetPCL()->viewer->setBackgroundColor(0,0,0);
    mpc_lms511->GetPCL()->viewer->addCoordinateSystem(1.0);
    mpc_lms511->GetPCL()->viewer->addPointCloud(mpc_lms511->GetPCL()->cloud,"cloud");
    mpc_lms511->GetPCL()->viewer->setPointCloudRenderingProperties(pcl::visualization::PCL_VISUALIZER_POINT_SIZE,1,"cloud");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_connect_clicked()
{
    mpc_lms511->ConnectLMS511();
}

void MainWindow::SlotLMS511UpdatePCL(bool _parse_complete)
{
    if(_parse_complete)
    {
        if(ui->qvtkWidget->GetRenderWindow()->IsDrawable())
        {
            mpc_lms511->mtx_lms.lock();
            ui->qvtkWidget->update();
            mpc_lms511->mtx_lms.unlock();
        }
    }
}
