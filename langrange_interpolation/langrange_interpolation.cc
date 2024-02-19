#include "langrange_interpolation.h"

#include <cstddef> 

namespace method {

void LangrangeInterpolation::set_x_y(const std::vector<double> &x, const std::vector<double> &y) {
    x_ = x;
    y_ = y;
}

void LangrangeInterpolation::AddPoint(double x, double y) {
    x_.push_back(x);
    y_.push_back(y);
};


double LangrangeInterpolation::Interpolate(double z) {
    double result = 0.0;
    for (std::size_t i = 0; i < x_.size(); ++i) {
        double term = y_[i];
        for (std::size_t j = 0; j < y_.size(); ++j) {
            if (j != i) {
                term *= (z - x_[j]) / (x[i] - x[j]);
            }
        }
        result += term;
    }
    return result;
}

}  // namespace method