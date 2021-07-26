/*Write the program which accept the number  from user and display pattern
input:rows 4   cols 4
output:       1,1  1,2  1,3  1,4
	      2,1  2,2  2,3  2,4
	      3,1  3,2  3,3  3,4
	      4,1  4,2  4,3  4,4
	      
	      A
	      A  B
	      A  B  C
	      A  B  C  D
	      
*/
#include<stdio.h>
void pattern(int rows,int cols)
{
if(rows!=cols)
{
	return ;
}
int i,j;
char ch='\0';
for(i=1;i<=rows;i++)
{
	for(j=1,ch='A';j<=cols;j++,ch++)
	{
		if(i>=j)
		{
			printf("%c\t",ch);
			
		}
		else
		{
			printf("\t");
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


