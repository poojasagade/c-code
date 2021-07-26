//accept the number from user and return the difference of summation of fcator and non factor
//input:10
//18-37=-19  (1+2+5+10)-(3+4+6+7+8+9)
#include<stdio.h>
int difference(int num)
{
int i=0,diff=0;
int sum1=0,sum2=0;
if(num<=0)
{
num=-num;
}
for(i=1;i<=num;i++)
{
if(num%i==0)
{
sum1=sum1+i;
}
else
{
sum2=sum2+i;
}
}
diff=sum1-sum2;
return diff;
}
int main()
{
int ivalue=0;
int ret=0;
printf("Enter the number");
scanf("%d",&ivalue);
ret=difference(ivalue);
printf("difference is %d",ret);
return 0;
}
