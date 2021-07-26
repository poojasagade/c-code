//for long number
//Accept number from user and return the smallest digit
//input:45671
//output:1
//input:9087609875342
//output:0
//unsigned long int is 8 byte means 64bit 2^64
#include<stdio.h>
typedef unsigned long int ULONG;
int mindigit(ULONG num)
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
ULONG ivalue=0;
int iret;
printf("Enter the number");
scanf("%lu",&ivalue);
iret=mindigit(ivalue);
printf("Minimum digit is %d",iret);
return 0;
}

