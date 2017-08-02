#include<iostream>
#include<cstdio>
#include<vector>
#include <algorithm>
using namespace std;



int parent[10010],rank[10010];
long long int c=0;
vector<pair<int,pair<int,int> > >  v;

void intialize(int n)
{int i;
	for(i=1;i<=n;i++)
	{
		parent[i]=i;
		rank[i]=1;
	}
}

int find(int x)
{
	int u;
	if(parent[x]==x)
	return x;
	
	else
	{
		u=find(parent[x]);
		parent[x]=u;
		return u;
	}
}



void unio(int x,int y,int s)
{
	int px,py;
	
	px=find(x);
	py=find(y);
	
	if(px!=py)
	{
		if(rank[px]>rank[py])
	     parent[py]=px;
	    else if(rank[py]>rank[px])
	     parent[px]=py;
	    else if(rank[px]==rank[py])
		{
		parent[px]=py;
	    rank[px]++;
		} 
   c+=s;
   }
}



int kruskal(int i)
{
	int s,pu,pv;
	
	pu=v[i].second.first;
	pv=v[i].second.second;
    s=v[i].first;
	unio(pu,pv,s);
}


int main()
{  int n,m,u,i,j,k;

	scanf("%d %d",&n,&m);
	for(u=1;u<=m;u++)
	{
		scanf("%d %d %d",&i,&j,&k);
		
		v.push_back(make_pair(k,make_pair(i,j)));
	}
	
	intialize(n);
	sort(v.begin(),v.end());

	for(i=0;i<v.size();i++)
	kruskal(i);

printf("%lld\n",c);
}
