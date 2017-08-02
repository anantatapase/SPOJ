
#include<stdio.h>



int main()
{
	long long int count,r,e,i,t,n;
	int arr[100000];
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		   
		    count=0;e=1;
			//printf("count=%lld,n=%lld,e=%lld\n",count,n,e);
			while(n-e>=0)
			{//printf("count=%lld,n=%lld,e=%lld\n",count,n,e);
			
				n=n-e;
				count++;
				e=e*2;
			}
			
	
		//printf("count=%lld,n=%lld,e=%lld\n",count,n,e);
		
		
		i=0;
		while(n>0)
		{
			r=n%2;
			if(r==0)
			arr[i]=4;
			else
			arr[i]=7;
			
			i++;
			n/=2;
		}
		
		
	
	    while(i<count)
	    {
	    	arr[i]=4;
	    	i++;
	    }
	
		for(i=count-1;i>=0;i--)
		printf("%d",arr[i]);
		
		printf("\n");
	
		
	
	}
}
