#include <stdio.h>

void bubble_sort(int* arr, int size);
void merge_sort(int* arr, int size);
void print_array(int* arr, int size);

int main(void)
{
    int array[7] = {5, 7, 3, 4, 1, 2, 6};
    print_array(array, 7);
    bubble_sort(array, 7);
    print_array(array, 7);
    return 0;
}

void bubble_sort(int* arr, int size)
{
    int i, j, tmp;
    for (i = 0; i < size - 2; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] =  tmp;
            }
        }
    }
}

void merge_sort(int* arr, int size)
{

}

void print_array(int* arr, int size)
{
    int i;
    printf("array = [");
    for (i = 0; i < size - 1; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[i]);
}