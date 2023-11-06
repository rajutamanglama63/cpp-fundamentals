#include <iostream>

int main () {

    // && - check if two condition are true
    // || - check if one of two condition is true
    // !  - reverses the logical state of its operands

    int temprature;
    bool sunny = false;

    std::cout << "Enter the temperature: ";
    std::cin >> temprature;

    // if(temprature > 0 && temprature < 30) {
    //     std::cout << "Temprature is good" << std::endl;
    // } else {
    //     std::cout << "Temprature is bad" << std::endl;
    // }

    if(temprature <= 0 || temprature >= 30) {
        std::cout << "Temprature is bad" << std::endl;
    } else {
        std::cout << "Temprature is good" << std::endl;
    }

    if(!sunny) {
        std::cout << "It is cloudy outside" << std::endl;
    } else {
        std::cout << "It is sunny outside" << std::endl;
    }
    return 0;
}