/*Accept the number from user and 
input:5
output:*5*4*3*2*1
*/
#include<stdio.h>
void pattern(int  num)
{
int i;
for(i=num;i>=1;i--)
{
printf("*\t%d\t",i);
}
}
int main()
{
int ivalue=0;
printf("Enter the number");
scanf("%d",&ivalue);
pattern(ivalue);
return 0;
}
