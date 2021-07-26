//Problem on numbers
//Accept the 2number from user as x and y and calculate its factorial
/*input:5 
o/p:5*4*3*2*1
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
int fac(int num)
{
int imul=1,i;
if(num<0)
{
num=-num;
}
if(num==0)
{
return 0;
}
for(i=1;i<=num;i++)
{
imul=imul*i;
}
return imul;
}
int main()
{
int ivalue=0,res=0;
printf("Enter the number");
scanf("%d",&ivalue);
res=fac(ivalue);
printf("%d",res);
return 0;
}
