#include<bits/stdc++.h>

using namespace std;

vector <vector<int> > a;
vector<int> t1;
list<pair<int , int> > l;
queue<pair<int,int> > q;

int t,m,n,a1[]={1,0,-1,0,1,1,-1,-1},a2[]={0,1,0,-1,1,-1,1,-1},v[183][183];

void bfs()
{
	for(list<pair<int , int> > ::iterator i=l.begin();i!=l.end();i++)
	{
		int y=i->first;
		int x=i->second;
			
		q.push(make_pair(y,x));
		v[y][x]=0;
		while(!q.empty())
		{
			pair<int,int> p=q.front();
			q.pop();
						
			for(int j=0;j<9;j++)
			{
				int newy=p.first+a1[j],newx=p.second+a2[j];
				
				if(newx<m&&newx>-1&&newy<n&&newy>-1)
				{
					if(v[newy][newx]>abs(newy-y)+abs(newx-x))
					{
					v[newy][newx]=abs(newy-y)+abs(newx-x);
					q.push(make_pair(newy,newx));	
					}
				}
			}	
		}
	}
}

int main()
{

	cin>>t;	
	while(t--)
	{
		
		cin>>n>>m;
		
		for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			t1.clear();	
			for(int j=0;j<m;j++)
			{
				v[i][j]=1<<9;
				int a=s[j]-'0';
				t1.push_back(a);
				if(a)
				l.push_back(make_pair(i,j));
			}
			a.push_back(t1);
		}
		
		bfs();
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<v[i][j]<<" ";
			}
			cout<<endl;
		}
		a.clear();
		l.clear();
	}
	
	return 0;
}
