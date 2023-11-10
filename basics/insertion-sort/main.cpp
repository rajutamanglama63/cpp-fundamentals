#include <iostream>

void insertionSort(int array[], int size);

int main()
{

    int numArray[] = {6, 3, 5, 2, 1, 4};
    int size = sizeof(numArray) / sizeof(numArray[0]);

    insertionSort(numArray, size);

    for (int element : numArray)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";

    return 0;
}

void insertionSort(int array[], int size)
{
    int temp;

    for (int i = 1; i < size; i++)
    {
        temp = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
    }
}