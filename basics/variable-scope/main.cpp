#include <iostream>

int myNum = 1;

void printNum ();
int main () {

    int myNum = 2;

    printNum();

    std::cout << myNum << std::endl;
    return 0;
}

void printNum () {
    std::cout << myNum << std::endl;
}