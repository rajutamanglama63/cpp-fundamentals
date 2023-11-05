#include <iostream>
#include <cmath>

int main () {

    double perpendicular;
    double base;
    double hypotenuse;

    std::cout << "Enter value for perpendicular: ";
    std::cin >> perpendicular;

    std::cout << "Enter value for base: ";
    std::cin >> base;

    // perpendicular = pow(perpendicular, 2);
    // base = pow(base, 2);

    // hypotenuse = sqrt(perpendicular + base);

    hypotenuse = sqrt(pow(perpendicular, 2) + pow(base, 2));

    std::cout << "The value of hypotenuse is " << hypotenuse << std::endl;

    return 0;
}