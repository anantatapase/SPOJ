#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		vector <pair<int,int> > v;
		cin>>n;
		while(n--)
		{
			int a,b;
			
			cin>>a>>b;
			
			v.push_back(make_pair(b,a));
		}
		
		sort(v.begin(),v.end());
		
		int count=1;
		int prev=v[0].first;
		for(int i=1;i<v.size();i++)
		{
			if(v[i].second>=prev)
			{
			count++;
			prev=v[i].first;
			}
		}
		
		cout<<count<<endl;
		
		v.erase(v.begin(),v.end());
	}
	return 0;
}
