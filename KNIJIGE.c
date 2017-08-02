#include<stdio.h>

int main()
{
	int n,i,p=0,count=0,j,ps,k;
	
	scanf("%d",&n);
	
	int arr[n+1],pos[n+1];
	
	
	    for(i=1;i<=n;i++)
		{
		scanf("%d",&arr[i]);
		p=arr[i];
		pos[p]=i;		
		}
		
		
		for(k=1;k<=n;k++)
		{
		//printf(" 1c=%d \n",count);
		        
	            i=arr[k];
		        
				if(pos[i]==i)
		        continue;
		       
		        p=i;
		        
			while(pos[i]!=i)
			{
			k=0;   
			//printf(" 2c=%d \n",count);
			 
			 
			 p--;
			 ps=pos[p];
			 
			    
				for(j=ps;j>1;j--)
			    {//printf(" 3c=%d \n",count);
			    arr[j]=arr[j-1];
			    pos[arr[j-1]]=j;;
			    }
			    arr[1]=p;
			    pos[p]=1;
			    count++;
			}
		
		}
	printf("%d\n",count);
	
	return 0;
 }
