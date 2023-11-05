#include <iostream>

int main () {

    std::cout << "****************** CALCULATOR ******************" << std::endl;

    char arithmetic_operator;
    double num_1;
    double num_2;
    double result;


    std::cout << "Enter first number: ";
    std::cin >> num_1;

    std::cout << "Enter second number: ";
    std::cin >> num_2;
    
    std::cout << "Enter whether (+ - * /): ";
    std::cin >> arithmetic_operator;

    switch (arithmetic_operator)
    {
    case '+':
        result = num_1 + num_2;
        std::cout << "Result: " << result << std::endl;
        break;
    case '-':
        result = num_1 - num_2;
        std::cout << "Result: " << result << std::endl;
        break;
    case '*':
        result = num_1 * num_2;
        std::cout << "Result: " << result << std::endl;
        break;
    case '/':
        result = num_1 / num_2;
        std::cout << "Result: " << result << std::endl;
        break;
    default:
        std::cout << "Invalid operator!" << std::endl;
        break;
    }



    std::cout << "************************************************" << std::endl;

    return 0;
}