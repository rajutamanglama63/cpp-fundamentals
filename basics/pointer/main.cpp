#include <iostream>

int main()
{

    // pointers = variable that store a memory address of another variable
    //            sometimes it is easier to work with address

    // & address-of operator
    // * dereference operator

    std::string name = "Jurs";
    int age = 16;
    std::string pizzas[3] = {"pizza1", "pizza2", "pizza3"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pPizzas = pizzas;

    std::cout << *pName << std::endl;
    std::cout << *pAge << std::endl;
    std::cout << pPizzas << std::endl;  // it will give memory address
    std::cout << *pPizzas << std::endl; // it will give first element of array
    return 0;
}