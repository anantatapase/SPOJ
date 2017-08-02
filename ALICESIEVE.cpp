#include<stdio.h>

int a[1000001]={0};

int main()
{
	int t,i,j,m,n,p,q,c;
	
	scanf("%d",&t);
	
	
	while(t--)
 	{
 		scanf("%d",&n);
 	     
 	     for(i=0;i<=n;i++)
 	     {a[i]=0;
 	     }
         p=n;
		
		for(i=0;i<=n;i++)
		printf(" %d",a[i]);
		
		 while(1)
		 { 
		 printf("p=%d\n",p);
		 
	       for(i=1,c=0;i*i<=p;i++)
 		{
 		  
		if(p%i==0)
		   {
		   	if(a[i]!=1)
			{			
			a[i]=1;
			c++;
			}
			j=p/i;
			if(j!=p&&j!=i&&a[j]!=1)
			{a[j]=1;
			c++;
 	    	}
 	    	
 		   }
		} 	
		  a[p]=1;	
		             printf("\n");
		              for(i=0;i<=n;i++)
		              printf(" %d",a[i]);
		    
			q=p;
            while(a[p]!=0 && p>=0)
 	        { printf("*p=%d\n",p);
 	        p--;
 	        }
 	        
 	        if(p==0)
 	        {
 	        	break;
 	        }
 	        
		}if(n==2)
		printf("1\n");
		else
 	printf("%d\n",q);
 }
 return 0;
}
