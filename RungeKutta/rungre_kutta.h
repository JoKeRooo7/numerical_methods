#ifndef NUMERICAL_METHODS_RUNGRE_KUTTA_H_
#define NUMERICAL_METHODS_RUNGRE_KUTTA_H_

#include <vector>

namespace method {

std::vector<pair<double, double>> RungeKutta(double (*F)(double, double), double x0, double y0, double xn, double h) {
    std::vector<pair<double, double>> result;

    double x = x0;
    double y = y0;
    
    result.push_back(make_pair(x, y));

    while (x < xn) {
        double k1 = h * F(x, y);
        double k2 = h * F(x + h / 2.0, y + k1 / 2.0);
        double k3 = h * F(x + h / 2.0, y + k2 / 2.0);
        double k4 = h * F(x + h, y + k3);
        y = y + (k1 + 2 * k2 + 2 * k3 + k4) / 6.0;
        x += h;
        result.push_back(make_pair(x, y));
    }

    return result;
}

}  // method

#endif // NUMERICAL_METHODS_RUNGRE_KUTTA_H_
