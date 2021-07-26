//Enter the string and print character without using pointer and for loop
#include<stdio.h>
void display(char str[])
{
int icnt=0;
printf("character of string");
for(icnt=0;str[icnt]!='\0';icnt++)
{
printf("%c \n",str[icnt]);
}
}
int main()
{
char arr[50];
printf("enter the string");
scanf("%[^'\n']s",arr);
display(arr);
return 0;
}
