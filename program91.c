/*PROBLEMS ON BITWISE OPERATOR
& | !
Accept number from user and convert it into binary and return count of 1bit from that number
*/
#include<stdio.h>
int count(unsigned int no)
{       
        int cnt=0;
        unsigned int digit=0;
        while(no>0)
        {
                digit=no%2;
                if(digit==1)
                {
                        cnt++;
                }
                no=no/2;      
        }   
        return cnt; 
}
int main()
{
        unsigned int num=0;
        int ret=0;
        printf("Enter the number: \n");
        scanf("%u",&num);
        ret=count(num);
        printf("count of on bit is:%d",ret);
        return 0;
}
