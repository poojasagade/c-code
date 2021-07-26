/*
Accept the string frrom user and copy content of this string into another string in capital case
*/
#include<stdio.h>
void copyrev(char src[],char dest[])
{
        
        if(src==NULL || dest==NULL)
        {
                return;
        }
        while(*src!='\0')
        {
                if((*src>=90)&&(*src<=122))
                {
                        *dest=*src-32;
                }
                else
                {
                *dest=*src;
                }
                src++;
                dest++;
        }
        *dest='\0';
}
int main()
{
        char arr[20];
        char brr[20];
        printf("Enter the string");
        scanf("%[^'\n']s",arr);
        copyrev(arr,brr);
        printf("after copying %s \n",brr);
        return 0;
}
