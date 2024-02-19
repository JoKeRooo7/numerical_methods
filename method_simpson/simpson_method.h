#ifndef NUMERICAL_METHODS_METHOD_SIMPSON_SIMPSON_METHOD_H_
#define NUMERICAL_METHODS_METHOD_SIMPSON_SIMPSON_METHOD_H_

namespace method {

double integrate_simpson(double (*f)(double), double a, double b, int n) {
    double h = (b - a) / n;
    double sum = func(a) + func(b);
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += 2 * (i % 2 == 0 ? 2 : 4) * func(x);
    }
    return sum * h / 3.0;
}

}  // method

#endif  // NUMERICAL_METHODS_METHOD_SIMPSON_SIMPSON_METHOD_H_