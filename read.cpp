#include "ros/ros.h"
#include "std_msgs/String.h"
#include "sensor_msgs/CameraInfo.h"
#include <opencv2/opencv.hpp>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <sstream>
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

static const std::string OPENCV_WINDOW = "Image window";
/**
 * This tutorial demonstrates simple sending of messages over the ROS system.
 */

vector<string> split2(string s, string divid) {
	vector<string> v;
	int start = 0;
	int d = s.find(divid);
	while (d != -1){
		v.push_back(s.substr(start, d - start));
		start = d + 1;
		d = s.find(divid, start);
	} 
	v.push_back(s.substr(start, d - start));

	return v;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "talker");
  ros::NodeHandle n;

  // std::ofstream writeFile("/home/minwoo/123/hz.txt", std::ios::out | std::ios::app);
  std::ofstream writeFile("/home/minwoo/123/hz.txt", std::ios::out );
  std::string str = "test1: 2\n";
  str = str + "test3: 3";
  writeFile.write(str.c_str(), str.size());
  writeFile.close();

  //////////////////////////////////
  std::ifstream readFile("/home/minwoo/123/hz.txt");
  // readFile.open("/home/minwoo/123/hz.txt", std::ios::in);
  if (readFile.is_open())
  {
    while (!readFile.eof())
    {
      std::string str;
      getline(readFile, str);
      vector<string> v2 = split2(str, ": ");
      std::cout << v2[0] << "," << v2[1] << "\n" ;
    }
    readFile.close(); 
  }
  else{
    ROS_INFO("read fail");  
  }

  return 0;
}
