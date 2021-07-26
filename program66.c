/*
Accept the N number from user and return largest number
*/
#include<stdio.h>
#include<stdlib.h>
int display(int p[],int ivalue)
{
if((p==NULL)&&(ivalue<0))
{
return 0;
}
int i,max=p[0];
        for(i=0;i<ivalue;i++)
        {
                if(p[i]>max)
                {
                   max=p[i] ;        
                }             
        }
 return max;
}      
int main()
{
int *p=NULL;
int num,i,ret;
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
ret=display(p,num);
printf("Largest number is=%d",ret);
free(p);
return 0;
}
