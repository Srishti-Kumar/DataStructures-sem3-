#include<stdio.h> 
#include<stdlib.h>
int Binarysearch(int[],int,int); 
int main()
{
int x[20],i,n,p,key;
printf("\n Enter the no of element:"); 
scanf("%d",&n);
printf("\n Enter %d elements in acsending order:",n); 
for(i=0;i<n;i++)
scanf("%d",&x[i]);
printf("\n Enter the element to be search:"); 
scanf("%d",&key);
p=Binarysearch(x,n,key);
if(p==-1)
printf("\n The searchis unsuccessful:\n");
else
printf("\n%d is found at location %d\t",key,p+1);
return 0; 
}
int Binarysearch(int a[],int n ,int k) 
{
int lo,hi,mid;
lo=0;
hi=n-1; while(lo<=hi) 
{ mid=(lo+hi)/2; 
if(k==a[mid]) 
return(mid); 
if(k<a[mid]) 
  hi=mid-1;
else 
  lo=mid+1;
}
return(-1);
}