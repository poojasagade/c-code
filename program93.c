/*Accept number from user and convert it into binary and return count of 1bit from that number
*/
#include<stdio.h>
int count(unsigned int no)
{       
        int cnt=0;
        while(no)
        {
                cnt=cnt+(no%2);
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

