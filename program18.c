/*accept number from user check whether that number is prime or not
input:7      13      12
output:true true false
*/
#include<stdio.h>
#include<stdbool.h>
bool checkprime(int num)
{
int i;
if(num<=0)
{
num=-num;
}
for(i=2;i<=num/2;i++)
{
	if(num%i==0)
	{
		break;
	}
}
if(i==(num/2)+1)
{
return true;
}
else
{
return false;
}
}
int main()
{
int ivalue;
bool bret;
printf("enter the number");
scanf("%d",&ivalue);
bret=checkprime(ivalue);
if(bret==true)
{
printf("%d number is prime number",ivalue);
}
else
{
printf("%d is not prime number",ivalue);
}
return 0;
}
