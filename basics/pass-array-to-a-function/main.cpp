#include <iostream>

double getTotal(double grades[], int size);

int main () {

    double grades[] = {4.2, 2, 8.8, 43, 5.5};
    int size = sizeof(grades)/sizeof(grades[0]);
    double total = getTotal(grades, size);

    std::cout << "Total grade: " << total << std::endl;
    return 0;
}

double getTotal(double grades[], int size) {
    double total = 0;

    for(int i = 0; i < size; i++) {
        total += grades[i];
    }

    return total;
}