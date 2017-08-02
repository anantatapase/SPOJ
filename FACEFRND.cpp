#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,t;
	cin>>n;
	t=n;
	map<int,int> m;
	
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		m[a]++;
		while(b--)
		{
			int c;
			cin>>c;
			
			m[c]++;
		}			
	}
	//cout<<m.size();
	cout<<m.size()-t<<endl;
	m.erase(m.begin(),m.end());
	return 0;
}
