// file IO:
#include <stdio.h>
int main()
{
    // file type ka pointer:
    //  FILE *fptr;
    //  fptr = fopen("test.txt","r"); //r = read mode
    //  if(fptr==NULL){
    //      printf("the file is not exist\n");
    //  }
    //  else{
    //      fclose(fptr);
    //  }

    // fptr = fopen("new.txt","w"); //A New file is created
    // if(fptr==NULL){
    //     printf("the file is not exist\n");
    // }
    // else{
    //     fclose(fptr);
    // }

    // r = open to read;
    // rb = open to read in binary format;
    // w = open to write;
    // wb = open to write in binary format;
    // a = append new things;

    // How to read from a file:
    //  FILE *fptr;
    //  fptr = fopen("test.txt","r");
    //  char ch;
    //  fscanf(fptr,"%c",&ch);
    //  printf("character = %c\n",ch);
    //  fscanf(fptr,"%c",&ch);
    //  printf("character = %c\n",ch);
    //  fscanf(fptr,"%c",&ch);
    //  printf("character = %c\n",ch);
    //  fscanf(fptr,"%c",&ch);
    //  printf("character = %c\n",ch);
    //  fscanf(fptr,"%c",&ch);
    //  printf("character = %c\n",ch);

    // How to write in a file:
    //  FILE *fptr;
    //  fptr = fopen("test.txt","w");
    //  fprintf(fptr,"%c",'M');
    //  fprintf(fptr,"%c",'A');
    //  fprintf(fptr,"%c",'N');
    //  fprintf(fptr,"%c",'G');
    //  fprintf(fptr,"%c",'O');
    //  fclose(fptr);

    // How to Append in a file:
    //  FILE *fptr;
    //  fptr = fopen("test.txt","a");
    //  fprintf(fptr,"%c",'M');
    //  fprintf(fptr,"%c",'A');
    //  fprintf(fptr,"%c",'N');
    //  fprintf(fptr,"%c",'G');
    //  fprintf(fptr,"%c",'O');
    //  fclose(fptr);

    // Use of fgetc---> for read from file:
    // Use of fputc---> for write in file:
    // Syntax:
    // printf("%c\n",fgetc(fptr));(for this open file in read mode)
    // printf('A',fptr); (for this open file in write mode)

    // EOF = END OF FILE:

    // MAKE A PROGRAM TO ENTER THE INFORMATION OF STUDENT AND STORE IT IN AN FILE:
    FILE *fptr;
    fptr = fopen("Student.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter your name:\n");
    scanf("%s", name);
    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("Enter your cgpa:\n");
    scanf("%f", &cgpa);

    fprintf(fptr, "Student name:%s\n", name);
    fprintf(fptr, "Student age:%d\n", age);
    fprintf(fptr, "Student CGPA:%f\n", cgpa);

    return 0;
}