#include <iostream>

// recursion = a programming technique where a function invokes itself from within 
    //             it helps to break a complex concept into a repeatable single step

    // (iterative vs recursive)

    // advantages = less code and is cleaner 
    //              useful for sorting and searching algorithms

    // disadvantages = uses more memory and it is quite slower


// iterative approach
// void walk(int step);
// int main () {
    
//     walk(10);
//     return 0;
// }

// void walk(int step) {
//     for (int i = 0; i < step; i++) {
//         std::cout << "You take a step" << std::endl;
//     }
// }

// recursive approach
// void walk(int steps);
// int main () {
    
//     walk(10);
//     return 0;
// }

// void walk(int steps) {
//     if(steps > 0) {
//         std::cout << "You take a step" << std::endl;
//         walk(steps - 1);
//     }
// }



// ******************* next program *********************

// iterative approach
// void factorial(int num);

// int main () {

//     factorial(3);
//     return 0;
// }

// void factorial(int num) {
//     int result = 1;
//     for(int i = 1; i <= num; i++) {
//         result = result * i;
//     }

//     std::cout << result << std::endl;
// }

// recursive approach
int factorial(int num);

int main () {

    std::cout << factorial(3);
    std::cout << "\n";
    return 0;
}

int factorial(int num) {
    if(num > 1) {
        return num * factorial(num - 1);
    } else {
        return 1;
    }
}