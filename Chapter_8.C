//String
#include<stdio.h>
#include<string.h>
int main(){
    //initialization of string:
    char name[] = {'R','A','J','A','T','\0'};
    char name1[] = "RAJAT";
    printf("%s\n",name);
    printf("%s\n",name1);
    //How to tak input in string:
    int address[50];
    scanf("%s",address);
    printf("Your address is:%s",address);

    //How to take full name:
    //use of gets and puts:
    char str[100];
    gets(str); //Use fgets(str,n,stdin)
    puts(str);

    //We Can Reinitialize our string if we use pointer:
    char *CanChange = "Hello World";
    puts(CanChange);
    CanChange = "Hello";
    puts(CanChange);

    //We Cannot Reinitialize our string if we use array notation:
    // char CannotChange[] = "Hello World";
    // puts(CannotChange);
    // CannotChange = "Hello";
    // puts(CannotChange);

    //first Library Function---->strlen
    //Using Library function to print the lenght of string:
    char naming[] = "rajat";
    int length = strlen(naming);
    printf("The Lenght is:%d\n",length);

    //Second Library function---->strcpy(newstr,oldstr);
    char OldString[100] = "rajat";
    char NewString[] = "Singh";
    strcpy(NewString,OldString);
    puts(NewString);

    //Third Library function----> strcat() Use for string concatenation:
    char age[] = "Twelve";
    char age2[] = "Thirteen";
    strcat(age,age2);
    puts(age); //TwelveThirteen

    //Forth Library function----> strcmp(firststr,secondstr);
    //0-->strings are equal:
    //Positive --> First>Second(ASCII Value Matters):
    //Negative --> First<Second(ASCII Value Matters):
    char first[] = "Apple";
    char second[] = "Banana";
    printf("%d",strcmp(first,second)); //Expected Output(-1)
    printf("%d",strcmp(second,first)); //Expected Output(1)

    
    
    


    
}