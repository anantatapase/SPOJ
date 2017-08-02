#include<stdio.h>
#include<math.h>
#include<stdlib.h>
 
long long int l=0,m=0;
long long int a[18]={0},b[18]={0},d[18][18]={0},v[18]={0},sol=0,n=0,dp[1000000];
long long int fun(long long int x,long long int l);	
long long int min(long long int x,long long int y);
long long int isset(long long int l,long long int i);
 
int main()
{
	long long int i,j,s;
	while(1)
	{
		scanf("%lld",&n);
		
		if(n==0)
		exit(0);
		
		for(i=1;i<=n;i++)
		scanf("%lld",&a[i]);
		
		for(i=1;i<=n;i++)
		scanf("%lld",&b[i]);
		
		for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		d[i][j]=abs(i-j)+abs(a[i]-b[j]);
	
		long long kk=pow(2,n+2); 
		for(i=0;i<=kk;i++)
		dp[i]=-1;
	
	sol=999999999ll;
	s=fun(1,0);
	printf("%lld\n",s);
	}
}
 
long long int fun(long long int x,long long int l)
{	
	long long int i;
	if(x>n)
	return 0;
	
	if(dp[l]!=-1)
	return dp[l];
	
	for(i=1;i<=n;i++)
	{
		if(!isset(l,i))
			sol=min(fun(x+1,l|(1<<i))+d[x][i],sol);
	}
	return dp[l]=(sol);
}
 
long long int min(long long int x,long long int y)
{
	if(x>=y)
	return y;
	else 
	return x;
}
 
long long int isset(long long int l,long long int i)
{
	if((l&(1<<i)))
	return 1;
	else 
	return 0;
} 
