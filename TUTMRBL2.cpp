#include<stdio.h>


int main()
{
	long int count,n,i,m;
	
	
	while(1)
	{
    scanf("%d",&n);
	
	if(n==0)
	break;
m=n;
count=0;	
	
	printf("%d =",n);
	
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
			{
				n=n/i;
				printf(" %d ",i );
				if(n!=1)
				printf("*");
				count++;
				
			}
		}
	}
	
	count++;
	
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
