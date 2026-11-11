#include <stdio.h>
#include <string.h>

// Write a Program to find the maximum between two number using pointer:
void Maximum(int *a, int *b)
{
    if (*a > *b)
    {
        printf("A is Greater than B:");
    }
    else
    {
        printf("B is Greater than A:");
    }
}

// Write a Program to find the numbers of odd numbers in an array:
int CountOdd(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}

// Write a program to print the length of name Entered By user:
int CountLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] != '\0')
        {
            count++;
        }
    }
    return count - 1;
}

// Write a Program to enter a password by user and add salt and give a new password after adding salt:
void salting(char Password[])
{
    char salt[] = "123";
    char newPassword[200];
    strcpy(newPassword, Password); // Newpassword = "Test"
    strcat(newPassword, salt);     // Newpassword = "Test" + "123"
    puts(newPassword);
}

// Write a program to count the occurence of vowels in an string:
int CountVowels(char string[])
{
    int count = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            count++;
        }
    }
    return count;
}

// Write a program to check a character is present or not:
int CheckChar(char strr[], char chh)
{
    for (int i = 0; strr[i] != '\0'; i++)
    {
        if (strr[i] == chh)
        {
            printf("Character is Present:)");
            return 0;
        }
    }
    printf("Character is not present:(");
}

int main()
{
    // int a = 20;
    // int b = 90;
    // Maximum(&a,&b);
    int arr[] = {2, 4, 6, 8, 9, 15, 10, 17};
    printf("The Count is:%d\n", CountOdd(arr, 8));

    // program for fibonacci series:
    int n;
    printf("enter the value of n(N>2):");
    scanf("%d", &n);
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2]; // important
        printf("%d \t", fib[i]);
    }

    // Write a program to print the length of name Entered By user:
    char array[100];

    fgets(array, 100, stdin);
    printf("The Lenght is:%d", CountLength(array));

    // Take the input from user usig %c:
    char string[100];
    char ch;
    int i = 0;
    while (ch != '\n')
    { // Jabtak New line na aaye matlab enter press na kiya jaaye:
        scanf("%c", &ch);
        string[i] = ch;
        i++;
    }
    // We Insert Null character:
    string[i] = '\0';
    puts(string);

    // Write a Program to enter a password by user and add salt and give a new password after adding salt:
    char Password[100];
    scanf("%s", Password);
    salting(Password);

    // Write a program to count the occurence of vowels in an string:
    char stringg[100] = "Rajat";
    printf("The Vowels are:%d\n", CountVowels(stringg));

    // Write a program to check a character is present or not:
    char strr[] = "ApnaCollege.com";
    char chh = 'e';
    CheckChar(strr, chh);

    return 0;
}