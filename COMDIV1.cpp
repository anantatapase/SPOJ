#include<stdio.h>

int gcd(int a,int b)
{
	if(b==0)
	return a;
	
	gcd(b,a%b);
}


int main()
{
	int t,i,j,m,n,a,b,count;
	scanf("%d",&t);
	
	while(t--)
 	{
 		scanf("%d %d",&a,&b);
 		
 	    m=gcd(a,b);
 	    count=0;
 	    
 	   // printf("m=%d ",m);
 		for(i=1;i*i<=m;i++)
 		{
 		  if(m%i==0)
		   {
		   count++;
		   	
	      if(i*i!=m)
		   {  
		   		count++;
		   }}	
 	    }
 	    printf("%d\n",count);
	 }
}



