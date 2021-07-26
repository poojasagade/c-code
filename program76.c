//accept  the string from user and return the frequency of captal letter 
//input:poojaaA
//output:1
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
                if((str[icnt]>='A')&&(str[icnt]<='Z'))
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
        printf("Frequency of capital %d",iret);
        return 0;
}
