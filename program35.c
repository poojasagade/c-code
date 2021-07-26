#include<stdio.h>
int difference(int num)
{
int i;
int digit=0;
if(num<=0)
{num=-num;}
while(num!=0)
{
digit=num%10;
if((digit>=3)&&(digit<=7))
{
i++;
}
num=num/10;
}
return i;
}
int main()
{
int ivalue=0;
int iret;
printf("Enter the number");
scanf("%d",&ivalue);
iret=difference(ivalue);
printf("difference is %d",iret);
return 0;
}
