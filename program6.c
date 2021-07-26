//even or oddd
#include<stdio.h>
#include<stdbool.h>
bool check(int ino)
{
if(ino%2==0)
{
return true;
}
else
{
return false;
}
}
int main()
{
int ivalue=0;
bool ret;
printf("Enter the number");
scanf("%d",&ivalue);
ret=check(ivalue);
if(ret==true)
{
printf("%d even number ",ivalue);
}
else
{
printf(" %d odd number",ivalue);
}
return 0;
}
