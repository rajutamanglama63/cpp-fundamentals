#include <iostream>

int main () {

    std::string student[] = {"Spongebob", "Sandy", "Patric", "Squidward"};
    char grades[] = {'A', 'B', 'C', 'D'};

    for(int i = 0; i < sizeof(student)/sizeof(student[0]); i++) {
        std::cout << student[i] << std::endl;
    }


    // for(int j = 0; j < sizeof(grades)/sizeof(char); j++) {
    //     std::cout << grades[j] << std::endl;
    // }
    return 0;
}