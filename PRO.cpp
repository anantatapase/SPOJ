#include<bits/stdc++.h>
using namespace std;


int main()
{
	multiset <long long int > s;
	map<int,int> m;
	long long int sum=0;
	int t;
	
	cin>>t;
	
	while(t--)
	{
		int n;
		
		cin>>n;
		
		while(n--)
		{
			long long int a;
			
			cin>>a;
			
			s.insert(a);
			
			m[a]++;
		}
		printf("%lld %lld \n",*s.begin(),*--s.end());
		
		sum+=(*--s.end()-*s.begin());
		
		if(!s.empty()&&m[*s.begin()]==1)
		s.erase(*s.begin());
		else
		m[*s.begin()]--;
		if(!s.empty()&&m[*--s.end()]==1)
		s.erase(*--s.end());
		else
		m[*--s.end()]--;
		
	}
	printf("%lld\n",sum);
return 0;	
}
