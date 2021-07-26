//Accept the number and return the addition of all number till that number
//input:4
//output:4+3+2+1=10
#include<stdio.h>
int sumation(int ivalue)
{
int i;
int sum=0;
if(ivalue==0)
{
return 0;
}
if(ivalue<0)
{
ivalue=-ivalue;
}
for(i=1;i<=ivalue;i++)
{
sum=sum+i;
}
return sum;
}
int main()
{
int ino=0;
int iret;
printf("Enter the number: \n");
scanf("%d",&ino);
iret=sumation(ino);
printf("sumation is %d",iret);
return 0;
}
