#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector <pair<long long int,int> > v;
	
	int t;
	
	cin>>t;
	
	while(t--)
	{
		int n;
		
		cin>>n;
		
		while(n--)
		{
			long long int a,b;
			
			cin>>a>>b;
			
			v.push_back(make_pair(a,1));
			v.push_back(make_pair(b,-1));
		
		}
		
		sort(v.begin(),v.end());
		
		long long int i,j=0,p=0,max=0;
		for(i=0;i<v.size();i++)
		{
			p+=v[i].second;
			if(p>max)
			{
				max=p;
			}
		}
		
		printf("%lld\n",max);
		
		v.erase(v.begin(),v.end());
	}
return 0;	
}
