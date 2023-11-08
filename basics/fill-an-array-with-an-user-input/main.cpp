#include <iostream>

int main()
{

    std::string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);
    std::string temp;

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter a food you would like to order or 'q' to quit #" << i + 1 << ": ";
        std::getline(std::cin, temp);

        if (temp == "q")
        {
            break;
        }
        else
        {
            foods[i] = temp;
        }
    }

    std::cout << "Food you order are: " << std::endl;

    for (int j = 0; !foods[j].empty(); j++)
    {
        std::cout << foods[j] << std::endl;
    }

    return 0;
}