/*Accept the number from user and print the #* on screen 
input:5
output:*#*#*#*#
*/
#include<stdio.h>
void pattern(unsigned int  num)
{
int i;
for(i=1;i<=num;i++)
{
printf("* \t # \t ");
}
}
int main()
{
unsigned int ivalue=0;
printf("Enter the number");
scanf("%u",&ivalue);
pattern(ivalue);
return 0;
}
