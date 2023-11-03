#include <iostream>

// variables

// int main () {
//     std::string name = "Raju";
//     int age = 28;
//     std::cout << "Hello I am " << name << "." << std::endl;
//     std::cout << "And I am " << age << " years old." << std::endl;
//     return 0;
// }



// const
// it is used to protect value overriding in programe

// int main () {
//     const double PI = 3.14;
//     double radious = 22.45;
//     double circumference = 2 * PI * radious;

//     std::cout << "Circumference of circle with above measuement is " << circumference << std::endl;
//     return 0;
// }


// namespace
// it provides a solution for preventing naming conflicts in large projects. Each entity needs a unique name.
// A namespace allows for identically named entities as long as the namespaces are different.

// namespace first {
//     std::string name = "Raju";
// }

// namespace second {
//     std::string name = "Hari";
// }

// int main () {

//     std::cout << first::name << " and " << second::name << " are friends.";
//     return 0;
// }


// typedef
// it is the reserved keyword used to create an additional name (alias) for another data type.
// it is new identifier for an existing type.
// it helps with readability and reduces types

// typedef std::string text_t;

// int main () {
//     text_t name = "Raju";

//     std::cout << "Hello " << name << "." << std::endl;

//     return 0;
// }

// typedef is now replaced with using keyword but it both works as same way

// using number_t = int;

// int main () {

//     number_t luckeyNumber = 7;

//     std::cout << "People consider " << luckeyNumber << " as luckey Number." << std::endl;

//     return 0;
// }


// arithmetics operators 
// returns the result of a specific arithmetic operations (+, -, *, %)

// int main () {

//     int students = 13;
//     students = students + 1;

//     std::cout << students << std::endl;
    
//     return 0;
// }


// type conversion
// convert a value of one data type to another
// there are two types of conversion in cpp and they are - Implicit (automatic) and Explicit (Preeced value with new data type like (int))
// int main () {

    // eg. of explicit type conversion
    // double number = (int) 3.14;
    // std::cout << number << std::endl;

    // eg. of implicit type conversion
    // 100 will be implicitly convert to its asci value
    // char letter = 100;
    // std::cout << letter << std::endl;


//     int correctMarks = 9;
//     int totalQuestions = 10;

//     double score = correctMarks/(double)totalQuestions * 100;

//     std::cout << score << "%" << std::endl;

    
//     return 0;
// }




// user input

// int main () {

    //  std::string name;
    //  int experience;

    //  std::cout << "What is your name? ";
    //  std::cin >> name;

    //  std::cout << "Mention your experience. ";
    //  std::cin >> experience;

    //  std::cout << "Hello " << name << "!" << std::endl;
    //  std::cout << "You have " << experience << " years of experience in tech field." << std::endl;



    // to allow input with space in it we have to use getline() function
//     std::string employee;
//     int salary;

//     std::cout << "Salary of employee. ";
//     std::cin >> salary;

//     std::cout << "Name of employee. ";
//     std::getline(std::cin >> std::ws, employee);

    

//     std::cout << employee << " earn " << 12 * (double) salary << " per year." << std::endl;

//     return 0;
// }



// useful math function in cpp

// #include<cmath>
// int main () {

//     double x = 3.99;
//     double y = 3;
//     double z;

//     // z = std::max(x, y);
//     // z = std::min(x, y);

//     // z = pow(2, 3);
//     // z = sqrt(81);
//     // z = abs(-24);
//     // z = round(x);
//     // z = ceil(x);
//     z = floor(x);

//     std::cout << z << std::endl;

//     return 0;
// }



// if statements 
// do something if condition is true. if not, then don't do it

int main () {

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 100) {
        std::cout << "You are too old to enter this site." << std::endl;
    } else if(age >= 18) {
        std::cout << "Welcome to the site." << std::endl;
    } else if(age < 0) {
        std::cout << "You haven't been born yet." << std::endl;
    } else {
        std::cout << "You are not old enough to visit this site." << std::endl;
    }
    return 0;
}

