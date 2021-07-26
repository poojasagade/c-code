//accept  the string from user and return the frequency of small letter 
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
                if((str[icnt]>='a')&&(str[icnt]<='z'))
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
        printf("Frequency of small %d",iret);
        return 0;
}
