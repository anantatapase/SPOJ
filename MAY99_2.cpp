#include<stdio.h>



int main()
{
	long long int count,r,e,i,t,n;
	char arr[100000];
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
				e=e*5;
			}
			
	
	//	printf("count=%lld,n=%lld,e=%lld\n",count,n,e);
		
		
		i=0;
		while(n>0)
		{   
			r=n%5;
			//printf("i=%lld,n=%lld,r=%d\n",i,n,r);
			switch(r)
			{
				case 0:
					arr[i]='m';	//printf("i=%lld,n=%lld,r=%d\n",i,n,r);
					break;
				case 1:
					arr[i]='a';	//printf("i=%lld,n=%lld,r=%d\n",i,n,r);
					break;
				case 2:
					arr[i]='n';	//printf("i=%lld,n=%lld,r=%d\n",i,n,r);
					break;
				case 3:
					arr[i]='k';	//printf("i=%lld,n=%lld,r=%d\n",i,n,r);
					break;
				case 4:
					arr[i]='u';	//printf("i=%lld,n=%lld,r=%d\n",i,n,r);
					break;
			}			
			i++;
			n/=5;
		}
		
		
	
	    while(i<count)
	    {
	    	arr[i]='m';
	    	i++;
	    }
	
		for(i=count-1;i>=0;i--)
		printf("%c",arr[i]);
		
		printf("\n");
	
		
	
	}
}
