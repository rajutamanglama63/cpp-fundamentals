#include <iostream>

int main()
{
    // fill() - fills a range of elements with a specified value
    //          fill(begin, end, value)

    const int SIZE = 9;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE / 3), "momo");
    fill(foods + (SIZE / 3), foods + (SIZE / 3) * 2, "pizza");
    fill(foods + (SIZE / 3) * 2, foods + SIZE, "burger");

    for (std::string food : foods)
    {
        std::cout << food << std::endl;
    }
}