#include <iostream>
template <typename T, typename U>

auto max (T x, U y) {
    return (x > y) ? x : y;
}

int main () {

    std::cout << max(1, 1.4) << std::endl;
    return 0;
}

// function template - describe what a function looks like.
//                     Can be used to generate as many overloaded functions as needed each using different data types