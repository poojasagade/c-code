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


1111 1111 1111 1111 1111 1111 1011 1011
OXFFFFFFBB
Accept the number from user and off 3rd and 7th bit from that number
*/
#include<stdio.h>
unsigned int OFFBIT(unsigned int no)
{       
       
        unsigned int imask=0xFFFFFFBB;
        unsigned int result=0;
        result=(imask)&(no);
        return result; 
}
int main()
{
        unsigned int num=0;
        int ret=0;
        printf("Enter the number: \n");
        scanf("%u",&num);
        ret=OFFBIT(num);
        printf("number after updation:%d",ret);
        return 0;
}

