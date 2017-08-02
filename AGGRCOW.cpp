#include<bits/stdc++.h>

using namespace std;

int n,c,a[1000001]={0};

int check(int k)
{
	int temp=1,pre=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]-pre>=k)
		{
		temp++;
		pre=a[i];
		}
		if(temp==c)
		return 1;
	}
	return 0;
}	
	
int bs(int l,int h)
{
int m=l+(h-l+1)/2;
	
	if(l>=h)
	return l;

	if(check(m))
		return bs(m,h);
		return bs(l,m-1);
}	

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		cin>>n>>c;
		
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		sort(a,a+n);
		
		cout<<bs(0,a[n-1])<<endl;
	}
	return 0;
}
