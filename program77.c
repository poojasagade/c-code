//accept  the string from user and count white spaces from that string
//input:poojaaA nh
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
            if(str[icnt]==' ')
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
        printf("Frequency of white spaces %d",iret);
        return 0;
}
