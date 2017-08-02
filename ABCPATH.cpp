#include<stdio.h>

char a[51][51];

int m1,n1,c;

struct node
{
	int d;
	int u;
	int v;
};

int check(int vi[][51],int u,int v,int i);

void dfs(int vi[][51],int u,int v,int d);

int main()
{
    int t=0;
    while(1)
    { 
 	struct node arr[6000]={0};
    
	int  vi[51][51]={0},u,v,n,m,max=0,i;
    char x;
	scanf("%d %d",&n,&m);
    t++;
    
	if(n==0&&m==0)
    break;
  
    m1=m;
    n1=n;
    i=0;
  
    //scanf("%c",&x);
    for(u=0;u<n;u++)
    {
        for(v=0;v<m;v++)
        { 
		scanf("%c",&a[u][v]);  
         if(a[u][v]==65)
        {
         arr[i].d=65;
         arr[i].u=u;
         arr[i].v=v;
         i++;
        }
        }
        scanf("%c",&x);    
    }
    
    c=0;
	max=i;
	for(i=0;i<max;i++)
    {
    	dfs(vi,arr[i].u,arr[i].v,arr[i].d);
    }

    printf("Case %d: %d\n",t,c);
    
	}
return 0;
}


int check(int vi[][51],int u,int v,int i)
{          
    if((a[u][v]!=i)|| (u<0) || (u>=n1) ||(v<0) || (v>=m1) || vi[u][v]!=0)
    return 0;
    return 1;
}

void dfs(int vi[][51],int u,int v,int d)
{  	
		printf("%d\n",d);
		vi[u][v]=1;
		
		if((d-64)>c)
		c=(d-64);
		
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
