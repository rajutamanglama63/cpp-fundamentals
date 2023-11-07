#include <iostream>

int main () {

    int guess;
    int num;

    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "************************** Number guessing game **************************" << std::endl;

    do
    {
        std::cout << "Guess the number between (1-100): ";
        std::cin >> guess;
        tries++;
        
        if(guess < num) {
            std::cout << "Your guess is low" << std::endl;
        } else if (guess > num) {
            std::cout << "Your guess is high" << std::endl;
        } else if (tries == 3) {
            std::cout << "You lose" << std::endl;
            break;
        } else {
            std::cout << "Correct! you win with " << tries << " tries." << std::endl;
        }
    } while (guess != num);


        std::cout << "************************************************************" << std::endl;

    
    return 0;
}