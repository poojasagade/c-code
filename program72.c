//accept the string from user and  return the length of string
#include<stdio.h>
int display(char str[])
{
int cnt=0;
while(*str!='\0')
{
cnt++;
printf("%d:%c:%d \n",cnt,*str,*str);
str++;
}
return cnt;
}
int main()
{
char arr[50];
int iret=0;
printf("enter the string");
fgets(arr,50,stdin);
//scanf("%[^'\n']s",arr);
iret=display(arr);
printf("string length is:%d \n",iret);
return 0;
}
