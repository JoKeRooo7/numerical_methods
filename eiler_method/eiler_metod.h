#ifndef NUMERICAL_METHODS_EILER_METHOD_EILER_METHOD_H_
#define NUMERICAL_METHODS_EILER_METHOD_EILER_METHOD_H_

#include <vector>


namespace method {

class Eiler {
    public:
        Eiler() = default;
        Eiler(double begin_x, double begin_y, double h, double last_x);

        void CalculateXY(double (*f)(double));

        void set_start_conditions(double begin_x, double begin_y, double h, double last_x);
        std::vector<double> GetContainerX();
        std::vector<double> GetContainerY();

    private:
        double beginer_x_ = 0.0;
        double beginer_y_ = 0.0;
        double last_x_ = 0.0;
        double h_ 0.0;
        std::vector<double> x_;
        std::vector<double> y_;
};



} // nethod


#endif // NUMERICAL_METHODS_EILER_METHOD_EILER_METHOD_H_
