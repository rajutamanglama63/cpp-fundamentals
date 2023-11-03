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

// namespace first {
//     std::string name = "Raju";
// }

// namespace second {
//     std::string name = "Hari";
// }

// int main () {

//     std::cout << first::name << " and " << second::name << " are friends.";
//     return 0;
// }


// typedef
// it is the reserved keyword used to create an additional name (alias) for another data type.
// it is new identifier for an existing type.
// it helps with readability and reduces types

// typedef std::string text_t;

// int main () {
//     text_t name = "Raju";

//     std::cout << "Hello " << name << "." << std::endl;

//     return 0;
// }

// typedef is now replaced with using keyword but it both works as same way

// using number_t = int;

// int main () {

//     number_t luckeyNumber = 7;

//     std::cout << "People consider " << luckeyNumber << " as luckey Number." << std::endl;

//     return 0;
// }


// arithmetics operators 
// returns the result of a specific arithmetic operations (+, -, *, %)

// int main () {

//     int students = 13;
//     students = students + 1;

//     std::cout << students << std::endl;
    
//     return 0;
// }


// type conversion
// convert a value of one data type to another
// there are two types of conversion in cpp and they are - Implicit (automatic) and Explicit (Preeced value with new data type like (int))
int main () {

    // eg. of explicit type conversion
    // double number = (int) 3.14;
    // std::cout << number << std::endl;

    // eg. of implicit type conversion
    // 100 will be implicitly convert to its asci value
    char letter = 100;
    std::cout << letter << std::endl;

    
    return 0;
}