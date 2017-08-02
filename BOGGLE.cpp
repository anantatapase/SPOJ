#include<bits/stdc++.h>
#define  ull unsigned long long int
#define ll long long int
using namespace std;
map<string,int> m;
int main()
{	
	int t,a;
	scanf("%d",&t);
	scanf("%c",&a);
	for(int i=0;i<t;i++)
	{
		string s,tmp;
		int pre=0;
		getline(cin,s);
	
		for(int j=0;j<s.length();j++)
		{
			if(s[j]==' ')
			{
				tmp=s.substr(pre,j-pre);
				pre=j;
		
				if(m.find(tmp)==m.end())
					m[tmp]=i;
				else
					m[tmp]=-1;
			}
		}
	
	tmp=s.substr(pre,s.length()-pre);
	if(m.find(tmp)==m.end())
		m[tmp]=i;
	else
		m[tmp]=-1;
	
	cout<<tmp<<" ";
	
	}
	
	int ar[100000];
	
	memset(ar,0,sizeof(ar));
	
	int mx=INT_MIN;
	
	map<string,int>::iterator it=m.begin();
	for(;it!=m.end();it++)
	{
		if(it->second!=-1)
		{
			int val;
			int l=it->first.length();
			if(l<=4)val=1;else if(l==5)val=2;else if(l==6)val=3;else if(l==7)val=5;else val=11;
			ar[it->second]+=val;
			if(ar[it->second]>mx)
			mx=ar[it->second];
		}	
	}
	
	printf("%d\n",mx);
	return 0;
}
