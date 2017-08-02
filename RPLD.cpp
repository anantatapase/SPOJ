#include<bits/stdc++.h>
using namespace std;


int main()
{
	set <pair<int,int> > s;
	
	long long int sum=0;
	int t;
	
	cin>>t;
	
	for(int j=1;j<=t;j++)	
	{
		int n,r;
		
		cin>>n>>r;
		int i=r;
		while(i--)
		{
			long long int a,b;
			
			cin>>a>>b;
			
			s.insert(make_pair(a,b));
		}
	
		if(s.size()==r)
		cout<<"Scenario #"<<j<<": possible"<<endl;
		else
		cout<<"Scenario #"<<j<<": impossible"<<endl;
		
		s.erase(s.begin(),s.end());
	}
return 0;	
}
