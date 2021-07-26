/*
Accept the string from user and reverse the string
input:
ouput:
*/
#include<stdio.h>
void convert(char str[])
        {
        if(str==NULL)
        {
                return ;
        }
        int icnt=0;
        while(*str!='\0')
        {
        icnt++;
        str++;
        }
        str--;
        for(;icnt>0;icnt--,str--)
        {
                printf("%c",*str);
        }
}
int main()
{
        char arr[87];
        printf("Enter the string");
        scanf("%[^'\n']s",arr);
        convert(arr);
        printf("String is %s",arr);
        return 0;
}
