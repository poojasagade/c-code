//Accept the number and display the number till the numbers
/*
Algorithm
	Start
	Accept the number from user as ino1
	if the number is negative then it convert it into positive
	create the counter as icnt which is set to 1
	iterate the counter  less than equal to the number
	incrament the counter by 1
	continue
	End
*/
#include<stdio.h>
void display(int);
int main()
{
	int ino1=0;
	printf("Enetr the number : \n");
	scanf("%d",&ino1);
	display(ino1);
	return 0;
} 
void display(int ivalue)
{
int icnt;
if(ivalue==0)
{
return;
}
if(ivalue<0)//input updater
{
ivalue=-ivalue;
}
for(icnt=ivalue;icnt>=0;icnt--)//1.initiliasation 2.condition 3. increament or decreament
{
printf("%d \n",icnt);
//1 (2 4 3) (2 4 3) (2 4 3) (2 4 3) ( 2 4 3) 2 stop
}
}
