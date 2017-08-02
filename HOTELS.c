#include<stdio.h>
long long int a[300001]={0};
int main()
{
	long long int t;
	scanf("%lld",&t);
 
while(t--)
{
long long int n,m,i,x,flag=0,max=0,j,k,num=0;
 
scanf("%lld %lld",&n,&m);
 
scanf("%lld",&a[0]);
for(i=1;i<n;i++)
{
	scanf("%lld",&x);
	a[i]=x+a[i-1];
	
	if(max==0)
	if(a[i]>m)
	{
	j=i;
	max=a[i-1];
	num=i;
	}
}
		for(i=j;i<n;i++)
		{	
			k=i-num;
			while(a[i]-a[k]<=m&&k>=0)
			{
				a[i]-=a[k];
				if(i-k>num)
				{
					if(a[i]<=m)
					{
					max=a[i];
					num=i-k;
					}
				}
				else if(i-k==num)
				{
					if(a[i]<max)
					{
					max=a[i];
					num=i-k;
					}
				}
					a[i]+=a[k];
	
				if(a[i]-a[k]>m)
				break;
							
				k--;
			}  
		}
		if(max>m)
		{
			printf("0 0\n");
		}
		else
		printf("%lld %lld\n",max,num);
}
return 0;
} 
