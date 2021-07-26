//Problem on numbers
//Accept the number from user and return the addition of its factor
/*input:20
o/p:1 +2+ 4 +5 +10+20=42
*/
//////////////////////////////////////////////////////
//Function name:
//Input:
//Output:
//Function Dsecription:
//Date:
//Author:
//////////////////////////////////////////////////////
//time complexity:O(N)
#include<stdio.h>
void factor(int num)
{
int i,sum=0;
if(num<0)
{
	num=-num;
}
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d \n",i);
			sum=sum+i;
			
		}
	}
	printf("%d \n",sum);
}
int main()
{
int ivalue=0;
printf("Enter the number");
scanf("%d",&ivalue);
factor(ivalue);
return 0;
}
