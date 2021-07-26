//Accept number from user and return the smallest digit
//input:45671
//output:1
//input:90876
//output:0
#include<stdio.h>
int mindigit(int num)
{
int digit=0,imin=9;
if(num<=0)
{
num=-num;
}
while(num>0)
{
digit=num%10;
if(digit<imin)
{
imin=digit;
if(imin==0)
{
break;
}
}
num=num/10;
}
return imin;
}
int main()
{
int ivalue,iret;
printf("Enter the number");
scanf("%d",&ivalue);
iret=mindigit(ivalue);
printf("Minimum digit is %d",iret);
return 0;
}

