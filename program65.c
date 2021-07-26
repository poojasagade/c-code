/*
Accept the N number from user and Take another number find the last  index of that number if number not found then return -1
*/
#include<stdio.h>
#include<stdlib.h>
int display(int p[],int ivalue,int ivar)
{
if((p==NULL)&&(ivalue<0))
{
return 0;
}
int i;
        for(i=ivalue-1;i>=0;i--)
        {
                if(p[i]==ivar)
                {
                   break ;        
                }             
        }
 return i;
}      
int main()
{
int *p=NULL;
int num,i,num2,ret;
printf("Enter the element you want to enter \n");
scanf("%d",&num);
printf("Enter the number you want to search \n");
scanf("%d",&num2);
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
ret=display(p,num,num2);
if(ret==-1)
{
printf("Number is not found");
}
else
{
printf("last occurance is=%d \n",ret);
}
free(p);
return 0;
}
