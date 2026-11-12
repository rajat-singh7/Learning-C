// Recursion:
#include <stdio.h>
// function 1:
void PrintHello(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Hello!\n");
    PrintHello(count - 1); // recursive call
}

// Print the sum of first n natural number:
int Sum(int n)
{
    // Base Case:
    if (n == 1)
        return 1;
    int sumNm1 = Sum(n - 1);
    int SumN = sumNm1 + n;
    return SumN;
}

// Write A Program for Factorial:
int Fact(int n)
{
    // base case:
    if (n == 0)
        return 1;

    int fact = Fact(n - 1);
    int factorial = fact * n;
    return factorial;
}

// Write a program o convert temperature fahrenheit to celsius:
float fahrenheitTOcelsius(float fah)
{
    float celsius = (5.0 / 9.0) * (fah - 32.0);
    return celsius;
}

// Write a function to calculate percentage:
int Calculate_Percenatage(int science, int maths, int english)
{
    return (science + maths + english) / 3;
}

int main()
{
    PrintHello(10);
    printf("The sum is:%d\n", Sum(10));
    printf("The Factorial of The Number is:%d\n", Fact(5));

    float fahrenheit;
    printf("enter the temp in fahrehiet:\n");
    scanf("%f", &fahrenheit);
    float ans = fahrenheitTOcelsius(fahrenheit);
    printf("Temperature in Celsius:%.2f\n", ans);

    int science;
    printf("enter the marks of science:\n");
    scanf("%d", &science);
    int maths;
    printf("enter the marks of maths:\n");
    scanf("%d", &maths);
    int english;
    printf("enter the marks of english:\n");
    scanf("%d", &english);
    int answer = Calculate_Percenatage(science, maths, english);
    printf("The Percenatge is:%d\n", answer);
    return 0;
}