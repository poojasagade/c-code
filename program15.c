//Problem on numbers
//Accept the number from user and display the factor and time complexity and code optimization
/*input:20
o/p:1 2 4 5 10
*/
//////////////////////////////////////////////////////
//Function name:
//Input:
//Output:
//Function Dsecription:
//Date:
//Author:
//////////////////////////////////////////////////////
//time complexity:O(N/2)
#include<stdio.h>
void factor(int num)
{
int i;
if(num<0)
{
	num=-num;
}
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			printf("%d \n",i);
		}
	}
}
int main()
{
int ivalue=0;
printf("Enter the number");
scanf("%d",&ivalue);
factor(ivalue);
return 0;
}
