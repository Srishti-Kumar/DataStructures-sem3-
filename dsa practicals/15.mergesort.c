#include<stdio.h> 
#include<stdlib.h>
void Mergesort(int[],int,int); 
void Merge(int[],int,int,int); 
int main()
{
int x[20],i,n;
printf("\n Enter the no of element to be sorted:"); scanf("%d",&n);
printf("\n Enter %d elements:",n); for(i=0;i<n;i++)
scanf("%d",&x[i]);
Mergesort(x,0,n-1);
printf("\n The sorted array is:\n"); for(i=0;i<n;i++)
printf("%4d",x[i]);
return 0;
}
void Mergesort(int a[],int p,int r) {
int q;
if(p<r)
{
q=(p+r)/2;
Mergesort(a,p,q); Mergesort(a,q+1,r); Merge(a,p,q,r);
}
}
void Merge(int a[], int p, int q,int r) {
int b[20],l1,r1,i;
l1=p;
r1=q+1;
i=p;
while((l1<=q)&&(r1<=r))
{
if(a[l1]<a[r1])
{
b[i]=a[l1];
l1=l1+1;
i=i+1;
}
else
{
b[i]=a[r1];
r1=r1+1;
i=i+1;
}
}
while(l1<=q)
{
b[i]=a[l1];
l1=l1+1;
i=i+1;
}
while(r1<=r)
{
b[i]=a[r1];
r1=r1+1;
i=i+1;
}
for(i=p;i<=r;i++)
a[i]=b[i];
}