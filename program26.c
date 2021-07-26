/*Accept the number from user and check the number is palindrome or not
time complexity:O(N) where N is number of digits in the input
*/
#include<stdio.h>
#include<stdbool.h>
bool chkpalindrome(int num)
{
int digit,irev=0,temp=0;
if(num<=0)
{
num=-num;
}
temp=num;
while(num!=0)
{
digit=num%10;
irev=irev*10+digit;
num=num/10;
}
if(temp==irev)
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
int ivalue;
bool ret;
printf("Enter the number");
scanf("%d",&ivalue);
ret=chkpalindrome(ivalue);
if(ret==true)
{
printf("  number is palindrome ");
}
else
{
printf("  number is not palindrome ");
}
return 0;
}
