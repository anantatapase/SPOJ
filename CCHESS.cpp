#include<iostream>
#include<cstdio>
#include<queue>


using namespace std;


void bfs(int a,int b,int c,int d)		;
int check(int a,int b,int c,int d,int cs);


int main()
{	
	int a,b,c,d;
    while(scanf("%d",&a)!=EOF)
    { 
    
    scanf("%d %d %d",&b,&c,&d);
	
	bfs(a,b,c,d);			
	}

return 0;
}
		
		
int check(int a,int b,int c,int d,int cs[][9])
{      	
	if(c<0||d<0||c>7||d>7||cs[c][d]<=cs[a][b]+((a*c)+(b*d))
    	return 0;
	return 1;
}

void  bfs(int a,int b,int c,int d)
{
  int vi[9][9]={0},cs[9][9]={0},u,v,k;
	queue<pair<int,int>> q;
	pair<int,int> p;
	
	for (int i = 0; i <= 8; ++i ) {
		for (int j = 0; j <= 8; ++j ) {
			cs[ i ][ j ] = 100000000;
			vi[ i ][ j ] = 0;
		}
	}
	
	cs[a][b]=0;
	q.push(make_pair(a,b));
	vi[a][b]=1;
	
	
	while(!q.empty())
	{
	p=q.front();
	q.pop();
	u=p.first;v=p.second;
	vi[u][v]=1;    
	
		k=check(u,v,u+2,v+1,cs);
      	if(k==1)
        {      
		 q.push(make_pair(u+2,v+1));
		 cs[u+2][v+1]=cs[u][v]+(u*(u+2)+v*(v+1));		         	 	
		}
		
		k=check(u,v,u+2,v-1,cs);
      	if(k==1)
        {
		 q.push(make_pair(u+2,v-1));
		 cs[u+2][v-1]=cs[u][v]+(u*(u+2)+v*(v-1));               	 	
		}
		
		k=check(u,v,u-2,v+1,cs);
      	if(k==1)
        {
		 q.push(make_pair(u-2,v+1));
		 cs[u-2][v+1]=cs[u][v]+(u*(u-2)+v*(v+1));               	 	
		}	 
		
		k=check(u,v,u-2,v-1,cs);
      	if(k==1)
        {
		 q.push(make_pair(u-2,v-1));
		 cs[u-2][v-1]=cs[u][v]+(u*(u-2)+v*(v-1));               	 	               	 	
		}	 
		
		k=check(u,v,u+1,v+2,cs);
      	if(k==1)
        {
		 q.push(make_pair(u+1,v+2));
		 cs[u+1][v+2]=cs[u][v]+(u*(u+1)+v*(v+2));               	 	               	 	
		}	 
		
		k=check(u,v,u+1,v-2,cs);
      	if(k==1)
        {
		 q.push(make_pair(u+1,v-2));
		 cs[u+1][v-2]=cs[u][v]+(u*(u+1)+v*(v-2));               	 	              	 	
		}	 
		
		k=check(u,v,u-1,v+2,cs);
      	if(k==1)
        {              	 	
         q.push(make_pair(u-1,v+2));
		 cs[u-1][v+2]=cs[u][v]+(u*(u-1)+v*(v+2));               	 	              	 	
		}	 
		
		k=check(u,v,u-1,v-2,cs);
      	if(k==1)
        {
		 q.push(make_pair(u-1,v-2));
		 cs[u-1][v-2]=cs[u][v]+(u*(u-1)+v*(v-2));               	 	              	 	             	 	
		}
	}
	if ( !vi[ c ][ d ] ) {
		printf( "-1\n" );
		return;
	}
	printf( "%d\n", cs[ c ][ d ] );

}

