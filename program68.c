//enter the string and print character from that string
#include<stdio.h>
void character(char str[])
{
printf("Character from string are\n");
      
        while(*str!='\0')
        {
               
               printf("%c \n",*str);
               str++;      
        }
}
int main()
{
char arr[50];
printf("Enter the character");
scanf("%[^'\n']s",arr);
character(arr);
return 0;
}
