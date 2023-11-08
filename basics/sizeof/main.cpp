#include <iostream>

int main () {

    std::string name = "Jura Mala";
    int number = 2;
    double grade = 4.0;
    bool isMillionare = true;
    char grades[] = {'A', 'B', 'C'};
    std::string students[] = {"spongebob", "patrik", "sandy", "squidward"};


    std::cout << sizeof(name) << " bytes" << std::endl;
    std::cout << sizeof(number) << " bytes" << std::endl;
    std::cout << sizeof(grade) << " bytes" << std::endl;
    std::cout << sizeof(isMillionare) << " bytes" << std::endl;
    std::cout << sizeof(grades) << " bytes" << std::endl;
    std::cout << sizeof(students) << " bytes" << std::endl;

    std::cout << sizeof(grades)/sizeof(char) << " elememts" << std::endl;
    std::cout << sizeof(students)/sizeof(students[0]) << " elememts" << std::endl;
    return 0;
}