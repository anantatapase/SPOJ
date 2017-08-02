#include<stdio.h>

int main()
{
	int t,i,j,m,n,a,b,count;
	scanf("%d",&t);
	
	while(t--)
 	{
 		scanf("%d %d",&a,&b);
 		
 		count=0;
 		if(a<=b)
 		{m=a;
 		 n=b;
 		}
 		else
 		{
 		m=b;
 		n=a;
 		}
 		for(i=1;i*i<=m;i++)
 		{
 		  if(m%i==0)
		   {
		   	if(n%i==0)
		   	count++;
		   	
		   	if(i*i!=m)
		   	{  
		   		j=m/i;
		   		if(n%j==0)
		   		count++;
		   	
		   	
		   }}	
 	    }
 	printf("%d\n",count);
	 }
}
