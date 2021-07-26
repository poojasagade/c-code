//accept the 2 number from user and second number is completedly divide by the 1st number
//input 10 5
//output yes
//input: 7  6
//output:no
//////////////////////////////////////////////
//Function name:check
//Input:intenger
//output:Boolean
//Function Description:2nd number is completely divisible by 1st number
//Author:Pooja Bharat Sagade
//Date:1/03/2021
//////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool check(int ino1,int ino2)
{
if((ino1%ino2)==0)
{
return true;
}
else
{
return false;
}
}
int main()
{
int ivalue1=0;
int ivalue2=0;
bool iret=false;
printf("Enter the first number");
scanf("%d",&ivalue1);
printf("Enter the second number");
scanf("%d",&ivalue2);
iret=check(ivalue1,ivalue2);
if(iret==true)
{
printf(" %d  is completely divisible by %d number",ivalue1,ivalue2);
}
else
{
printf("%d  number is not divisible %d",ivalue1,ivalue2);
}
return 0;
}
