#include <iostream>

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

using number_t = int;

int main () {

    number_t luckeyNumber = 7;

    std::cout << "People consider " << luckeyNumber << " as luckey Number." << std::endl;

    return 0;
}