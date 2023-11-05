#include <iostream>

// user input

int main () {

    //  std::string name;
    //  int experience;

    //  std::cout << "What is your name? ";
    //  std::cin >> name;

    //  std::cout << "Mention your experience. ";
    //  std::cin >> experience;

    //  std::cout << "Hello " << name << "!" << std::endl;
    //  std::cout << "You have " << experience << " years of experience in tech field." << std::endl;



    // to allow input with space in it we have to use getline() function
    std::string employee;
    int salary;

    std::cout << "Salary of employee. ";
    std::cin >> salary;

    std::cout << "Name of employee. ";
    std::getline(std::cin >> std::ws, employee);

    

    std::cout << employee << " earn " << 12 * (double) salary << " per year." << std::endl;

    return 0;
}