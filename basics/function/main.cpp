#include <iostream>

// function - a block of reusable code

void birthdayWish(std::string name);

int main () {

    std::string name = "Raju";

    birthdayWish(name);
    birthdayWish(name);
    birthdayWish(name);

    return 0;
}

void birthdayWish (std::string name) {
    std::cout << "Happy birthday to " << name << std::endl;
}