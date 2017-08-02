#include<iostream>
#include<cstdio>
#include<cmath>

#define INF 100000

using namespace std;

int main()
{
	
		int i,j,k,n,e,t,m,d[101][101]={0},c=0;
		
		
		
		scanf("%d %d %d %d",&n,&e,&t,&m);
		
		for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			d[i][j]=INF;
			if(i==j)
			d[i][j]=0;	
		}
		
		for(i=0;i<m;i++)
		{
			int a,b,c;
			scanf("%d %d %d",&a,&b,&c);
			d[a][b]=c;
		}
		
		for(k=1;k<=n;k++)
		for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
		}
		for(i=1;i<=n;i++)
		{
			if(d[i][e]<=t)
			c++;
		}
		
		printf("%d\n",c);
	return 0;
}
