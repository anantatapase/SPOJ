		#include<stdio.h>
		
		int a[252][252]={0},vi[252][252]={0},b[62555]={0},m1,n1;
		
		
		
		
		int check(int u,int v);
		
		
		int dfs(int u,int v);
		
		int main()
		{
			
		    while(1)
		    { 
			int  k,i,u,v,c,n,m,max=0,count=0;
			scanf("%d %d",&n,&m);
		    m1=m;
		    n1=n;
			
		    if(n==0&&m==0)
		    break;
		  
		    for(u=1;u<=n*m;u++)
		  	b[u]=0;
				
		    for(u=1;u<=n;u++)
		    for(v=1;v<=m;v++)
		    {
		    scanf("%d",&a[u][v]);
		    vi[u][v]=0;
		    }
		    
			/*for(u=1;u<=n;u++)
		    {
		    printf("\n");
			for(v=1;v<=m;v++)
		    {
		    printf("%d ",a[u][v]);
            }    
		    }*/
		    
			for(u=1;u<=n;u++)
			{
			    for(v=1;v<=n;v++)
			    {   
				 k=check(u,v);
				 if(k==1)
			     {
			     c=dfs(u,v);
			    //printf(" c=%d ",c);
				   if(c>max)
				   max=c;
			       b[c]++;
			       count++;
			     }
			   }
		    }
		    printf("%d\n",count);
		   
		   /* 
		    for(i=1;i<=max;i++)
			printf(" %d ",b[i]);
		    */
		    
		    for(i=1;i<=max;i++)
			{
			if(b[i]!=0)
	     	printf("%d %d\n",i,b[i]);
		
			}
		}
		return 0;
}
		
		
		int check(int u,int v)
		{      int c=4;
	
			if(a[u][v]==0 || vi[u][v]==1 || u<1 || u>n1 ||v<1 || v>m1)
		    return 0;
			
			else
			return 1;
		}
		
		int dfs(int u,int v)
		{  int c=1,k;
			vi[u][v]=1;        
			     
				k=check(u+1,v);
		      	if(k==1)
		        {
			    c+=dfs(u+1,v);
            	}
          	     k=check(u-1,v);
		        if(k==1)
		     	{
			    c+=dfs(u-1,v);
			    }     
		        k=check(u,v+1);
		        if(k==1)
		        {
		        c+=dfs(u,v+1);
 		        }
     	        k=check(u,v-1);
                if(k==1)
	            {
				c+=dfs(u,v-1);
		        }
			
			return c;
		}
		
