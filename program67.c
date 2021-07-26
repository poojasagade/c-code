/*Problems On strings
In this topic we are going to perform operation on string 
string is considered as array of characters end with null character ('\0')
steps:
1)Create  static character array in main function
2)Accept that string into that array
3)pass that string to the function
4)function will perform the operation on that string
*/
#include<stdio.h>
#include<string.h>
int main()
{
char arr[40] ;
printf("Enter your name");
//scanf("%s",arr);
//fgets(arr,40,stdin);     where, how many, from where
//gets(arr);
scanf("%[^'\n']s",arr);
printf("Your name is =%s",arr);
return 0;
}
