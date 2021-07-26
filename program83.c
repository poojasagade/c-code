/*
Accept the string from user and display it in the reverse the string
input:pooja
ouput:ajoop
*/
#include<stdio.h>
void display(char str[])
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
        while(icnt>0)
        {
                printf("%c",*str);
                icnt--;
                str--;
        }
}
int main()
{
        char arr[87];
        printf("Enter the string");
        scanf("%[^'\n']s",arr);
        display(arr);
        return 0;
}
