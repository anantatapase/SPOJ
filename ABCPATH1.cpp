#include<stdio.h>
 
char a[51][51];
 
int m1,n1,j;
 
int check(int vi[][51],int u,int v,int i);
 
void dfs(int vi[][51],int u,int v,int d);
 
int main()
{
    int t=0,i;
    while(1)
    { 
 int vi[51][51]={0};
 
    int  u,v,n,c=0,m,max=0;
    scanf("%d %d",&n,&m);
    t++;
    
	if(n==0&&m==0)
    break;
  
    m1=m;
    n1=n;
  
    for(u=0;u<n;u++)
    scanf("%s",a[u]);
 
    max=0;
    j=0;
    for(u=0;u<n;u++)
    {
        for(v=0;v<m;v++)
        {   
         if(a[u][v]==65)
        {
         dfs(vi,u,v,65);
        }
        }
    }
 
    printf("Case %d: %d\n",t,j);
    
}
return 0;
}
 
 
int check(int vi[][51],int u,int v,int i)
{          
    if((a[u][v]!=i)|| (u<0) || (u>=n1) ||(v<0) || (v>=m1) || vi[u][v]!=0){
    if(i-65>j)
    j=i-65;
    return 0;
	}
    return 1;
}
 
void dfs(int vi[][51],int u,int v,int d)
{  	
		vi[u][v]=1;
		
	
		
        if(check(vi,u,v+1,d+1)==1)
        {
    	dfs(vi,u,v+1,d+1);
        }
        
        if(check(vi,u,v-1,d+1)==1)
        {
    	dfs(vi,u,v-1,d+1);
    	}
    
        if(check(vi,u+1,v,d+1)==1)
        {
        dfs(vi,u+1,v,d+1);
        }
       
        if(check(vi,u-1,v,d+1)==1)
        {
    	dfs(vi,u-1,v,d+1);
        }
    
    	if(check(vi,u+1,v-1,d+1)==1)
        {
    	dfs(vi,u+1,v-1,d+1);
        }
        
        if(check(vi,u-1,v-1,d+1)==1)
        {
    	dfs(vi,u-1,v-1,d+1);
        }
         
        if(check(vi,u-1,v+1,d+1)==1)
		{
    	dfs(vi,u-1,v+1,d+1);
        }
    
    	if(check(vi,u+1,v+1,d+1)==1)
        {
    	dfs(vi,u+1,v+1,d+1);
        }    

}
