#include<stdio.h>

int main()
{
	
	int i,j,count,n;
	
	
	while(scanf("%d",&n)==1)
	{
		
	printf("1");
		for(j=2;j*j<=n;j++)
		{ 
			
			if(n%j==0)
			{
				while(n%j==0)
				{  
					n/=j;
				    	printf(" x %d",j);
				}
				
		    }
		
	   }
	   if(n!=1)
	   printf(" x %d",n);
	   printf("\n");
   }
   return 0;
}
