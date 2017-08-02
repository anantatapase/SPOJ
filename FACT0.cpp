#include<stdio.h>

int main()
{
	
	
	long long int n,i,j,count;
	
	while(1)
	{
		scanf("%lld",&n);
		if(n==0)
		break;
	
		for(j=2;j*j<=n;j++)
		{ 
			
			if(n%j==0)
			{count=0;
				while(n%j==0)
				{  count ++
					;n/=j;
				}
				    	printf("%lld^%lld",j,count);
				printf(" ");
		    }
		
	   }
	   if(n!=1)
	   printf("%lld^1",n);
	   printf("\n");
   }
   return 0;
}
