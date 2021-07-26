/*
Accept the string frrom user and the content of this string copy into another string
*/
#include<stdio.h>
void copy(char src[],char dest[])
{
        if(src==NULL || dest==NULL)
        {
                return;
        }
        while(*src!='\0')
        {
           *dest=*src;
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
        copy(arr,brr);
        printf("after copying %s \n",brr);
        return 0;
}
