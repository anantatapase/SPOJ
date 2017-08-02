#include<bits/stdc++.h>

using namespace std;

queue <int> q;
int f,s,g,u,d,v[1000001]={0};
int bfs()
{
	int flag=0;
	q.push (s);
	v[s]=1;
	while(!q.empty())
	{
		int e=q.front();
		q.pop();
		if(e==g)
		{
		flag=v[e];
		break;
		}
		
		if(e+u<=f&&!v[e+u])
		{
			q.push(e+u);
			v[e+u]=v[e]+1;
		}
		if(e-d>=0&&!v[e-d])
		{
			q.push(e-d);
			v[e-d]=v[e]+1;
		}
	}
	if(flag==0)
	return 0;
	return flag;
}
	
int main()
{
	cin>>f>>s>>g>>u>>d;
	
	int m=bfs();
	if(m)
	cout<<m-1<<endl;
	else
	cout<<"use the stairs\n";
	
	return 0;
	
}
