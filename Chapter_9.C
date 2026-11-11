//Structures:
#include<stdio.h>
#include<string.h>
//User defined:
struct student {
    char name[100];
    int roll;
    float CGPA;
};

//Structure in function:
void PrintInfo(struct student s1){
    printf("Information of student:\n");
    printf("student name = %s\n",s1.name);
    printf("student roll = %d\n",s1.roll);
    printf("student cgpa = %.2f\n",s1.CGPA);

}

//type def-->Used to create alias:
typedef struct Computer_Science_Engineering{
    char name[100];
    int roll;
    float CGPA;
}coe;

//Write a program to enter the address of 5 persons:
struct Address {
    int house_no;
    int block;
    char city[100];
    char state[100];
};

void PrintAddress(struct Address add){
    printf("Address is : %d %d %s %s \n",add.house_no,add.block,add.city,add.state);
}

//find the sum of two vector:
struct vector{
    int x;
    int y;
};

void VectorSum(struct vector v1,struct vector v2,struct vector sum){
    sum.x = v1.x+v2.x;
    sum.y = v1.y+v2.y;

    printf("The sum of x is:%d\n",sum.x);
    printf("The sum of y is:%d\n",sum.y);
}

//Create a Structure for Complex Number using pointer arrow operator:
struct complex{
    int real;
    int imaginary;
};

//Make a Structure to store Bank account Information of a customer of ABC bank.Also,make an alias for it.
typedef struct BankDetails{
    char Account_Holder_name[100];
    char Branch_name[100];
    long long int Account_Number;
    int IFSC_Code;
}bd;


int main(){
    struct student s1; //s1 = variable:
    //Or Initialization of structure:
    // struct student s1 = {"Rajat",176256,9.7};
    strcpy(s1.name,"Rajat");
    s1.roll = 176256;
    s1.CGPA = 9.7;
    printf("student name = %s\n",s1.name);
    printf("student roll = %d\n",s1.roll);
    printf("student cgpa = %.2f\n",s1.CGPA);

    struct student s2;
    s2.roll = 5463;
    s2.CGPA = 9.0;
    strcpy(s2.name,"Shradha");
    printf("student name = %s\n",s2.name);
    printf("student roll = %d\n",s2.roll);
    printf("student cgpa = %.2f\n",s2.CGPA);

    struct student s3;
    s3.roll = 54673;
    s3.CGPA = 9.5;
    strcpy(s3.name,"Samiksha");
    printf("student name = %s\n",s3.name);
    printf("student roll = %d\n",s3.roll);
    printf("student cgpa = %.2f\n",s3.CGPA);

    //Array of Structure:
    struct student ECE[100];
    struct student CSE[50];
    ECE[0].roll = 786;
    ECE[0].CGPA = 7.9;
    strcpy(ECE[0].name,"Ram");
    printf("Student name of ECE:%s\n",ECE[0].name);
    printf("Roll no of ECE:%d\n",ECE[0].roll);
    printf("Student CGPA of ECE:%.2f\n",ECE[0].CGPA);

    //Pointers to structure:
    struct student *ptr = &s1;
    printf("Student's Roll No-%d\n",(*ptr).roll); //Same roll Number:

    //Arrow Operator:
    //(*ptr).roll  == ptr->roll;
    //Both are same:

    PrintInfo(s1);

    //Typedef struct:
    //struct Computer_Science_Engineering s4;
    coe s4;
    s4.roll = 5637;
    s4.CGPA = 7.9;
    strcpy(s4.name,"ramesh");
    printf("The Name in typedef:%s\n",s4.name);
    printf("The roll in typedef:%d\n",s4.roll);
    printf("The CGPA in typedef:%.1f\n",s4.CGPA);

    struct Address add[5];
    //input:
    printf("enter the address of Person 1:");
    scanf("%d",&add[0].house_no);
    scanf("%d",&add[0].block);
    scanf("%s",add[0].city);
    scanf("%s",add[0].state);

    printf("enter the address of Person 2:");
    scanf("%d",&add[1].house_no);
    scanf("%d",&add[1].block);
    scanf("%s",add[1].city);
    scanf("%s",add[1].state);

    printf("enter the address of Person 3:");
    scanf("%d",&add[2].house_no);
    scanf("%d",&add[2].block);
    scanf("%s",add[2].city);
    scanf("%s",add[2].state);

    printf("enter the address of Person 4:");
    scanf("%d",&add[3].house_no);
    scanf("%d",&add[3].block);
    scanf("%s",add[3].city);
    scanf("%s",add[3].state);

    printf("enter the address of Person 5:");
    scanf("%d",&add[4].house_no);
    scanf("%d",&add[4].block);
    scanf("%s",add[4].city);
    scanf("%s",add[4].state);

    //function call:
    PrintAddress(add[0]);
    PrintAddress(add[1]);
    PrintAddress(add[2]);
    PrintAddress(add[3]);
    PrintAddress(add[4]);

    //find the sum of two vectors:
    struct vector v1 = {5,8};
    struct vector v2 = {7,9};
    struct vector sum = {0};

    VectorSum(v1,v2,sum);

    //Create a Structure for complex numbers using pointer arrow operator:
    struct complex number1 = {5,9};
    struct complex *pointer = &number1;
    printf("The Real Part is:%d\n",pointer->real);
    printf("The imaginary Part is:%d\n",pointer->imaginary);

    //Make a Structure to store Bank account Information of a customer of ABC bank.Also,make an alias for it.
    bd c1 = {"Rajesh","Nazeerganj",45628190002932,6729};
    bd c2 = {"Rohit","Daliganj",645736547347745,6573};
    bd c3 = {"Raj","Hazratganj",456583742932,9056};
    bd c4 = {"Ronit","Charbagh",8574947347745,8593};
    printf("The name of customer 1 is:%s\n",c1.Account_Holder_name);
    printf("The name of customer 2 is:%s\n",c2.Account_Holder_name);
    printf("The name of customer 3 is:%s\n",c3.Account_Holder_name);
    printf("The name of customer 4 is:%s\n",c4.Account_Holder_name);
    



    return 0;
}