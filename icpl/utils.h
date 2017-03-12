#ifndef UTILS_H
#define UTILS_H

#include <vector>

#include <opencv2/core/core.hpp>

namespace icpl {

/**
 * Builds histograms array for each channel in src image.
 * Works only with CV_8U type.
 *
 * @param src[in]   Input image.
 *
 * @return vector of histograms, each of is vector of float.
 */
std::vector<std::vector<float>> build_histograms(const cv::Mat &src);


/**
 * Creates visual interpretation of histogram.
 *
 * @param histogram[in]     Histogram.
 * @param color[in]         Color in each line draws
 *
 * @param histogram_image[out]  Image, in which draw
 */
void draw_histogram(const std::vector<float> &histogram,
                    const cv::Scalar &color, cv::Mat &histogram_image);

} // namespace icpl

#endif // UTILS_H
