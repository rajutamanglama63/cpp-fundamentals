#include <iostream>

// type conversion
// convert a value of one data type to another
// there are two types of conversion in cpp and they are - Implicit (automatic) and Explicit (Preeced value with new data type like (int))
int main () {

    // eg. of explicit type conversion
    // double number = (int) 3.14;
    // std::cout << number << std::endl;

    // eg. of implicit type conversion
    // 100 will be implicitly convert to its asci value
    // char letter = 100;
    // std::cout << letter << std::endl;


    int correctMarks = 9;
    int totalQuestions = 10;

    double score = correctMarks/(double)totalQuestions * 100;

    std::cout << score << "%" << std::endl;

    
    return 0;
}