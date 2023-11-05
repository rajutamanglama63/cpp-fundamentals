#include <iostream>


// const
// it is used to protect value overriding in programe

int main () {
    const double PI = 3.14;
    double radious = 22.45;
    double circumference = 2 * PI * radious;

    std::cout << "Circumference of circle with above measuement is " << circumference << std::endl;
    return 0;
}