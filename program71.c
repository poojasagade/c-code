
//Enter the string and print character 
#include<stdio.h>
void display(char *str)
{
printf("character of string");
while(*str!='\0')
{
printf("%c \n",*str);
str++;
}
}
int main()
{
char arr[50];
printf("enter the string");
fgets(arr,50,stdin);
display(arr);
return 0;
}
