/*
Accept the N number from user and Take another number and find the frequency of that number
*/
#include<stdio.h>
#include<stdlib.h>
int display(int p[],int ivalue,int ivar)
{
if((p==NULL)&&(ivalue<0))
{
return 0;
}
int i,cnt;
        for(i=0;i<ivalue;i++)
        {
                if(p[i]==ivar)
                {
                        cnt++;
                }
        }
return cnt;
}
int main()
{
int *p=NULL;
int num,i,num2,ret;
printf("Enter the element you want to enter \n");
scanf("%d",&num);
p=(int*)malloc(num*sizeof(int));
if(p==NULL)
{
printf("Unable to allocate the memory");
return -1;
}
        for(i=0;i<num;i++)
        {
                 scanf("%d",&p[i]);
        }
printf("Enter the number you want to search \n");
scanf("%d",&num2);
ret=display(p,num,num2);
printf("frequency is=%d \n",ret);
free(p);
return 0;
}
