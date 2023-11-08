#include <iostream>

int main () {

    std::string shoppingList[] = {"shoe", "watch", "boots"};

    for(std::string item : shoppingList) {
        std::cout << item << std::endl;
    }
    return 0;
}