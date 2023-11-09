#include <iostream>

void swap(std::string &x, std::string &y);

// pass by reference approach

int main()
{

    std::string x = "hot";
    std::string y = "cold";

    swap(x, y);

    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;

    return 0;
}

void swap(std::string &x, std::string &y)
{
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}

// pass by value approach - when applyig this approach only value will be passed which will stored in differen memory address.
//                          values of different memory address can't be swap

// void swap(std::string x, std::string y)

// int main()
// {

//     std::string x = "hot";
//     std::string y = "cold";

//     swap(x, y);

//     std::cout << "X: " << x << std::endl;
//     std::cout << "Y: " << y << std::endl;

//     return 0;
// }

// void swap(std::string x, std::string y)
// {
//     std::string temp;

//     temp = x;
//     x = y;
//     y = temp;
// }