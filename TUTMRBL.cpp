#include<stdio.h>

int main()
{
	
	int i,j,count,n,m;
	
	
	while(1)
	{
		scanf("%d",&n)
		
			
		;if(n==0)
		break;
		
		count=0;
	for(j=1;j*j<=n;j++)
    {
    	if(n%j==0)
    	count++;
    }	
	
	
	m=n;
	
	    printf("%d =",m);
		for(j=2;j*j<=n;j++)
		{ 
			if(n%j==0)
			{
			
			    
				while(n%j==0)
				{  
					
			    	printf(" %d ",j);
				n/=j;
				if(n!=1)
				printf("*");
				}
				
		    }
		
	   }
	   
	   if(n==m)
	   printf(" %d\n",n)
	   ;
	   else{
	   if(n!=1)
	   printf(" %d ",n);
	   printf("\n");
       }
       
	   printf("With %d marbles, %d different rectangles can be constructed.\n",m,count);
	   
	   }
   return 0;
}
