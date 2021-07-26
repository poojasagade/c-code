//accept the number from user and check whether the number is divisible by 3 and 5
//input 10
//output no
//////////////////////////////////////////////
//Function name:check
//Input:intenger
//output:Boolean
//Function Description:check the number is divisible by 3 and 5
//Author:Pooja Bharat Sagade
//Date:1/03/2021
//////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
bool check(int ino)
{
if((ino%3==0)&&(ino%5==0))
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
int ivalue=0;
bool iret=false;
printf("Enter the number");
scanf("%d",&ivalue);
iret=check(ivalue);
if(iret==true)
{
printf("%d number is divisible by 3 and 5",ivalue);
}
else
{
printf("%d not divisible",ivalue);
}
return 0;
}
