#ifndef IMAGE_VECTORIZATION_H
#define IMAGE_VECTORIZATION_H

#include <opencv2/opencv.hpp>

cv::Mat vectorization(const cv::Mat& imgBgr);

double cosineSimilarity(const cv::Mat& a, const cv::Mat& b);

#endif // IMAGE_VECTORIZATION_H