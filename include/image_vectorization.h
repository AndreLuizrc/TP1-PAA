#ifndef IMAGE_VECTORIZATION_H
#define IMAGE_VECTORIZATION_H

#include <opencv2/opencv.hpp>
#include <string>
#include <vector>

struct ImageVectorData {
    cv::Mat vector;
    std::string name;
};

ImageVectorData vectorization(const cv::Mat& imgBgr, const std::string& imageName);

double cosineSimilarity(const cv::Mat& a, const cv::Mat& b);

#endif // IMAGE_VECTORIZATION_H
