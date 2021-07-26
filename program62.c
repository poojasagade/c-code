/*
Accept the N elemets from user and print the sum of even numbers
*/
#include<stdio.h>
#include<stdlib.h>
int display(int arr[],int ivalue)
{
int i=0;
int count;
if((arr==NULL)||(ivalue<0))
{
return -1;
}
        for(i=0;i<ivalue;i++)
        {
                if(arr[i]%2==0)
                {
                        count++;    
                }
        }
  return count;      
}
int main()
{
int i=0;
int ret=0;
int num=0;
int *array=NULL;
printf("Enter the number of elements");
scanf("%d",&num);
array=(int*)malloc(num*sizeof(int));
        if(array==NULL)
        {
                printf("Unable to allocate to memory");
                return -1;
        }
        for(i=0;i<num;i++)
        {
                scanf("%d",&array[i]);
        }
ret=display(array,num);
printf("count of even number is =%d",ret);
free(array);
return 0;
}
