#include<stdio.h>

int main()
{
	
	long long int s,i,j,f,n,t;
	
	scanf("%lld",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
	
	    if(n==1)
	    printf("0\n")
	;
	else{
	
		s=1;
		for(j=2;j*j<=n;j++)
		{
			if(n%j==0)
			{
			f=n/j;
			
			s=s+f+j;
			if(j*j==n)
			s-=j;
			}
		}
		
		printf("%lld\n",s);
	} }

    return 0;
}

