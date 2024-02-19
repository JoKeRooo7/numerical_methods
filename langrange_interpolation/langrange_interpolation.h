#ifndef NUMERICAL_METHODS_INTERPOLATION_LANGRANGE_METOD_H_
#define NUMERICAL_METHODS_INTERPOLATION_LANGRANGE_METOD_H_

#include <vector>

namespace method {

class LangrangeInterpolation {
    public:
        LagrangeInterpolation(const std::vector<double> &x, const std::vector<double> &y) : X(x), Y(y) {}

        void set_x_y(const std::vector<double> &x, const std::vector<double> &y);
        void AddPoint(double x, double y);

        double Interpolate(double z);
    private:
        std::vector<double> x_;
        std::vector<double> y_;
}

} // namespace method

#endif  // NUMERICAL_METHODS_INTERPOLATION_LANGRANGE_METOD_H_
