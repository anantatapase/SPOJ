#include<iostream>
#include<cstdio>
#include<queue>


using namespace std;


int bfs(int a,int b,int c,int d);
int check(int a,int b,int c,int d,int vi[][9]);


int main()
{
	long long int t;
	scanf("%lld",&t);
	
    while(t--)
    { 

	char s[3],e[3];
    
	scanf("%s",s);
	scanf("%s",e);
	int m=s[0],n=s[1];
	int x=e[0],y=e[1];

	printf("%d\n",bfs(m-'a',n-'1',x-'a',y-'1')); 
	
	
	}

return 0;
}		
	
int check(int a,int b,int c,int d,int vi[][9])
{      	
	if(c<0||d<0||c>7||d>7)
    	return 0;
		return 1;
}

int  bfs(int a,int b,int c,int d)
{
  int vi[9][9]={0},cs[9][9]={0},u,v,k;
	queue<pair<int,int> > q;
	pair<int,int> p;
	
	cs[a][b]=0;
	q.push(make_pair(a,b));
	vi[a][b]=1;
	
	
	while(!q.empty())
	{
	p=q.front();
	q.pop();
	u=p.first;
	v=p.second; 
	if(u==c&&v==d)
	{
	return cs[c][d];
	}
		k=check(u,v,u+2,v+1,vi);
      	if(k==1)
        {      
		 q.push(make_pair(u+2,v+1));
		 cs[u+2][v+1]=cs[u][v]+1;		         	 	
		 vi[u+2][v+1]=1;              	 	               	 	
		}
		
		k=check(u,v,u+2,v-1,vi);
      	if(k==1)
        {
		 q.push(make_pair(u+2,v-1));
		 cs[u+2][v-1]=cs[u][v]+1;	 
		 vi[u+2][v-1]=1;              	 	               	 	
		}
		
		k=check(u,v,u-2,v+1,vi);
      	if(k==1)
        {
		 q.push(make_pair(u-2,v+1));
		 cs[u-2][v+1]=cs[u][v]+1;               	 	
		 vi[u-2][v+1]=1;              	 	               	 	
		}	 
		
		k=check(u,v,u-2,v-1,vi);
      	if(k==1)
        {
		 q.push(make_pair(u-2,v-1));
		 cs[u-2][v-1]=cs[u][v]+1; 
		 vi[u-2][v-1]=1;              	 	               	 	
		}	 
		
		k=check(u,v,u+1,v+2,vi);
      	if(k==1)
        {
		 q.push(make_pair(u+1,v+2));
		 cs[u+1][v+2]=cs[u][v]+1;               	 	               	 	
		 vi[u+1][v+2]=1;
		}	 
		
		k=check(u,v,u+1,v-2,vi);
      	if(k==1)
        {
		 q.push(make_pair(u+1,v-2));
		 cs[u+1][v-2]=cs[u][v]+1;               	 	              	 	
		 vi[u+1][v-2]=1;
		}	 
		
		k=check(u,v,u-1,v+2,vi);
      	if(k==1)
        {              	 	
         q.push(make_pair(u-1,v+2));
		 cs[u-1][v+2]=cs[u][v]+1;               	 	              	 	
		vi[u-1][v+2]=1;
		}	 
		
		k=check(u,v,u-1,v-2,vi);
      	if(k==1)
        {
		 q.push(make_pair(u-1,v-2));
		 cs[u-1][v-2]=cs[u][v]+1;               	 	              	 	             	 	
		 vi[u-1][v-2]=1;
		}
	}
}

