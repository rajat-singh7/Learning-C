// Conditional Statements:
#include <stdio.h>
int main()
{
    int age;
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You are eligible to vote\n");
    }
    else
    {
        printf("Not eligible\n");
    }
    // if - else if ladder:
    int marks;
    printf("enter your marks:");
    scanf("%d", &marks);
    if (marks >= 90)
    {
        printf("Grade - A\n");
    }
    else if (marks >= 80)
    {
        printf("Grade - B\n");
    }
    else if (marks >= 70)
    {
        printf("Grade - C\n");
    }
    else if (marks >= 60)
    {
        printf("Grade - D\n");
    }
    else if (marks >= 33)
    {
        printf("Just passed\n");
    }
    else
    {
        printf("failed!Better Luck Next time\n");
    }

    // Ternary Operator;
    age >= 25 ? printf("Adult\n") : printf("Not Adult\n");

    // Making Simple calculator By using Switch Operator:
    int a, b, c;
    char op;
    printf("Enter the value of a and b:\n");
    scanf("%d%d", &a, &b);
    printf("enter the operation which you want to do(+,-,*,/)\n");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        c = a + b;
        printf("%d", c);
        break;
    case '-':
        c = a - b;
        printf("%d", c);
        break;
    case '*':
        c = a * b;
        printf("%d", c);
        break;
    case '/':
        c = a / b;
        printf("%d", c);
        break;
    default:
        printf("Please enter a valid opertion\n");
    }
    // Write a program for uppper case and lower case:
    char ch;
    printf("enter character:\n");
    scanf(" %c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("Lower case\n");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("Upper case\n");
    }
    else
    {
        printf("Not english\n");
    }
    return 0;
}