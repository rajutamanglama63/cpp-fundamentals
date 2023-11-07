#include <iostream>

// function - a block of reusable code

void birthdayWish(std::string name, int age);

int main () {

    std::string name = "Raju";
    int age = 30;

    birthdayWish(name, age);
    birthdayWish(name, age);
    birthdayWish(name, age);

    return 0;
}

void birthdayWish (std::string name, int age) {
    std::cout << "Happy birthday to " << name << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;
}