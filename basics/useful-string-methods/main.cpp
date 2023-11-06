#include <iostream>

int main () {
    std::string name;
    std::string email;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << name.at(0) << " is the first letter or your name" << std::endl;
    std::cout << "Your username would be " << name.insert(0, "@") << std::endl;

    if(name.length() > 12) {
        std::cout << "Your name can't be over 12 character" << std::endl;
    } else if(name.empty()) {
        std::cout << "You didn't enter your name" << std::endl;
    } else {
        std::cout << "Welcome " << name << "!" << std::endl;
    }


    std::cout << "find method of string gives index of whatever we provide argument to it " << name.find(' ') << std::endl;

    std::cout << "Enter your name and we will convert into email address: ";
    std::getline(std::cin, email);

    email.append("@gmail.com");

    std::cout << "Your email is " << email << std::endl;

    return 0;
}