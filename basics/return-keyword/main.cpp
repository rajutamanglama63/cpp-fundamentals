#include <iostream>

// double square (double length);
// double cube (double length);

// int main () {
//     // return - return a value back to the spot where you called the encompassing function

//     double length = 12;

//     double area = square(length);
//     double volume = cube(length);

//     std::cout << "Area: " << area << "cm^2" << std::endl;
//     std::cout << "Volume: " << volume << "cm^2" << std::endl;

//     return 0;
// }

// double square (double length) {
//     return length * length;
// }

// double cube (double length) {
//     return length * length * length;
// }


std::string concatString (std::string fName, std::string lName);

int main () {

    std::string firstName = "Raju";
    std::string lastName = "Lama";
    std::string fullName = concatString(firstName, lastName);

    std::cout << "Hello " << fullName << std::endl;

    return 0;
}

std::string concatString (std::string fName, std::string lName) {
    return fName + " " + lName;
} 