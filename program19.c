/*accept number from user and display the digit o that numbers separately in reverse order
input:7521
output:1  2  5  7
problems on digit:
1).in this topic we accept number from user and break that number into its smallest part i.e digit
2).we applly own logic basec on that digits 
3).in this topic we consider only decimal numbering system 
*/
#include<stdio.h>
void display(int num)
{
int digit;
if(num<=0)
{
num=-num;
}
while(num!=0)
{
digit=num%10;
printf("%d\n",digit);
num=num/10;
}

}
int main()
{
int ivalue;
printf("Enter the number");
scanf("%d",&ivalue);
display(ivalue);
return 0;
}

