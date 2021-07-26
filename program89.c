/*
Accept the 2 string frrom user and concate the string
*/
#include<stdio.h>
void strconcat(const char src[],char dest[])
{
       
        if(src==NULL || dest==NULL)
        {
                return;
        }
        while(*dest!='\0')
        {
                dest++;
        }
        *dest=' ';
        dest++;
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
        char arr[50];
        char brr[50];
        printf("Enter the first string");
        scanf("%[^'\n']s",arr);
        printf("Enter the second string");
        scanf(" %[^'\n']s",brr);
        strconcat(arr,brr);
        printf("after concating %s \n",brr);
        return 0;
}
