#include<stdio.h> 
#include<stdlib.h>
int Linearsearch(int[],int,int); 
int main()
{
int x[20],i,n,p,key;
printf("\n Enter the no of element:"); 
scanf("%d",&n);
printf("\n Enter %d elements:",n); 
for(i=0;i<n;i++)
scanf("%d",&x[i]);
printf("\n Enter the element to be search:"); 
scanf("%d",&key); 
p=Linearsearch(x,n,key);
if(p==-1)
 printf("\n The searchis unsuccessful:\n"); 
else
 printf("\n%d is found at location %d\t",key,p+1); 
return 0;
}
int Linearsearch(int a[],int n ,int k) 
{
int i;
for(i=0;i<n;i++)
{ 
    if(k==a[i]) 
    return(i); } 
    return(-1); 
}