#ifndef NUMERICAL_METHODS_DICHOTOMIA_DICHOTOMY_METHOD_H_
#define NUMERICAL_METHODS_DICHOTOMIA_DICHOTOMY_METHOD_H_

#include <cmath>
#include <cstddef> 
#include <stdexcept>

namespace method {

const std::size_t max_quantity_iter = 10000;

double Dichotomy(double a, double b, double (*f)(double), double epsilon) {
    std::size_t iter;
    double x;
    while (std::fabs(b - a) > epsilon && iter < max_squantity_iter) {
        x = (b + a) / 2;
        if (f(x) > 0) {
            a = x;
        } else {
            b = x;
        }
        ++iter;
    }
    return (a + b) / 2;
}

} // method


#endif // NUMERICAL_METHODS_DICHOTOMIA_DICHOTOMY_METHOD_H_