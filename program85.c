/*
Accept the string from user and reverse the string
input:abcd
ouput:dcba
*/
#include<stdio.h>
void convert(char str[])
        {
        char *start,*end;
        char temp;
        if(str==NULL)
        {
                return ;
        }
        start=str;
        end=str;
        while(*end!='\0')
        {      
                end++;
        }
        end--;
        while(start<end)
        {
                temp=*start;
                *start=*end;
                *end=temp;
                start++;
                end--;
        }
}
int main()
{
        char arr[87];
        printf("Enter the string");
        scanf("%[^'\n']s",arr);
        convert(arr);
        printf(" Reverse String is %s",arr);
        return 0;
}
