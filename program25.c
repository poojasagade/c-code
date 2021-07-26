/*Accept the number from user and 
*/
#include<stdio.h>
int reverse(int num)
{
int digit;
int mul=0;
if(num<=0)
{
num=-num;
}
for(;num>0;num=num/10)
{
digit=num%10;
mul=mul*10+digit;
}
return mul;
}
int main()
{
int ivalue;
int ret;
printf("Enter the number");
scanf("%d",&ivalue);
ret=reverse(ivalue);
printf("reverse number is%d",ret);
return 0;
}
