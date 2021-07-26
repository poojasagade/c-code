/*PROBLEMS ON BITWISE OPERATOR
& | !
Accept number from user and convert it into binary
*/
#include<stdio.h>
void convertbinary(unsigned int no)
{
        unsigned int digit=0;
        while(no>0)
        {
                digit=no%2;
                printf("%u",digit);
                no=no/2;      
        }    
}
int main()
{
        unsigned int num=0;
        printf("Enter the number: \n");
        scanf("%u",&num);
        convertbinary(num);
}
