#include <iostream>
#include <iomanip>
#include <limits> // Include this header for clearing the input buffer

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main () {

    double balance = 0;
    int choice;

    

    do {
        std::cout << "*************************************" << std::endl;
        std::cout << "Enter the choice" << std::endl;
        std::cout << "*************************************" << std::endl;

        std::cout << "1. Show Balance" << std::endl;
        std::cout << "2. Deposit Money" << std::endl;
        std::cout << "3. Withdraw Money" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cin >> choice;

        
        // std::cin.clear();
        // fflush(stdin);

        switch (choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "Thank you for visiting" << std::endl;
                break;
            default:
                std::cout << "Invalid choice" << std::endl;
                 // Clear the input buffer to handle invalid input
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                break;
        }
    } while (choice != 4);
    
    return 0;
}


void showBalance(double balance) {
    std::cout << "Your balance is $" << std::setprecision(2) << std::fixed << balance << std::endl;
}

double deposit() {
    double amount;

    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if(amount > 0) {
        return amount;
    } else {
        std::cout << "That's not a valid amount" << std::endl;
        return 0;
    }

}

double withdraw(double balance) {
    double amount;

    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

    if(amount > balance) {
        std::cout << "Insufficient balance" << std::endl;
        return 0;
    } else if (amount < 0) {
        std::cout << "That's not a valid amount" << std::endl;
        return 0;
    } else {
        return amount;
    }

}