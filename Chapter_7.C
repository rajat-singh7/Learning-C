//Array:
#include<stdio.h>

//pass Arrays in function:
void PrintNumbers(int arr[],int size){
    for(int i = 0;i<size;i++){
        printf("%d \t",arr[i]);
    }
}
int main(){
    //Initialization of an array:
    // int age[2] = {4,5};
    // int age[] = {4,5,6};

    int marks[3];
    printf("enter marks of physics:");
    scanf("%d",&marks[0]);

    printf("enter marks of chemistry:");
    scanf("%d",&marks[1]);

    printf("enter marks of maths:");
    scanf("%d",&marks[2]);
    printf("Physics = %d,Chemistry = %d,Maths = %d\n",marks[0],marks[1],marks[2]);

    //Write a program to enter price of 3 items and print final cost with gst:
    float prices[3];
    printf("Enter Three prices:\n");
    scanf("%f",&prices[0]);
    scanf("%f",&prices[1]);
    scanf("%f",&prices[2]);
    printf("Total price of first item:%.2f\n",prices[0]+(0.18*prices[0]));
    printf("Total price of second item:%.2f\n",prices[1]+(0.18*prices[1]));
    printf("Total price of third item:%.2f\n",prices[2]+(0.18*prices[2]));

    //Pointer Arithematic:
    int age = 22;
    int *ptr = &age;
    printf("Pointer = %u\n",ptr);
    ptr++;
    printf("Pointer = %u\n",ptr); //Increased by 4(due to int variable) Number:

    int a = 22;
    int _a = 23;
    int *p = &a;
    int *_p = &_a;
    printf("Difference Between pointer = %u\n",p-_p); //diff will be 1 because this show online int difference:
    _p = &a;
    printf("Comparison Between pointer = %u\n",p==_p); //True

    //Note Point ---> Array is a Pointer

    //Transverse in an array:
    int adhaar[5];
    int *pointer = &adhaar[0];
    //Input:
    for(int i = 0;i<5;i++){
        printf("%d index = ",i);
        scanf("%d",(pointer+i));
    }
    //For output:
    for(int i = 0;i<5;i++){
        printf("%d index = %d\n",i,*(pointer+i));
    }

    int arr[] = {2,4,6,8};
    PrintNumbers(arr,4);

    //2D array:
    //2 Student and Marks of three subjects:
    int score[2][3];
    score[0][0] = 90;
    score[0][1] = 80;
    score[0][2] = 78;

    score[1][0] = 100;
    score[1][1] = 98;
    score[1][2] = 90;
    printf("%d\n",score[0][0]);
    printf("%d\n",score[0][1]);
    printf("%d\n",score[0][2]);
    printf("%d\n",score[1][0]);
    printf("%d\n",score[1][1]);
    printf("%d\n",score[1][2]);




    return 0;
}