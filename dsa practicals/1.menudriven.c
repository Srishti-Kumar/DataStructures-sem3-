#include<stdio.h>
#include<stdlib.h>

void InsertElement(int arr[],int n,int x,int pos);
void DeleteElement(int arr[],int n,int pos);
void FindElement(int arr[],int x);
void ArrayDisplay(int arr[],int n);

int main()
{
    int arr[100];
    int i,n=10,x,pos,choice;
       
    for(i=0;i<10;i++)
       arr[i]=i+1;  

    for(i=0;i<n;i++)                    //counting 1 to 10
       printf("%d \t",arr[i]);             //printing 1 to 10
       printf("\n");
    
    
printf("Enter 1 to Insert an element \n");  
printf("Enter 2 to delete an element \n");  
printf("Enter 3 to find an element \n");               //giving options to user
printf("Enter 4 to dispaly array \n\n"); 
printf("Your choice :\t"); 

scanf("%d", &choice);                                  //asking for choice
    
switch (choice)
{
    case 1:
        printf("Enter the element to be inserted in array : \t");
        scanf("%d",&x);
        printf("Enter position for element to be inserted : \t");
        scanf("%d",&pos);
        InsertElement(arr,n,x,pos);
        break;

    case 2:
        printf("Enter the position from where element is to be deleted : \t");
        scanf("%d",&pos);
        DeleteElement(arr,n,pos);
        break;

    case 3:
        printf("Enter the element to find its position : \t");
        scanf("%d",&x);
        FindElement(arr,x);
        break;        
    case 4:
        ArrayDisplay(arr,n);
        break;
    
    default:
        printf("invalid input \t");
        break;
}
return 0;
}  
void InsertElement(int arr[],int n,int x,int pos) 
  {
    int i;
    if(pos==0)
    pos=n+1;
    for(i=n-1;i>=pos-1;i--)
    arr[i+1]=arr[i];
    arr[pos-1]=x;
    ArrayDisplay(arr,n+1);
  }
void DeleteElement(int arr[],int n,int pos)
  {
    int i;
    for(i=pos-1;i<n-1;i++)
    arr[i]=arr[i+1];
    ArrayDisplay(arr,n-1);
  }
void FindElement(int arr[],int x)
  {
    int i;
    for(i=0;i<10;i++)
    {
        if(arr[i]==x)
        printf("position of %d is %d",x,i+1);
    }
  }
void ArrayDisplay(int arr[],int n)
  {
    int i;
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
  }