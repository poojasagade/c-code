//accept  the string from user and return the number of times a present
//input:poojaa
//output:2
#include<stdio.h>
int counta(char str[])
{
int icnt=0,i=0;
printf("character of string");
if(str==NULL)
{
        return 0;
}
        while(*str!='\0')
        {
                if(*str=='a')
                {
                        i++;
                }
        str++;
        }
return i;
}
int main()
{
char arr[50];
int iret;
printf("enter the string");
scanf("%[^'\n']s",arr);
iret=counta(arr);
printf("Frequency of a %d",iret);
return 0;
}
