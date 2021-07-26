//accept the number from user and return frequency of that digit 
//input:10
//
#include<stdio.h>
int frequency(int num1,int num2)
{
int i=0;
int idigit=0;
if(i>9)
{
return 0;
}
if(num1<0)
{
num1=-num1;
}
while(num1!=0)
{
idigit=num1%10;
if(idigit==num2)
{
i++;
}
num1=num1/10;
}
return i;
}
int main()
{
int ivalue1=0,ivalue2=0;
int ret=0;
printf("Enter the number");
scanf("%d",&ivalue1);
printf("Enter the number");
scanf("%d",&ivalue2);
ret=frequency(ivalue1,ivalue2);
printf("frequency is %d",ret);
return 0;
}
