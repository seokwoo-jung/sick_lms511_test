#ifndef CPCL_H
#define CPCL_H

//-------------------------------------------------
// VTK - pck header
//-------------------------------------------------
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/visualization/cloud_viewer.h>
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/io/ply_io.h>
#include <pcl/io/vtk_io.h>
#include <pcl/io/file_io.h>
#include <pcl/io/io.h>
#include <pcl/io/obj_io.h>
#include <pcl/io/vtk_lib_io.h>
#include <pcl/ModelCoefficients.h>
//#include <pcl/point_types.h>
#include <pcl/sample_consensus/ransac.h>
#include <pcl/sample_consensus/sac_model_line.h>
#include <pcl/sample_consensus/method_types.h>
#include <pcl/sample_consensus/model_types.h>
#include <pcl/segmentation/sac_segmentation.h>
#include <pcl/segmentation/extract_clusters.h>
#include <pcl/filters/voxel_grid.h>
#include <pcl/filters/extract_indices.h>
#include <pcl/PCLPointCloud2.h>
#include <pcl/conversions.h>
#include <pcl/kdtree/kdtree.h>
#include <pcl/features/normal_3d.h>
//for projection
#include <pcl/filters/project_inliers.h>

#include <vtkRenderWindow.h>
#include <vtkAutoInit.h>
#include <vtkPolyData.h>
#include <vtkSTLReader.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkRenderer.h>
#include <vtkRenderWindowInteractor.h>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui.hpp>

typedef pcl::PointXYZRGBA PointT;
typedef pcl::PointCloud<PointT> PointCloudT;

using namespace std;

class CPCL
{
public:
    CPCL(){

    }

    void init()
    {

        cloud.reset(new PointCloudT);
        viewer.reset (new pcl::visualization::PCLVisualizer ("viewer" , false));
    }

    boost::shared_ptr<pcl::visualization::PCLVisualizer> viewer;
    PointCloudT::Ptr cloud;
};




#endif // CPCL_H
