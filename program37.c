/*Problem on pattern Printing
In this topic we display some alphanumeric pattern on screen .
the topic of pattern printing is very important to apply logic based on loops.
In this topic we cover 2types patterns as linear pattern and non linear pattern .
In this topic we use single loop,double loop,nested loop.
*/
//accept the number from user and display * on screen 
#include<stdio.h>
void pattern(int  num)
{
int i;
for(i=1;i<=num;i++)
{
printf("* \n");
}
}
int main()
{
int ivalue=0;
printf("Enter the number");
scanf("%d",&ivalue);
pattern(ivalue);
return 0;
}
