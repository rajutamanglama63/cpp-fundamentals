#include <iostream>

int main () {

    // dynamic variable - Memory that is allocated after the program is already compiled and running.
    //                    Use the 'new' operator to allocate memory in the heap rather then the stack

    //                    Useful when we don't know how much memory we will need. Makes our program more flexible,
    //                    especially when accepting user input.


    // int *pNum = NULL;

    // pNum = new int;

    // *pNum = 27;

    // std::cout << "address: " << pNum << std::endl;

    // std::cout << "value: " << *pNum << std::endl;

    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++) {
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++) {
        std::cout << pGrades[i] << " ";
    }
    std::cout << "\n";

    delete[] pGrades;
    
    return 0;
}