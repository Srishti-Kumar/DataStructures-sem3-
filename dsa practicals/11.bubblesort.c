#include<stdio.h>
#include<stdlib.h>
void Bubblesort(int[],int); 
int main()
{
int x[20],i,n;

printf("\n Enter the no of element to be sorted:"); scanf("%d",&n);
printf("\n Enter %d elements:",n); for(i=0;i<n;i++)
scanf("%d",&x[i]);
Bubblesort(x,n);
printf("\n The sorted array is:\n"); for(i=0;i<n;i++)
printf("%4d",x[i]);
return 0;
}
void Bubblesort(int a[],int n)
{
int temp,pass,i;
for(pass=0;pass<n-1;pass++)
{
for(i=0;i<n-pass-1;i++)
{
if(a[i]>a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
}
}