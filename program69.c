//Enter the string and print character without using pointer
#include<stdio.h>
void display(char str[])
{
int icnt=0;
printf("character of string");
while(str[icnt]!='\0')
{
printf("%c \n",str[icnt]);
icnt++;
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
