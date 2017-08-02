#include<stdio.h>
int q[10001]={0};



int main()
{

	int a1,b1,i,count=0,n,m;
 
	scanf("%d%d",&n,&m);
	 	
     	if(n!=m+1)
	{
		count=1;
	}


	
	for(i=1;i<=m;i++)
	{
		scanf("%d%d",&a1,&b1);
    
        if(count!=1)
		 {
        
         if(q[a1]==1&&q[b1]==1)
		 count=1;
		 
		 else
		 {
		 q[a1]=1;
		 q[b1]=1;
		 }
        }
	}

	

		
		if(count==1)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	
	return 0;
}

 
