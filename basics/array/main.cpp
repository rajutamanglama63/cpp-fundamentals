#include <iostream>

int main () {
    // array - a data structure that can hold multiple value

    // std::string cars[] = {"ranger", "jeep", "hilux"};

    // cars[1] = "rover";

    std::string cars[3];

    cars[0] = "rover";
    cars[1] = "mercedes";
    cars[2] = "cyber truck";

    std::cout << cars[0] << std::endl;
    std::cout << cars[1] << std::endl;
    std::cout << cars[2] << std::endl;

    return 0;
}