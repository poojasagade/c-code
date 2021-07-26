//Problem on numbers
//Accept the 2number from user as x and y and calculate its power
/*input:2  4
output:2*2*2*2
x 2    y  4
1*2=2
2*2=4
4*2=8
8*2=16
*/
//////////////////////////////////////////////////////
//Function name:
//Input:
//Output:
//Function Dsecription:
//Date:
//Author:
//////////////////////////////////////////////////////
#include<stdio.h>
int calculate(int x,int y)
{
int cal=1;
int i;
if(x<0)
{
x=-x;
}
if(y<0)
{
y=-y;
}
for(i=1;i<=y;i++)
{
cal= cal*x;
}
return cal;
}
int main()
{
int ivalue1=0;
int ivalue2=0;
int iret=0;
printf("Enter the first number:");
scanf("%d",&ivalue1);
printf("Enter the second number:");
scanf("%d",&ivalue2);
iret=calculate(ivalue1,ivalue2);
printf("%d ",iret);
return 0;
}
