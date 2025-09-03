#include <iostream>
#include "image_vectorization.h"
#include <opencv2/opencv.hpp>

using namespace std;

int main() {
    cv::Mat img = cv::imread("ferrari1.png");
    cv::Mat img2 = cv::imread("ferrari2.png");

    ImageVectorData imgVetorized = vectorization(img, "ferrari1.png");
    ImageVectorData imgVetorized2 = vectorization(img2, "ferrari2.png");

    cout << "Similarity between " << imgVetorized.name << " and " << imgVetorized2.name << ": " << cosineSimilarity(imgVetorized.vector, imgVetorized2.vector) << endl;
    return 0;
}
