#include<stdio.h>
 
struct in
{
	long long int u;
	long long int v;
} arr[1001][1001];
 
long long int m1,n1,j,vi[1001][1001]; 
void dfs(int u,int v);
 
int main()
{
    int t=0,i;
    while(1)
    { 
 	
 
 
    long long int  u,v,n,m;
 	char x;
 	
    scanf("%lld %lld",&n,&m);
    
	if(n==0&&m==0)
    break;
  
    m1=m;
    n1=n;
  
	scanf("%c",&x);
    for(u=0;u<n;u++)
    {
        for(v=0;v<m;v++)
        { 
		scanf("%c",&x);  
        vi[u][v]=0;
		 if(x=='S')
        {
         arr[u][v].u=1;
         arr[u][v].v=0;
        }
         else if(x=='N')
        {
         arr[u][v].u=-1;
         arr[u][v].v=0;
        } 
	else if(x=='E')
        {
         arr[u][v].u=0;
         arr[u][v].v=1;
        } 
	else if(x=='W')
        {
         arr[u][v].u=0;
         arr[u][v].v=-1;
        }
	scanf("%c",&x);
	}
        scanf("%c",&x);    
	}
 
    j=0;
    for(u=0;u<n;u++)
    {
        for(v=0;v<m;v++)
        {   
         if(vi[u][v]==0)
        {
         dfs(u,v);
        }
        }
    }
 
    printf("%lld\n",j);
    
}
return 0;
}
 
  
void dfs(int u,int v)
{  	
		if(vi[u][v]==2)
		return;
		
		if(vi[u][v]==1)
		{
			j+=1;
			return;
		}
		
		if(vi[u][v]==0)
		vi[u][v]=1;
		
		dfs(u+arr[u][v].u,v+arr[u][v].v);
		vi[u][v]=2;
		
}
