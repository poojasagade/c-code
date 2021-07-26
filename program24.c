/*Accept the number from user and  reverse the number
input:5678
output:8765
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
while(num!=0)
{
digit=num%10;
mul=mul*10+digit;
num=num/10;
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
