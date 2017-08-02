#include<stdio.h>

int main()
{
	long long int t,i,m,n,j,count;
	
	scanf("%lld",&t);
	
	while(t--)
	{
		scanf("%lld%lld",&m,&n);
	
		for(i=m;i<=n;)
		{   
		
		
		if(i%2==0 || i==1)
		{ 
		if(i==2)
	    printf("%lld\n",i);
		i++;
		}
		
		else
		{ 
		    count=0;
			for(j=2;j*j<=i;j++)
			{
			if(i%j==0)
			{
			count++;
			break
			;
            }
		
			}
			
			
			if(count==0)
			printf("%lld\n",i)
		; i++;
		}
		}
	}
return 0;
}
