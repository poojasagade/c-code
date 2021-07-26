/*Write the program which accept the number  from user and display pattern
input:rows 4   cols 4
output: 1  2 3 4
	*  * * *
	1 2  3 4
	* *  * *
*/
#include<stdio.h>
void pattern(int rows,int cols)
{
int i,j;
for(i=1;i<=rows;i++)
{
for(j=1;j<=cols;j++)
{
if(i%2==0)
{
printf("*\t ");
}
else
{
printf("%d \t",j);
}
}

printf("\n");
}
}
int main()
{
int ivalue1,ivalue2;
printf("Enter the number");
scanf("%d",&ivalue1);
printf("Enter the number");
scanf("%d",&ivalue2);
pattern(ivalue1,ivalue2);
return 0;
}

