// Function:
#include <stdio.h>
#include <math.h>
// First function:
// function definition:
void printHello()
{
    printf("hello!\n");
}

// Write a function that prints Namaste if user is Indian and prints Bonjour if user is French:
void namaste()
{
    printf("Namaste!\n");
}
void Banjour()
{
    printf("Banjour!\n");
}

// Write the function for add two numbers;
int sum(int x, int y)
{
    return x + y;
}

// Write a function to print the table:
void PrintTable(int n)
{ // Parameter/formal parameter
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}

// Use library function to print the square of Number entered by user:
int Square(int n)
{
    int result = pow(n, 2);
    return result;
}

// Write function to calculate area of square:
int Area_Square(int x)
{
    int result = x * x;
    return result;
}

// Write function to calculate area of Rectangle:
int Area_Rectangle(int l, int b)
{
    int result = l * b;
    return result;
}

// Write function to calculate area of Circle:
float Area_Circle(int radius)
{
    float result = 3.14 * radius * radius;
    return result;
}

int main()
{
    // function call
    printHello();
    printf("enter f for french and i for indian:");
    char ch;
    scanf("%c", &ch);
    if (ch == 'f')
    {
        Banjour();
    }
    else
    {
        namaste();
    }
    int a;
    printf("enter a:");
    scanf("%d", &a);
    int b;
    printf("enter b:");
    scanf("%d", &b);
    int result = sum(a, b);
    printf("The Sum is:%d\n", result);

    // Table function:
    int n;
    printf("enter the number for table:\n");
    scanf("%d", &n);
    PrintTable(n); // Argument/Actual parameter

    // Square function:
    int number;
    printf("enter the number for square:\n");
    scanf("%d", &number);
    int ans = Square(number);
    printf("The Square is:%d\n", ans);

    // sqaure area:
    int side;
    printf("enter the side of square:\n");
    scanf("%d", &side);
    int answer = Area_Square(side);
    printf("The Area of Square is:%d\n", answer);

    // Rectangle area:
    int length;
    int breadth;
    printf("enter the length of Rectangle:\n");
    scanf("%d", &length);
    printf("enter the breadth of Rectangle:\n");
    scanf("%d", &breadth);
    int answer1 = Area_Rectangle(length, breadth);
    printf("The Area of Reactangle is:%d\n", answer1);

    // Circle area:
    int radius;
    printf("enter the radius of circle:\n");
    scanf("%d", &radius);
    float answer2 = Area_Circle(radius);
    printf("The Area of circle is:%.2f\n", answer2);

    return 0;
}