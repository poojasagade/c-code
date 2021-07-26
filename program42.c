/*Accept the number from user and 
input:5
output:A B C D E
input:3
output:A B C
*/
#include<stdio.h>
void pattern(unsigned int num)
{
int i;
char ch='A';
for(i=1;i<=num;i++)
{
printf("%c \n",ch);
ch++;
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
