//Binary Search tree
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node
{
int data;
struct node* lchild;
struct node* rchild;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
void InsertNode(PPNODE head,int no)
{
        PNODE newn=NULL;
        PNODE temp=*head;
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no;
        newn->lchild=NULL;
        newn->rchild=NULL;
        if(*head==NULL)
        {
                *head=newn;
        }
        else
        {
                while(1)
                {
                        if(no>temp->data)
                        {
                                if(temp->rchild==NULL)
                                {
                                        temp->rchild=newn;
                                        break;
                                }
                                temp=temp->rchild;
                        }
                        else if(no<temp->data)
                        {
                                if(temp->lchild==NULL)
                                {
                                        temp->lchild=newn;
                                        break;
                                }
                                temp=temp->lchild;
                        }  
                        else if(no==temp->data)
                        {
                                printf("Duplicate elements \n");
                                free(newn);
                                break;
                        }   
                }
        }
}
void Inorder(PNODE head)//LDR
{
        if(head!=NULL)
        {
                Inorder(head->lchild);
                printf("%d\t",head->data);
                Inorder(head->rchild);
        }
}
void preorder(PNODE head)//DLR
{
        if(head!=NULL)
        {
                printf("%d\t",head->data);
                preorder(head->lchild);                
                preorder(head->rchild);
        }       
}
void postorder(PNODE head)//LRD
{
        if(head!=NULL)
        {
                postorder(head->lchild);
                postorder(head->rchild);
                printf("%d\t",head->data);
        }        
}
bool Search(PNODE head,int ino)
{
if(head==NULL)
{
        return false;
}
else
{
        while(1)
        {
                if(ino>head->data)
                {
                        if(head->rchild==NULL)
                        {
                                break;
                        }
                        head=head->rchild;
                }
                else if(ino<head->data)
                {
                        if(head->lchild==NULL)
                        {
                                break;
                        }
                        head=head->lchild;
                }
                else if(ino==head->data)
                {
                        break;
                }
        }
        if(head->data==ino)
        {
                return true;
        }
        else
        {
                return false;
        }
}        
}
void count(PNODE head,int *p)
{
if(head!=NULL)
{
        (*p)++;       
        count(head->lchild,p);
        count(head->rchild,p);
}
}
void countLeaf(PNODE head,int *p)
{
if(head!=NULL)
{
        if((head->lchild==NULL)&&(head->rchild==NULL))
        {
                (*p)++;
        }        
        countLeaf(head->lchild,p);
        countLeaf(head->rchild,p);
}
}
void countParent(PNODE head,int *p)
{
if(head!=NULL)
{
        if((head->lchild!=NULL)&&(head->rchild!=NULL))
        {
                (*p)++;
        }        
        countParent(head->lchild,p);
        countParent(head->rchild,p);
}
}
int main()
{
PNODE root=NULL;
int ichoice=1,ino=0,iret=0,i=0;
bool bret=true;
        while(ichoice!=0)
        {
                printf("Enter the choice \n");
                printf("1:Insert the node \n");
                printf("2:Display inorder \n");
                printf("3:Display preorder \n");
                printf("4:Display postorder \n");
                printf("5:count the node \n");
                printf("6:count Leaf the node \n");
                printf("7:count the parent node \n");
                printf("8:Search the data \n");
                printf("0:Exit your application \n");
                scanf("%d",&ichoice);
                printf("**************************** \n");
                switch(ichoice)
                {
                        case 1:
                                printf("Enter number \n");
                                scanf("%d",&ino);
                                InsertNode(&root,ino);
                                break;
                                
                        case 2:
                                Inorder(root);
                                break;
                                
                        case 3:
                                preorder(root);
                                break;
                        case 4:
                                postorder(root);
                                break;
                                
                        case 5:
                                i=0;
                                count(root,&i);
                                printf("number of nodes %d \t",i);
                                i=0;
                                break;
                                
                         case 6:
                                i=0;
                                countLeaf(root,&i);
                                printf("number of leaf nodes %d \t",i);
                                i=0;
                                break;
                                
                         case 7:
                                i=0;
                                countParent(root,&i);
                                printf("number of parent nodes %d \t",i);
                                i=0;
                                break;
                        case 8:
                                printf("Enter the element to be search \n");
                                scanf("%d",&ino);
                                bret=Search(root,ino);
                                if(bret==true)
                                {
                                        printf("%d present in BST \n",ino);
                                }
                                else
                                {
                                       printf("%d not present in BST \n",ino);
                                }  
                                break;
                                     
                        case 0:
                                printf("Thank You \n");
                                break;
                                
                        default:
                                printf("Enter the valid choice \n");
                                break;                        
                                                
                }
        }
return 0;
}
