#include <iostream>

void printInfo(const std::string name, const int age);

int main()
{

    // const parameter = parameter that is effectively read-only
    //                   code is more secure and convey intent
    //                   useful for reference and pointers

    std::string name = "Jura";
    int age = 29;

    printInfo(name, age);
    return 0;
};

// before using const we can change passed values within function but after using const we can't change passed values

void printInfo(const std::string name, const int age)
{
    // name = "champa";
    // age = 23;
    std::cout << "Hello " << name << " you are " << age << " years old." << std::endl;
}