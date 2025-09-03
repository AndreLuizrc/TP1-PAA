#include <iostream>
#include "image_vectorization.h"
#include <opencv2/opencv.hpp>

using namespace std;

int main() {
    cv::Mat img = cv::imread("ferrari1.png");
    cv::Mat img2 = cv::imread("ferrari2.png");

    cv:: Mat imgVetorized = vectorization(img);
    cv:: Mat imgVetorized2 = vectorization(img2);

    cout << cosineSimilarity(imgVetorized, imgVetorized2);
    return 0;
}
