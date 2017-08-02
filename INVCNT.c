#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void mergesort(long long int a[],long long int i,long long int l);
void merge(long long int a[],long long int i1,long long int l1,long long int i2,long long int l2);

long long int temp[1000000],a[1000000],c=0;


int main()
{
  long long int t;
  
  scanf("%lld",&t);
  printf("\n");
  while(t--)
  {
  	c=0;
  	long long i,n;
  	scanf("%lld",&n);
  	
  	
  	
  	for(i=0;i<n;i++)
	scanf("%lld",&a[i]);
	
	mergesort(a,0,n-1);
	
	printf("\n");
	printf("%lld\n",c);
  	
  }
return 0;
}


void mergesort(long long int a[],long long int i,long long int l)
{
        long long int q;
	if(i>=l)
	return;

	q=(i+l)/2;
 	   mergesort(a,i,q);
	   mergesort(a,q+1,l);
	   merge(a,i,q,q+1,l);
	
}


void merge(long long int a[],long long int i1,long long int l1,long long int i2,long long int l2)
{
      long long int i=i1,k=0,j=i2;
      
	while(j<=l2&&i<=l1)
	{
	  if(a[i]<=a[j])
	    {
	   temp[k++]=a[i++];
  		}
          else
       { c+=(l1-i+1);
	   temp[k++]=a[j++];
	   }
	}
 	
	while(i<=l1)
	{
	temp[k++]=a[i++];
	
	}
	while(j<=l2)
	{
	temp[k++]=a[j++];
    }
        j=i1;
	for(i=0;i<k;i++)
          a[j++]=temp[i];
       
}

