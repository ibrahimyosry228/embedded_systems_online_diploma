#include "stdio.h"
//#include "hima.h"

int max(int arr[2], int size)
{
    printf("size = %d\n", sizeof(arr));
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{
    // hima_t ibrahim = {1, 2, 5};
    // const int x = 5;
    // int* p = &x;
    // *p = 8;
    // printf("members: %d, %d, %d\n", ibrahim.x, ibrahim.y, ibrahim.z);

    int arr[5] = {5, 8, 15, 2, 32};
    printf("Real_size = %d\n", sizeof(arr));
    printf("max = %d\n", max(arr, 5));

    return 0;
}