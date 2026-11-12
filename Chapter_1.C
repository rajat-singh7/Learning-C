#include<stdio.h>
int main(){
    //first program
    printf("hello");
    //Variables And data Types:
    int r = 19;
    char s = 'A';
    float pi = 3.14;
    int _age = 17;
    printf("\nAge is: %d\n",_age);
    printf("The Value of pi:%f\n",pi);
    //For line:
    printf("rajat \n singh");
    //for tab:
    printf("\nrajat \tsingh\n");
    //They are escape sequence character:
    
    //Input:
    int marks;
    printf("enter your marks:");
    scanf("%d",&marks);
    printf("Your marks is %d \n",marks);

    //Small Homework Problem :
    int a,b,sum;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    sum = a+b;
    printf("Your sum is: %d\n",sum);

    //write a program to calculate the area of square:
    int side;
    printf("enter the side of square:\n");
    scanf("%d",&side);
    int area;
    area = side*side;
    printf("Area is:%d\n34",area);

    //Write a Program to calculate area of circle:
    int radius;
    printf("radius:");
    scanf("%d",&radius);
    float area_circle = 3.14*radius*radius;
    printf("The area of circle is:%.2f\n",area_circle);

    //write a program to convert fahrenheit to celsius:
    float fah;
    printf("enter fahrenheit\n");
    scanf("%f",&fah);
    float celsius = (fah-32)*5/9;
    printf("The Celsius is:%.2f\n",celsius);

    //write a program to swapping the two numbers:
    int num1 = 10;
    int num2 = 20;
    int temp;
    printf("Number 1 before %d\n",num1);
    printf("Number 2 before %d\n",num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Number 1 after %d\n",num1);
    printf("Number 2 after %d\n",num2);
    return 0;
}