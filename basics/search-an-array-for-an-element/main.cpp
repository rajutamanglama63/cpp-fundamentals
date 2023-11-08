#include <iostream>

int searchArray(int element, int array[], int size);

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int myNum;
    int index;

    std::cout << "Enter element to search for: ";
    std::cin >> myNum;

    index = searchArray(myNum, numbers, size);

    if (index != -1)
    {
        std::cout << myNum << " is at index " << index << std::endl;
    }
    else
    {
        std::cout << myNum << " is not in the array" << std::endl;
    }
    return 0;
}

int searchArray(int element, int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }

    return -1;
}