#include <iostream>

int main () {

    // do-while-loop: do some block of code first then repeat again if condition is true

    int number;

    do {
        std::cout << "Enter the number: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The number is: " << number << std::endl;

    return 0;
}