/*Accept number from user and 
input:7585  5
output:2
input:89765 1
o/p: 0
*/
#include<stdio.h>
int digitfreq(int num,int digit)
{
int dig=0,cnt=0;
if((digit<0)&&(digit>9))
{
return 0;
}
if(num<=0)
{
num=-num;
}
while(num!=0)
{
dig=num%10;

if(dig==digit)
{
cnt++;
}
num=num/10;
}
return cnt ;
}


int main()
{
int ivalue,n,res;
printf("Enter the number");
scanf("%d",&ivalue);
printf("enter the number which we have to find");
scanf("%d",&n);
res=digitfreq(ivalue,n);
printf(" number of given digits %d \n",res);
return 0;
}
