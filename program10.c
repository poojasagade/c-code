//accept the number from user and display the table of that number
//input 4
//output 4 8 12 16 20 24 28 32 38 40
//////////////////////////////////////////////
//Function name:display
//Input:intenger
//output:intenger
//Function Description:
//Author:Pooja Bharat Sagade
//Date:1/03/2021
//////////////////////////////////////////////
#include<stdio.h>
void display(int num)
{
int i;
if(num<0)
{
num=-num;
}
for(i=1;i<=10;i++)
{  
printf("%d \n",num*i); 
 }
/*i=num;
while(i<=num*10)        

{
printf("%d \n",i);
i=i+num;
}*/
}
int main()
{
int ivalue=0;
printf("Enter the number");
scanf("%d",&ivalue);
display(ivalue);
return 0;
}
