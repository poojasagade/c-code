//input:4
//output:-4 -3 -2 -1 0 1 2 3 4
#include<stdio.h>
void numberline(int num)
{
int i;
printf("/n");
for(i=-num;i<=num;num++)
{
printf("%d \n",i);
}
}
int main()
{
int ivalue=0;
int iret;
printf("Enter the number");
scanf("%d",&ivalue);
numberline(ivalue);
return 0;
}
