#ifndef NUMERICAL_METHODS_APPROXIMATION_USING_LEAST_SQUARES_METHODS_H_
#define NUMERICAL_METHODS_APPROXIMATION_USING_LEAST_SQUARES_METHODS_H_


#include <cmath>
#include <vector>

namespace method {

class LeastSquares {
    public:
        LeastSquares() = default;
        LeastSquares(const std::vector<double>& x, const std::vector<double>& y);

        void CalculateCoefficients();

        // Коэффициент наклона 
        double get_slope();
        // Коэффициент сдвига, свободный член
        double get_intercept();
        void set_x_y(const std::vector<double>& x, const std::vector<double>& y);

        void clear();

    private:
        std::vector<double> x_;
        std::vector<double> y_;
        double slope_ = 0.0;
        double intercept_ = 0.0;
};

} // method

#endif  // NUMERICAL_METHODS_APPROXIMATION_USING_LEAST_SQUARES_METHODS_H_
