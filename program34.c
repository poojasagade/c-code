//Accept the number and return 
//input:89541
//output:8(9-1)
//input:5672
//o/p:5(7-2) it using for loop
#include<stdio.h>
int difference(int num)
{
int imax=0;
int imin=9;
int digit=0;
if(num<=0)
{num=-num;}
for(;num>0;num=num/10)
{
digit=num%10;
if(digit>imax)
{
imax=digit;
}
if(digit<imin)
{
imin=digit;
}
}
return imax-imin;
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
