#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cstring>

using namespace std;

int dist[100001]={0},visited[100001]={0},n;

vector <int>  v[100001];

int dfs(int u);
int max(int c[],int i);
int main()
{
	int a,b;
	
	scanf("%d",&n);
	
	for(int i=0;i<n-1;i++)
	{
		scanf("%d %d",&a,&b);
		v[a].push_back(b);
		v[b].push_back(a);	
	}
	memset(visited,0,sizeof visited);
	memset(dist,-1,sizeof dist);
	dist[1]=0;	
	int d=dfs(1);
	memset(visited,0,sizeof visited);
	memset(dist,-1,sizeof dist);	
	dist[d]=0;	
	d=dfs(d);
	printf("%d\n",dist[d]);
}

int dfs(int u)
{int i;
	
	visited[u]=1;
	
	for(int i=0;i<v[u].size();i++)
	{  int x=v[u][i] ;
		if(visited[x]==0)
		{
			dist[x]=dist[u]+1;
			visited[x]=1;
			dfs(x);	
		}
	}
	
	int max=dist[u];
	int node=u;
	for(int i=1;i<=n;i++)
	{   
		if(dist[i]>max)
		{
		max=dist[i];
		node=i;
		}
	}
	return node;
}

