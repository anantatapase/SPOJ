#include<bits/stdc++.h>

using namespace std;
long long int temp[1000000],a[1000000],c=0;


void merge(long long int a[],long long int i1,long long int l1,long long int i2,long long int l2)
{
      long long int i=i1,k=0,j=i2;
      
	while(j<=l2&&i<=l1)
	{
	  if(a[i]<=a[j])
	    {
	   temp[k++]=a[i++];
  		}
          else
       { c+=(l1-i+1);
	   temp[k++]=a[j++];
	   }
	}
 	
	while(i<=l1)
	{
	temp[k++]=a[i++];
	
	}
	while(j<=l2)
	{
	temp[k++]=a[j++];
    }
        j=i1;
	for(i=0;i<k;i++)
          a[j++]=temp[i];
       
}


void mergesort(long long int a[],long long int i,long long int l)
{
        long long int q;
	if(i>=l)
	return;

	q=(i+l)/2;
 	   mergesort(a,i,q);
	   mergesort(a,q+1,l);
	   merge(a,i,q,q+1,l);
	
}



int main()
{
	int t;
	
	scanf("%d",&t);
	
	while(t--)
	{
		c=0;
		map <string,int> l;
		int n;
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
		
		for(int i=0;i<n;i++)
		{
			a[i]=l[v[i]];
		}
		
		mergesort(a,0,n-1);
		cout<<c<<endl;
		l.clear();
		v.clear();
	}
	return 0;
}
