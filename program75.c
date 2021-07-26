//accept  the string from user and return the number of times a or A present
//input:poojaaA
//output:3
#include<stdio.h>
int counta(char str[])
{
int icnt=0,i=0;
printf("character of string");
if(str==NULL)
{
        return 0;
}
        while(str[icnt]!='\0')
        {
                if((str[icnt]=='a')||(str[icnt]=='A'))
                {
                        i++;
                }
        icnt++;
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
