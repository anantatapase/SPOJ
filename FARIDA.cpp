#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

long long int n,arr[100001]={0},dp[100001][2];

long long int find(long long int i,long long int t)
{
	long long int a1=0,a2=0;
	if(i==n)
	return 0;
	
	if(dp[i][t]!=-1)
	return dp[i][t];
	
	if(t==0)
	a1=arr[i]+find(i+1,1);
	a2=find(i+1,0);
	
	return dp[i][t]=max(a1,a2);
}

int main()
{
	long long int t;
	
	scanf("%lld",&t);
	long long int i,j;
	for( j=1;j<=t;j++)
	{
				long long int s;
				
				scanf("%lld",&n);
				
				memset(dp,-1,2*n*sizeof(long long));
				
				for( i=0;i<n;i++)
				{
					scanf("%lld",&arr[i]);
				}
				
				printf("Case %lld: %lld\n",j,find(0,0));
				
	}
}
