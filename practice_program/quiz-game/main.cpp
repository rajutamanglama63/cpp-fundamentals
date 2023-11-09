#include <iostream>

int main()
{

    std::cout << "******************************************" << std::endl;
    std::cout << "****            QUIZ GAME             ****" << std::endl;
    std::cout << "\n";

    std::string questions[] = {"1. What year was C++ created?: ",
                               "2. Who invented C++?: ",
                               "3. What is the predecessor of C++?: ",
                               "4. Is the Earth flat?: "};

    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. Guido Van Rossum", "B. Bjarne Stroustrup", "C. Bill Gates", "Steve Jobs"},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. Yes", "B. No", "C. Sometimes", "D. What's Earth?"}};

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);

    int score = 0;
    char guess;

    for (int i = 0; i < size; i++)
    {
        std::cout << "******************************************" << std::endl;
        std::cout << questions[i] << std::endl;
        std::cout << "******************************************" << std::endl;

        for (int j = 0; j < sizeof(options[0]) / sizeof(options[0][1]); j++)
        {
            std::cout << options[i][j] << " ";
        }

        std::cout << "\n";

        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i])
        {
            std::cout << "CORRECT" << std::endl;
            score++;
        }
        else
        {
            std::cout << "WRONG!" << std::endl;
            std::cout << "Answer: " << answerKey[i] << std::endl;
        }
    }

    std::cout << "******************************************" << std::endl;
    std::cout << "*****             RESULT             *****" << std::endl;
    std::cout << "******************************************" << std::endl;

    std::cout << "NUMBER OF QUESTION: " << size << std::endl;
    std::cout << "CORRECT GUESSES: " << score << std::endl;
    std::cout << "TOTAL SCORE: " << score / (double)size * 100 << "%" << std::endl;

    return 0;
}