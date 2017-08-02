//Can be done by using array of dp without using map .also note array can have sizeof 10^8 with long long int check on spoj


#include<cstdio>
#include<iostream>
#include<map>
#include<cstring>

using namespace std;

long long int n;

map<int,long long int> dp;

long long int find(long long int i)
{
	long long int a1=0,a2=0;
	if(i==0)
	return 0;
	
	
	if(dp[i]!=0)
	return dp[i];
	
	dp[i]=max(i,find(i/2)+find(i/3)+find(i/4));
	
	return dp[i];
	 
}

int main()
{
	long long int t;
	
	//memset(dp,-1,sizeof dp);

	//dp.max_size();
				
	while(scanf("%lld",&n)!=EOF)
	{
				long long int s;
				
				printf("%lld\n",find(n));
	}
}

