#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cstdlib>
using namespace std;
long long int a[1000001],n,i;
int main()
{
	int t;
	
	scanf("%d",&t);
	
	while(t--)
	{
		
		int flag =0;
		scanf("%lld",&n);
		for( i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		
		for(i=n-1;i>0;i--)
		{
			if(a[i]>a[i-1])
			{
				flag=1;
				break;
			}
		}
		
		if(flag==1)
		{
			long long int min=i;
			for(int j=i+1;j<n;j++)
			{
				if(a[j]>a[i-1]&&a[j]<a[min])
				min=j;
			}	
				swap(a[i-1],a[min]);
				
				sort(a+i,a+n);
		
			for(i=0;i<n;i++)
			printf("%lld",a[i]);
			printf("\n");
		}
		else
		{
			printf("-1\n");
		}
	}
	return 0;
}
