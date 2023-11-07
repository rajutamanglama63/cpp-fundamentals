#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main () {

    char playerChoice;
    char computerChoice;

    playerChoice = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(playerChoice);


    computerChoice = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computerChoice);

    chooseWinner(playerChoice, computerChoice);

    return 0;
}

char getUserChoice() {
    char playerChoice;
    std::cout << "********************* Rock-Paper-Scissor Game *********************" << std::endl;

    do
    {
        std::cout << "Choose one of the following" << std::endl;
        std::cout << "'r' for rock" << std::endl;
        std::cout << "'p' for paper" << std::endl;
        std::cout << "'s' for scissor" << std::endl;
        std::cin >> playerChoice;
    } while (playerChoice != 'r' && playerChoice != 'p' && playerChoice != 's');
    

    return playerChoice;
}

char getComputerChoice() {
    srand(time(0));

    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }

    return 0;
}

void showChoice(char choice) {
    switch (choice)
    {
    case 'r':
        std::cout << "Rock" << std::endl;
        break;
    case 'p':
        std::cout << "Paper" << std::endl;
        break;
    case 's':
        std::cout << "Scissor" << std::endl;
        break;
    }
}

void chooseWinner(char player, char computer) {
    switch (player)
    {
    case 'r':
        if(computer == 'r') {
            std::cout << "It's a tie!" << std::endl;
        } else if(computer == 'p') {
            std::cout << "You lose!" << std::endl;
        } else {
            std::cout << "You win!" << std::endl;
        }
        break;
    case 'p':
        if(computer == 'p') {
            std::cout << "It's a tie!" << std::endl;
        } else if(computer == 'r') {
            std::cout << "You win!" << std::endl;
        } else {
            std::cout << "You lose!" << std::endl;
        }
        break;
    case 's':
            if(computer == 's') {
                std::cout << "It's a tie!" << std::endl;
            } else if(computer == 'r') {
                std::cout << "You lose!" << std::endl;
            } else {
                std::cout << "You win!" << std::endl;
            }
        break;

    default:
        break;
    }
}