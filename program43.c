/*
input:3
output:A B C
*/
#include<stdio.h>
void pattern(int  num)
{
int i;
char ch='\0';
for(i=1,ch='A';i<=num;i++,ch++)
{
printf("%c \n",ch);
}
}
int main()
{
int ivalue=0;
printf("Enter the number");
scanf("%d",&ivalue);
pattern(ivalue);
return 0;
}
