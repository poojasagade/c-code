/*Accept the number from user and display square pattern
non linear pattern
input:3 3
output:
	* * *
	* * *
	* * *
*/
#include<stdio.h>
void pattern(int rows,int cols)
{
int i,j;
for(i=1;i<=rows;i++)
{
	for(j=1;j<=cols;j++)
	{
		printf("*");
	}
	printf("\n");
}
}
int main()
{
int ivalue1=0;
int ivalue2=0;
printf("Enter the number");
scanf("%d",&ivalue1);
printf("Enter the number");
scanf("%d",&ivalue2);
pattern(ivalue1,ivalue2);
return 0;
}
