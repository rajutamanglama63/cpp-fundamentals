#include <iostream>

// variables
// int main () {
//     std::string name = "Raju";
//     int age = 28;
//     std::cout << "Hello I am " << name << "." << std::endl;
//     std::cout << "And I am " << age << " years old." << std::endl;
//     return 0;
// }



// const
// it is used to protect value overriding in programe
// int main () {
//     const double PI = 3.14;
//     double radious = 22.45;
//     double circumference = 2 * PI * radious;

//     std::cout << "Circumference of circle with above measuement is " << circumference << std::endl;
//     return 0;
// }


// namespace
// it provides a solution for preventing naming conflicts in large projects. Each entity needs a unique name.
// A namespace allows for identically named entities as long as the namespaces are different.
namespace first {
    std::string name = "Raju";
}

namespace second {
    std::string name = "Hari";
}

int main () {

    std::cout << first::name << " and " << second::name << " are friends.";
    return 0;
}