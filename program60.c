/*
Accept the N elemets from user and display sum
*/
#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int ivalue)
{
int i=0;
int sum=0;
if((arr==NULL)||(ivalue<0))
{
return;
}
printf("Elements of array");
        for(i=0;i<ivalue;i++)
        {
                
                printf("%d",arr[i]);
                sum=sum+arr[i];
        }
        printf("sum of all number is=%d",sum);
}
int main()
{
int i=0;
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
display(array,num);
free(array);
return 0;
}
