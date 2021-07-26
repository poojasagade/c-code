/*accept number from user and return even digit count
input:8642
output:4
*/
#include<stdio.h>
int display(int num)
{
int digit;
int count;
if(num<=0)
{
num=-num;
}
while(num!=0)
{
digit=num%10;
if(digit%2==0)
{
count++;
}
num=num/10;
}
return count;
}
int main()
{
int ivalue,res;
printf("Enter the number");
scanf("%d",&ivalue);
res=display(ivalue);
printf(" even digits are %d \n",res);
return 0;
}
