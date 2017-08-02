#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	map<int ,int> m;
	map<int ,int>::iterator p ;
	
	while(n--)
	{
		char s[100];
		int a;
		scanf("%s",s);
		cin>>a;
		
		if(!strcmp("insert",s))
		{
			m[a]++;
		}
		else if(m.find(a)!=m.end())
		{
			m[a]--;
			if(m[a]==0)
			m.erase(a);
		}
		
		int size=m.size();
		if(size==0)
		cout<<"neither"<<endl;
		else
		{
			
			int f=0;
			for(p=m.begin();p!=m.end();p++)
			{
				if((*p).second>=2)
				{
				f=1;
				break;
				}
			}	
			if(f==1&&size==1)
			cout<<"homo"<<endl;
			
			else if(f==1&&size>=2)
			cout<<"both"<<endl;
			
			else if(f==0&&size==1)
			cout<<"neither"<<endl;
			
			else if(f==0&&size>=2)
			cout<<"hetero"<<endl;
		}
	}
return 0;
}
