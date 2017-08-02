#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	
	scanf("%d",&t);
	
	while(t--)
	{
		
		map <string,int> l;
		int n,c=0;
		vector <string> v;
		
		scanf("%d",&n);
		
		for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			v.push_back(s);
		}

		for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			l[s]=i;	
		}
		
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(l[v[i]]>l[v[j]])
				c++;
			}
		}
		cout<<c<<endl;
		l.clear();
		v.clear();
	}
	return 0;
}
