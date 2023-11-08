#include <iostream>

void bubbleSortMethod(int arrayOfNum[], int size);

int main()
{

    int arrayOfNum[] = {2, 10, 5, 8, 3, 1, 7, 4, 9, 6};
    int size = sizeof(arrayOfNum) / sizeof(arrayOfNum[0]);

    bubbleSortMethod(arrayOfNum, size);

    for (int element : arrayOfNum)
    {
        std::cout << element << " " << std::endl;
    }

    return 0;
}

void bubbleSortMethod(int arrayOfNum[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arrayOfNum[j] > arrayOfNum[j + 1])
            {
                temp = arrayOfNum[j];
                arrayOfNum[j] = arrayOfNum[j + 1];
                arrayOfNum[j + 1] = temp;
            }
        }
    }
}