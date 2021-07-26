//Accept the number from user and accept the position from user check that position is on or off
/*
HEXADECIMAL  (0-9)(A-F)
decimal hexadecimal binary
0       0           0000
1       1           0001
2       2           0010
3       3           0011
4       4           0100
5       5           0101
6       6           0110
7       7           0111
8       8           1000
9       9           1001           
10      A           1010
11      B           1011
12      C           1100
13      D           1101
14      E           1110
15      F           1111


0000 0000 0000 0000 0000 0000 0001 0000
OX00000010*/
#include<stdio.h>
#include<stdbool.h>
bool checkbit(unsigned int no,unsigned int ipos)
{
        unsigned int imask=0x00000001;
        unsigned int result;
        if((ipos<1)||(ipos>32))
        {
                return false;
        }
        imask=imask<<(ipos-1);        //dynamic mask creation
        result=no&imask;
        if(result==imask)
        {
                return true;
        }
        else
        {
                return false;
        }
}
int main()
{       
        unsigned int ivalue=0,pos=0;
        bool bret=0;
        printf("Enter the number");
        scanf("%u",&ivalue);
        printf("enter the position");
        scanf("%u",&pos);
        bret=checkbit(ivalue,pos);
        if(bret==true)
        {
                printf("bit is on");
        }
        else
        {
                printf("bit is off");
        }
        return 0;
}
