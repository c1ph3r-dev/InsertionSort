#include <iostream>

void InsertionSort(int* array, int size)
{
    for (int i = 1; i < size; i++)
    {
        int current = array[i]; // Stores current value in array
        int j = i - 1;
        while (j >= 0 && array[j] >= current) // While previous values are greater than current value
        {
            array[j + 1] = array[j]; // Copy larger values to further in array
            j--;
        }
        array[j + 1] = current; // Place current value in correct position in array
    }
}

int main()
{
    int test[] = {9, 5, 8, 4, 7, 3};
    InsertionSort(test, sizeof(test)/sizeof(test[0]));

    for (auto i: test)
        std::cout << i << std::endl;

    return 0;
}