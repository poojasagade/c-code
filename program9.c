//accept the number from user and state student is fail or pass
/*0-35   fail
35-50   pass class
50-60   second class
60-70   first class
70 above   first class with distinction*/
//////////////////////////////////////////////
//Function name:checkresult
//Input:intenger
//output:string
//Function Description:pass or fail
//Author:Pooja Bharat Sagade
//Date:1/03/2021
//////////////////////////////////////////////
#include<stdio.h>
void checkresult(int num)
{
	if((num<0)||(num>100))//input filter
	{
		printf("invalid marks");
	}
	else if((num>0)&&(num<35))
	{
		printf("fail");
	}
	else if((num>=35)&&(num<50))
	{
		printf("pass class");
	}
	else if((num>=50)&&(num<60))
	{
		printf("second class");
	}
	else if((num>=60)&&(num<70))
	{
		printf("first class");
	}
	else
	{
		printf("First class with disdtinction");
	}
}
int main()
{
	int mark;
	printf("Enter the marks");
	scanf("%d",&mark);
	checkresult(mark);
	return 0;
}
