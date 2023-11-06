#include <iostream>

int main () {

    // break = break out of loop
    // continue = skip current iteration

    for(int i = 1; i <= 10; i++) {

        // if(i == 5) {
        //     break;
        // }
        // std::cout << i << std::endl;

        if(i == 5) {
            continue;
        }
        std::cout << i << std::endl;
    }

    return 0;
}