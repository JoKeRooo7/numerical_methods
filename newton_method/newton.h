#ifndef NUMERICAL_METHODS_METHOD_NEWTON_METHOD_H_
#define NUMERICAL_METHODS_METHOD_NEWTON_METHOD_H_

namespace method {

double newton_method(double (*f)(double), double (*f_prime)(double), double x0, double eps) {
    double x1 = x0;
    double x2 = 0;
    while (abs(x1 - x2) > eps) {
        double y = f(x1);
        double pr = f_prime(x1);
        x2 = x1;
        x1 = x1 - (y / pr);
    }
    return x1;
}

} // namespace methods

#endif  // NUMERICAL_METHODS_METHOD_NEWTON_METHOD_H_

