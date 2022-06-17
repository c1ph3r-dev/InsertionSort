#include <iostream>

void InsertionSort(int* array, int size)
{
    for (int i = 1; i < size; i++)
    {
        int current = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] >= current)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = current;
    }
}

int main()
{
    int test[] = {1, 2, 8, 4, 7, 3};
    InsertionSort(test, sizeof(test)/sizeof(test[0]));

    for (auto i: test)
        std::cout << i << std::endl;

    return 0;
}