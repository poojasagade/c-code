/*Accept the number from user and print on screen
input:5 A
output:A A A A A 
*/
#include<stdio.h>
void pattern(int num,char alphabet)
{
int i;
for(i=1;i<=num;i++)
{
printf("%c\t",alphabet);
}
}
int main()
{
int ivalue=0;
char ch;
printf("Enter the number");
scanf(" %d",&ivalue);
printf("Enter the character");
scanf(" %c",&ch);
pattern(ivalue,ch);
return 0;
}
