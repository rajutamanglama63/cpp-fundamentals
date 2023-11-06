#include <iostream>
#include <cmath>

int main () {

    // initialize random number generator
    srand(time(NULL));

    // this will generate random number from 1 through 6;
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    return 0;
}