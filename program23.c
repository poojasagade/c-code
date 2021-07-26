/*Accept the number from user and return the multiplication of digits
input:7522
output:70
input:4502
outpput:40
*/
#include<stdio.h>
int mult(int num)
{
int mul=1;
int digit;
if(num<=0)
{
num=-num;
}
while(num!=0)
{
digit=num%10;
if(digit!=0)
{
mul=mul*digit;
}
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
ret=mult(ivalue);
printf("Multiplication of digits is %d",ret);
return 0;
}
