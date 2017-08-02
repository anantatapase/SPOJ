#include<stdio.h>

int main()
{
	long int j,t,a[10]={0},i,s,n,N,c;
	
	scanf("%ld",&t);
	
	for(j=1;j<=t;j++)
	{  
		scanf("%ld",&N);
		n=1;
		for(i=0;i<N;i++)
		{
			scanf("%ld",&a[i]);
	     	n*=a[i];
		}
        n+=1;	
     	c=0;
	    for(i=2;i*i<=n;i++)
	    {
	    	if(n%i==0)
	    	{
	    		while(n%i==0)
	    		{s=i;
	    		n/=i;
	    	    c++;
	    	    }
	    	}
	    }
	
	   if(c==0 || n!=1)
	   {
	   	printf("Case #%ld: %ld\n",j,n);
       }
	   
	   else
	   { 
	   	printf("Case #%ld: %ld\n",j,s);
	   }
	
	}	
return 0;
}
