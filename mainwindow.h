#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "CPCL.h"
#include "CLMS511.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    CLMS511* mpc_lms511;

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_connect_clicked();

private:
    Ui::MainWindow *ui;

public slots:
    void SlotLMS511UpdatePCL(bool _parse_complete);

};

#endif // MAINWINDOW_H
