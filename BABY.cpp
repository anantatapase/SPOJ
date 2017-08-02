#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int a[18]={0},b[18]={0},n=0,dp[1000000]={0};
int fun(int x,int l);	

int isset(int l,int i)
{
 
	if(l&(1<<i))
	return 1;
	else 
	return 0;
} 

int main()
{
	int i,j;
	while(scanf("%d",&n))
	{
		
		if(n==0)
		break;
		
		for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
		
		for(i=1;i<=n;i++)
		scanf("%d",&b[i]);
			
		memset(dp,-1,sizeof(int)*(1<<n+1));
	printf("%d\n",fun(1,0));
	}
	return 0;
}
 
int fun(int x,int l)
{	
	int i;
	if(x>n)
	return 0;
	
	if(dp[l]!=-1)
	return dp[l];
	
	int sol=100000000;
	for(i=1;i<=n;i++)
	{
		if(!isset(l,i))
		{	
			sol=min(fun(x+1,l|(1<<i))+abs(i-x)+abs(b[x]-a[i]),sol);	
		}
	}
	
	return (dp[l]=sol);
}
 
