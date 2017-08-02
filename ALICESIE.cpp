#include<stdio.h>

int a[1000001]={0};

int main()
{
	int t,i,j,m,n,p,q;
	
	scanf("%d",&t);
	
	
	while(t--)
 	{
 		scanf("%d",&n);
 	     
 	     for(i=0;i<=n;i++)
 	     {a[i]=0;
 	     }
         p=n;

		 while(1)
		 { 
	       for(i=1;i*i<=p;i++)
 		 {
 		  
		 if(p%i==0)
		   {
		   	if(a[i]!=1)
			{			
			a[i]=1;
			
			}
			j=p/i;
			if(j!=p&&j!=i&&a[j]!=1)
			{a[j]=1;
			 }
 	    	
 		   }
		} 	
		  a[p]=1;   
			q=p;
            while(a[p]!=0 && p>=0)
 	        {
 	        p--;
 	        }
 	        
 	        if(p==0)
 	        {  
 	        	break;
 	        }
 	        
		}if(n==2)
		printf("1\n");
		else
 	printf("%d\n",n-q+1);
 }
 return 0;
}
