// Dynamic Memory Allocation:
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(char));

    // malloc = Memory Allocation:

    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int)); // 20 bytes memory give

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    // calloc = Continuos allocation:
    // Always initialize with 0
    float *pointer;
    pointer = (float *)calloc(5, sizeof(float));
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", pointer[i]);
    }

    // WAP to allocate memory of n size , where n is entered by user:
    int *ptrr;
    int n;
    printf("enter n:");
    scanf("%d", &n);

    ptrr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptrr[i]);
    }

    // free---> we use it to free memory:
    free(ptrr);

    // realloc-->Used to increase or decrease memory size:
    pointer = realloc(pointer, 8); // here we increase the size
    return 0;
}