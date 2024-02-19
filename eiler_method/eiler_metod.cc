#include "eiler_method.h"

#include <stdexcept>

namespace method {

Eiler::Eiler(double begin_x, double begin_y, double h, double last_x) {
    set_start_conditions(begin_x, begin_y, h, last_x);
}

Eiler::CalculateXY(double (*f)(double)) {
    x_.clear();
    y_.clear();

    double y = beginer_y_;
    for (double x = beginer_x_; beginer_x_ < last_x_; x += h) {
        x_.push_back(x);
        y_.push_back(y);

        y += h * f(x, y);
    }
}

void Eiler::set_start_conditions(double begin_x, double begin_y, double h, double last_x) {
    beginer_x_ = begin_x;
    beginer_y_ = begin_y;
    last_x_ = last_x;
    h_ = h;
}

std::vector<double> Eiler::GetContainerX() {return x_; }

std::vector<double> Eiler::GetContainerY() {return y_; }

}  // namepsace method
