/*
Accept N number from user and display only even numbers
*/
#include<stdio.h>
#include<stdlib.h>
void display(int array[],int ivalue)
{
printf(" even Element of array are\n");
if((array==NULL)||(ivalue<0))
{
        return;
}
int i=0;
        for(i=0;i<ivalue;i++)
        {
                if(array[i]%2==0)
                {
                        printf("%d\n",array[i]);
                }
        }
}
int main()
{
int *arr=NULL;
int num=0;
int i=0;
printf("Enter the number of elements");
scanf("%d",&num);
arr=(int*)malloc(num*sizeof(int));
        if(arr==NULL)
        {
                printf("Unable to alloacte memory");
                return -1;
        }
        for(i=0;i<num;i++)
        {
                scanf("%d",&arr[i]);
        }
display(arr,num);
free(arr);
return 0;
}
