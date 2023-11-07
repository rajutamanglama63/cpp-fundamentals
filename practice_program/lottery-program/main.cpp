#include <iostream>
#include <ctime>

int main () {
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "You win a car." << std::endl;
        break;
    case 2:
        std::cout << "You win a house." << std::endl;
        break;
    case 3:
        std::cout << "You win a bike." << std::endl;
        break;
    case 4:
        std::cout << "You win a one million." << std::endl;
        break;
    case 5:
        std::cout << "You win a holiday package." << std::endl;
        break;
    }
    
    return 0;
}