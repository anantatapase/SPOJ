#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cstring>

using namespace std;

int parent[10001]={0};
int rank[10001]={0};
long long int cost=0;
vector<pair<int,pair<int,int> > > v;


void intialize(int n)
{
	for(int i=0;i<n;i++)
	{	
		cost=0;
		parent[i]=i;
		rank[i]=1;
	}
}

int find(int x)
{
	if(parent[x]==x)
	return x;
	
	return parent[x]=find(parent[x]);
}

void unio(int a,int b,int c)
{
	int pa=find(a);
	int pb=find(b);
	
	if(pa!=pb)
	{
		if(rank[pa]==rank[pb])
		{
			parent[pb]=pa;
			rank[pa]++;
		}
		else if(rank[pa]>rank[pb])
		{
			parent[pb]=pa;
		}
		else if(rank[pb]>rank[pa])
		{
			parent[pa]=pb;
		}
	cost+=c;
	}
	
}

void kruskal(int i)
{
	unio(v[i].second.first,v[i].second.second,v[i].first);
}


int main()
{
	int t;
	
	scanf("%d",&t);
	
	while(t--)
	{
		long long int p,n,m;
		
		scanf("%lld %lld %lld",&p,&n,&m);
		
		for(int i=0;i<m;i++)
		{
		long long int a,b,c;
		scanf("%lld %lld %lld",&a,&b,&c);
		v.push_back(make_pair(c,make_pair(a,b)));	
		}
		intialize(n);
		sort(v.begin(),v.end());
		
		for(int i=0;i<m;i++)
		{
			kruskal(i);
		}		
		printf("%lld\n",cost*p);
	}
	
}
