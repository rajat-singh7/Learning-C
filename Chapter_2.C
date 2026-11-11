//Instructions and Operators:
#include<stdio.h>
#include<math.h>
int main(){
    //Type declaration Instructions:
    //They all are valid
    int a = 10;
    int b = a;
    int c = b*10;
    int d = 1,e;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    //Also Valid:
    int x_,y_,z_;
    x_=y_=z_ = 10;
    //Not valid:
    //int a = b = c = 18;
    //We cannot declare value and assign at the same time:

    //Arithmetic Instructions:
    int num1 = 29,num2 = 90;
    int sum = num1+num2;
    //NOTE---> single variable on LHS

    //Program for taking the power:
    int x,y;
    scanf("%d%d",&x,&y);
    int power = pow(x,y);
    printf("The value of Power of X and Y is %d\n",power);
    
    //Type conversion:
    int aa = (int) 2.999999;
    printf("%d\n",aa); //removes .999999
    float bb = (float) 23;
    printf("%f\n",bb);
    //Associativity rule apply here(Left to right):
    //Example - 01:
    int xx = (2*6)/(6*2);
    printf("%d\n",xx);
    //Example - 02: (Important):
    int cc = 5*2/2*3; //15
    printf("%d\n",cc);
    //Example - 03: (Important):
    int C = 5+2/2*3; //----->5+(2/2*(3))
    printf("%d\n",C); //8
    //Arithmetic Operators(Done✅)
    //Relational Operators(Done✅)
    //Logical Operators(Done✅)
    
    //Write a Program to Check a number is divisible by 2 or Not without using conditional statement:
    int number;
    scanf("%d",&number);
    printf("%d",number%2==0); 
    //Program for And Operator:
    int xy;
    printf("enter the number\n");
    scanf("%d",&xy);
    printf("%d",xy>9 && xy<100);

    //HomeWork:
    //Write a program to print the average of 3 numbers;
    float a1,a2,a3;
    scanf("%f%f%f",&a1,&a2,&a3);
    float average = (a1+a2+a3)/3.0;
    printf("The Average is:%.2f\n",average);
    return 0;

}