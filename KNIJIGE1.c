#include<stdio.h>

int main()
{
	int n,i,p=0,count=0,j,ps,k;
	
	scanf("%d",&n);
	
	int arr[n+1],pos[n+1];
	
	
	    for(i=1;i<=n;i++)
		{
		scanf("%d",&arr[i]);
		if(arr[i]==n)
		p=i;
		}
		i=1;
		while(p>0)
		{
			p--;
			if(arr[p]==n-i)
			{
				i++;
			}
		}
		
		printf("%d\n",n-i);		
return 0;
}
