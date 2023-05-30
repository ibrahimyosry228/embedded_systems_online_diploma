#include <stdio.h>
#include <string.h>

unsigned long int (* avg())[3]
{
    static unsigned long int arr[3] = {1, 2, 3};
    return &arr;
}

int f(); 

int main()
{
    // int a = 12;
    // void* ptr = (int*)&a;
    // printf("%d\n", *ptr);

    // int arr[3][4] = {1, 11, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // printf("%d, %d, %d, %d\n", arr[1], arr[0] + 1, *(arr[0] + 1), *(*(arr + 0) + 1));

    // unsigned long int (*ptr)[3];
    // ptr = avg();
    // printf("%d\n", *(*ptr + 2));

    // int arr[12] = {1, 11, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int c = f(7[arr], 5);
    // printf("%d\n", c);

    // struct bitfield
    // {
    //     unsigned a: 5;
    //     unsigned c: 5;
    //     unsigned b: 6;
    // }bit;
    // char* p;
    // struct bitfield *ptr, bit1={1,3,3};
    // p = &bit1;
    // p++;
    // printf("%d\n", *p);

    // int x = 5;
    // int* p = &x;
    // printf("p = %p, *p++ = %d, p = %p\n", p, *p++, p);
    // printf("*++p = %d, p = %p\n", ++*p, p);

    // int arr[2][3]= {1,2,3,4,5,6};
    // int (*ptr)[2][3] = &arr;
    // printf("%d\t%d\t%d\t%d\n", ***ptr, ***(ptr + 1), **(*ptr + 1), *(*(*ptr + 1) + 2)); //1,garbage,4,6

    // char* str;
    // str = "%d %d\n";
    // str++; str++;
    // printf("%d\n");

    // int a = 5, b = 10, c;
    // int *p = &a, *q = &b;
    // c = p -q;
    // printf("%d\n", c);

    // int arr[5][5];
    // printf("%d\n", ((arr == *arr) && (*arr == arr[0])));

    char* ptr1 = NULL;
    char* ptr2 = 0;
    strcpy(ptr1, "c");
    strcpy(ptr2, "q");

    printf("%s  %s\n", ptr1, ptr2);

    return 0;
}

int f(int x, int y)
{
    return x+++ y++;
}