#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,homo=0;
	cin>>n;
	
	map<int ,int> m;
	
	while(n--)
	{
		char s[100];
		int a;
		scanf("%s",s);
		cin>>a;
		
		if(!strcmp("insert",s))
		{
			if(m.find(a)==m.end())
			{
				m[a]=1;
			}
			else
			{
				m[a]++;
				if(m[a]<=2)homo++;
			}
		}
		else 
		{
			if(m.find(a)!=m.end())
			m[a]--;
			
			if(m[a]==1)
			homo--;
			
			if(m[a]==0)
			m.erase(a);
		}
		
		if(m.size()==0)
		cout<<"neither"<<endl;
		else
		{	
			int size=m.size();
			if(homo==0&&size==1)
			cout<<"neither"<<endl;
			
			else if(homo==1&&size==1)
			cout<<"homo"<<endl;
			
			else if(homo==0&&size>0)
			cout<<"hetero"<<endl;
			
			else if(homo>0&&size>0)
			cout<<"both"<<endl;
		}
	}
return 0;
}
