/*accept number from user and return addition of all digit from that number
input:7521
output:7+5+2+1=15
*/
#include<stdio.h>
int display(int num)
{
int digit;
int sum=0;
if(num<=0)
{
num=-num;
}
while(num!=0)
{
digit=num%10;
printf("%d\n",digit);
num=num/10;
sum=sum+digit;
}
return sum;
}
int main()
{
int ivalue,res;
printf("Enter the number");
scanf("%d",&ivalue);
res=display(ivalue);
printf(" summation of digit is%d \n",res);
return 0;
}

