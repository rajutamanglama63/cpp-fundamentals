#include <iostream>

int main () {

    double temp;
    char unit;


    std::cout << "******************* Temprature conversion program *******************" << std::endl;

    std::cout << "F = Fehrenhiet" << std::endl;
    std::cout << "C = Celcius" << std::endl;

    std::cout << "What unit would like to convert to: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f') {
        std::cout << "Enter temprature in calcius: ";
        std::cin >> temp;

        temp = (1.8 * temp) +32.0;
        std::cout << "Temprature is: " << temp << " F" << std::endl;
    } else if (unit == 'C' || unit == 'c') {
        std::cout << "Enter temprature in fehrenheit: ";
        std::cin >> temp;

        temp = (temp -32) / 1.8;
        std::cout << "Temprature is: " << temp << " C" << std::endl;
    } else {
        std::cout << "Please enter in only C or F" << std::endl;
    }


    std::cout << "*********************************************************************" << std::endl;

    return 0;
}