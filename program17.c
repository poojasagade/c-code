//Problem on numbers
//Accept the number from user and check whether the number is perfect number or not
/*input:
o/p:
*/
//////////////////////////////////////////////////////
//Function name:
//Input:
//Output:
//Function Dsecription:
//Date:
//Author:
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
bool check(int num)
{
int i,sum=0;
if(num<0)
{
	num=-num;
}
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			printf("%d \n",i);
			sum=sum+i;
			
		}
	}
	printf("%d \n",sum);
	if(sum==num)
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
int ivalue=0;
bool bret;
printf("Enter the number");
scanf("%d",&ivalue);
bret=check(ivalue);
if(bret==true)
{
printf("%d number is perfect",ivalue);
}
else
{
printf("%d is not perfect",ivalue);
}
return 0;
}
