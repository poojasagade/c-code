/*
Accept the string frrom user and copy content of this string into another string in reverse order
*/
#include<stdio.h>
void copyrev(char src[],char dest[])
{
        int icnt=0;
        if(src==NULL || dest==NULL)
        {
                return;
        }
        while(*src!='\0')
        {
                src++;
                icnt++;
        }
        src--;
        while(icnt>0)
        {
                *dest=*src;
                src--;
                dest++; 
                icnt--;      
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
