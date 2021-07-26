/*Accept the number from user and 
input:5
ouput:1*2*3*4*5*
*/
#include<stdio.h>
void pattern(int  num)
{
int i;
for(i=1;i<=num;i++)
{
printf("%d \t*\t",i);
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
