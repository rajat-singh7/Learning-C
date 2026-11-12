// Pointer:
#include <stdio.h>

// Call by value:
void square(int n)
{
    n = n * n;
    printf("Square = %d\n", n);
}

// Call by Reference:
void _square(int *n)
{
    *n = (*n) * (*n);
    printf("Square = %d\n", *n);
}

// Swapping of two Numbers:
//  call by value:
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d & b = %d\n", a, b);
}

// call by reference:
void _swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Question--Will the address be same?
void PrintAddress(int n)
{
    printf("The address of n is :%p\n", &n);
}

// For Multiple values:(Pass By Reference)
void doWork(int a, int b, int *sum, int *prod, int *average)
{
    *sum = a + b;
    *prod = a * b;
    *average = (a + b) / 2;
}
int main()
{
    int a = 10;
    int *ptr = &a;
    printf("The address of a is:%p\n", &a);
    printf("The Address of a is:%p\n", ptr);
    printf("The Address of a is:%u\n", ptr);
    printf("Value :%d\n", a);
    printf("Value :%d\n", *ptr);
    printf("Value :%d\n", *(&a));

    // Question:
    int x;
    int *p;
    p = &x;
    *p = 0;
    printf("x is:%d\n", x);   // 0
    printf("*p is:%d\n", *p); // 0

    *p += 5;
    printf("x is:%d\n", x);   // 5
    printf("*p is:%d\n", *p); // 5
    (*p)++;
    printf("x is:%d\n", x);   // 6
    printf("*p is:%d\n", *p); // 6

    // Pointer to Pointer:
    float price = 167.0;
    float *pointer = &price;
    float **pointer2 = &pointer;
    printf("%p\n", pointer);
    printf("%p\n", pointer2);
    printf("%f\n", **pointer2);

    // Call by value:
    int number = 4;
    square(number);
    printf("Number  = %d\n", number);

    // Call By reference
    _square(&number);
    printf("Number  = %d\n", number);

    // swapping of two numbers:
    // call by value:
    int first = 10;
    int second = 20;
    swap(first, second);
    printf("first = %d & second = %d\n", first, second); // Not Swap here

    // call reference:
    _swap(&first, &second);
    printf("first = %d & second = %d\n", first, second); // Swap Here

    // Question--Will the address be same?
    int n = 4;
    PrintAddress(n);
    printf("The address of n is :%p\n", &n);
    // NO

    // do work:
    int n1 = 10;
    int n2 = 20;
    int sum, prod, average;
    doWork(n1, n2, &sum, &prod, &average);
    printf("Sum = %d & product = %d & average = %d", sum, prod, average);
    return 0;
}