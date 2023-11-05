#include <iostream>

int main () {

    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2

    int number;
    std::cout << "Enter a random number: ";
    std::cin >> number;

    number % 2 == 1 ? std::cout << "the number you entered is odd" << std::endl : std::cout << "the number you entered is even" << std::endl;

    return 0;
}