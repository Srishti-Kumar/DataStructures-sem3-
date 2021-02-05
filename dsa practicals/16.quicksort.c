#include<stdio.h> 
#include<stdlib.h>
void Quicksort(int[],int,int);
int Partition(int[],int,int); 
int main()
{
int x[20],i,n;
printf("\n Enter the no of element to be sorted:"); 
scanf("%d",&n);
printf("\n Enter %d elements:",n); 
for(i=0;i<n;i++)
scanf("%d",&x[i]);
Quicksort(x,0,n-1);
printf("\n The sorted array is:\n"); 
for(i=0;i<n;i++) 
printf("%4d",x[i]);
return 0;
}
void Quicksort(int a[],int p,int r) 
{
int q;
if(p<r)
{
q=Partition(a,p,r); 
Quicksort(a,p,q); 
Quicksort(a,q+1,r);
}
}
int Partition(int a[], int p,int r)
{
int k,i,j,temp;
k=a[p];
i=p-1;
j=r+1;
while(1)
{
do
{
j=j-1;
}while(a[j]>k);
do
{
i=i+1;
}while(a[i]<k);
if(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
else
return(j);
}
}