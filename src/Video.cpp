/*
 * Video.cpp
 *
 *  Created on: Oct 20, 2017
 *      Author: robert
 */

#include "../inc/Video.h"
#define FORMAT ".mp4"

Video::Video(std::string path,int x, int y, std::string id, int width, int height, bool rectangle) {
	this->x=x;
	this->y=y;
	this->path=path;
	this->capture=cv::VideoCapture(this->path+FORMAT);

	this->width=width;
	this->height=height;

	this->is_end=0;
	this->id=id;

	this->rectangle=rectangle;
    this->pause=1;
	this->capture >> this->frame;
}

Video::~Video() {
	// TODO Auto-generated destructor stub
}

void Video::draw(cv::Mat bg)
{
    if(this->pause==0) {
        this->capture >> this->frame;
    }

	if(frame.cols!=0)
	{
		cv::resize(this->frame,this->frame,cv::Size(this->width,this->height),0,0,CV_INTER_CUBIC);
        this->frame.copyTo(bg(cv::Rect(this->x,this->y,this->frame.cols,this->frame.rows)));
	}
	else
	{
		this->is_end=1;
		this->capture=cv::VideoCapture(this->path+FORMAT);
	}
	if(rectangle)
	{
		cv::rectangle(bg,cv::Point(this->x,this->y),cv::Point(this->x+this->width,this->y+this->height), cv::Scalar(0,0,0),10);
	}
}

void Video::changeValue(int x, int y)
{
	this->pause=x;
	if(y==0) {
		this->capture.set(cv::CAP_PROP_POS_FRAMES, 0);
		this->capture >> this->frame;
	}
}

void Video::changeState()
{
	this->capture=cv::VideoCapture(this->path+FORMAT);
	this->capture >> this->frame;
}

void Video::Reload(std::string path)
{
	this->path=path;
	this->capture=cv::VideoCapture(this->path+FORMAT);
}