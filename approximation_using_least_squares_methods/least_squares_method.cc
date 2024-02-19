#include "least_squares_method.h"

#include <cstddef> 
#include <stdexcept>

namespace method {

LeastSquares::LeastSquares(const std::vector<double>& x, const std::vector<double>& y) : x_(x), y_(y) {
    if (y.size() != x.size()) {
        throw std::invalid_argument("size x not equal size y");
    }
}

void LeastSquares::clear() {
    slope_ = intercept_ = 0.0;
    x_.clear();
    y_.clear();
}

double LeastSquares::get_slope() { return slope_; }

double LeastSquares::get_intercept() { return intercept_; }

void LeastSquares::set_x_y(const std::vector<double>& x, const std::vector<double>& y) {
    slope_ = intercept_ = 0.0;
    x_ = x;
    y_ = y;
}

void LeastSquares::CalculateCoefficients() {
    double all_sum_x, all_sum_y, variance_x, covariance_y;
    all_sum_x = all_sum_y = variance_x = covariance_y = 0;

    for (std::size_t i = 0; i <  x_.size(); ++i) {
        all_sum_x += x_[i];
        all_sum_y += y_[i];
        variance_x += x_[i] * x_[i];
        covariance_y += x_[i] * y_[i];
    }

    double var = variance_x * x_.size() - all_sum_x * all_sum_x;

    if (det == 0) {
        throw std::runtime_error("The var t is zero, cannot compute coefficients.");
    }

    slope_ = (variance_x * all_sum_y - covariance_y * all_sum_x) / var;
    intercept_ = (covariance_y * x_.size() - all_sum_x * all_sum_y) / var;
}

}  // namespace method
