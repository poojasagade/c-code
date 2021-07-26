/*accept the number from user and return the largest digit*/
#include<stdio.h>
int maxdigit(int num)
{
int digit;
int temp;
if(num<=0)
{
num=-num;
}
while(num!=0)
{
digit=num%10;
if(digit>temp)
{
temp=digit;
}
num=num/10;
}
return temp;
}
int main()
{
int ivalue;
int ret;
printf("Enter the number");
scanf("%d",&ivalue);
ret=maxdigit(ivalue);
printf("maximum digit is %d",ret);
return 0;
}
