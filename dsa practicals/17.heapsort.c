#include<stdio.h> 
#include<stdlib.h>
void Heapsort(int[],int); 
int Parent(int);
int Left(int);
int Right(int);
void Heapify(int[],int,int); 
void Buildheap(int[],int); 
int main()
{
int x[20],i,n;
printf("\n Enter the no of element to be sorted:"); scanf("%d",&n);
printf("\n Enter %d elements:",n);
for(i=0;i<n;i++) scanf("%d",&x[i]); Heapsort(x,n);
printf("\n The sorted array is:\n"); for(i=0;i<n;i++) printf("%4d",x[i]);
return 0;
}
int Parent(int i)
{
return(i/2);
}
int Left(int i)
{
return(2*i+1);
}
int Right(int i)
{
return(2*i+2);
}
void Heapify(int a[],int i,int n)
{
int l,r,large,temp ;
l=Left(i);
r=Right(i);
if((l<=n-1)&&(a[l]>a[i]))
large=l;
else
large=i;
if((r<=n-1)&&(a[r]>a[large]))
large=r;
if(large!=i)
{
temp=a[i];
a[i]=a[large];
a[large]=temp;
Heapify(a,large,n);
}
}
void Buildheap(int a[],int n) 
{
int i; 
for(i=(n-1)/2;i>=0;i--) 
Heapify(a,i,n);
}
void Heapsort(int a[],int n) 
{

int i,m,temp;
Buildheap(a,n);
m=n;
for(i=n-1;i>=1;i--)
{
temp=a[0];
a[0]=a[i];
a[i]=temp;
m=m-1;
Heapify(a,0,m);
}
}