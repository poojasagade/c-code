/*
Accept the string from user and convert  capital letter into small letter
input:A V
ouput:a v
*/
#include<stdio.h>
void convert(char arr[])
        {
        if(arr==NULL)
        {
                return ;
        }
        int icnt=0;
        while(arr[icnt]!='\0')
        {
        if((arr[icnt]>='A')&&(arr[icnt]<='Z'))
        {
                arr[icnt]=arr[icnt]+32;
        }
        icnt++;
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
