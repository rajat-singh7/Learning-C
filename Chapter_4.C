// Loops
#include <stdio.h>
int main()
{
    // Print ABC by for loop:
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c\n", ch);
    }

    // While Loop
    int i = 1;
    while (i <= 3)
    {
        printf("%d ", i);
        i++;
    }

    // do while Loop
    int a = 0;

    do
    {
        printf("%d ", a);
        a++;
    } while (a <= 10);

    // I am already very well versed in loops:

    // Print the sum of first N natural numbers also print the number in reverse:
    int x;
    printf("Enter the value of x:");
    scanf("%d", &x);
    int sum = 0;
    for (int i = 0, j = x; i <= x && j >= 1; i++, j--)
    {
        sum = sum + i;
        printf("%d\n", j);
    }
    printf("Sum is:%d", sum);

    // Print the table of a number input by the user:
    int n;
    printf("enter the number for table:");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    printf("\n");

    // Break statement:
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d\n", i);
    }

    // Question:
    // Keep taking numbers as input from the user until user enters an odd number:
    int c;
    do
    {
        printf("Enter the number:");
        scanf("%d", &c);
        printf("%d\n", c);

        if (c % 2 != 0)
        {
            break;
        }

    } while (1);
    printf("Your loop is complete");

    //Question:
    //keep taking numbers as input from user until user enters a number which is multiple of 7:
    int k;
    do{
        printf("enter:\n");
        scanf("%d",&k);
        printf("%d",k);
        if(k%7==0){
            break;
        }
    }while(1);
    printf("Loop end\n");

    //Continue:
    for(int i = 0;i<=20;i++){
        if(i==17){
            continue;
        }
        printf("%d\n",i);
    }

    //Factorial 
    int f;
    printf("enter the number for factorial:\n");
    scanf("%d",&f);
    int fact = 1;
    for( int i = 1;i<=f;i++){
        fact = fact*i;
    }
    printf("The factorial is:%d",fact);

    //Print the Reverse of table for m;
    int m;
    printf("enter the number for table:");
    scanf("%d",&m);
    for(int i = 10;i>=1;i--){
        printf("%d * %d = %d\n",m,i,m*i);
    }

    return 0;
}
