#include <iostream>

int main()
{

    // null value = a special value that means something has no value. when a pointer is pointing a null value, that pointer is not pointing at anything(null pointer)

    // nullptr = this keyword represents a null pointer literal
    // it is helpful when determining if an address was successfully assigned to a pointer
    // when using pointers, be careful that your code is dereferencing nullptr or pointer to free memory. this will cause undefined behaviour

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr)
    {
        std::cout << "address is not assigned" << std::endl;
    }
    else
    {
        std::cout << "address is assigned" << std::endl;
        std::cout << *pointer << std::endl;
    }

    return 0;
}