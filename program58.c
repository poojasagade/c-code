/*Problems on N numbers
In this topic we have to perform the operation on multiple numbers .
To store that multiple numbers we use array.
To solve the problem statements we have to follow below steps:
1).Inside main function create one pointer to store the address of dynamic memory of the array.
2).Ask the user about number of elements 
3).Allocate the memory dynamically for that number elements 
4).Accept the values from user and store it into that array.
5).Pass that array and number of elements to helper function
6).Inside helper function we apply owr logic based on  problem statement
7).After returning from the function dealloacte the dynamic memory
*/
//Accept the number from user and display that number
#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int isize)
{
int i=0;
printf("Elements from the array are");
for(i=1;i<=isize;i++)
{
        printf("%d \n",arr[i]);
}
}
int main()
{
int *arr=NULL;
int ilength=0,i=0;
printf("Enter the number of elements");
scanf("%d",&ilength);
arr=(int*)malloc(ilength*sizeof(int));
printf("Enter the elements");
for(i=1;i<=ilength;i++)
{
        scanf("%d",&arr[i]);
}
display(arr,ilength);
free(arr);
return 0;
}
