#include<stdio.h>

int main()
{
	long long int count,r,e,i,t,n;
	char arr[100000]={'\0'};
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		   
			//printf("count=%lld,n=%lld,e=%lld\n",count,n,e);
		
	
	//	printf("count=%lld,n=%lld,e=%lld\n",count,n,e);
		while(n>0)
		{   
			r=n%5-1;
			//printf("i=%lld,n=%lld,r=%d\n",i,n,r);
			switch(r)
			{
				case 0:
					arr[i]='m';	//printf("i=%lld,n=%lld,r=%d\n",i,n,r);
					break;
				case 1:
					arr[i]='a';	//printf("i=%lld,n=%lld,r=%d\n",i,n,r);
					break;
				case 2:
					arr[i]='n';	//printf("i=%lld,n=%lld,r=%d\n",i,n,r);
					break;
				case 3:
					arr[i]='k';	//printf("i=%lld,n=%lld,r=%d\n",i,n,r);
					break;
				case -1:
					arr[i]='u';	//printf("i=%lld,n=%lld,r=%d\n",i,n,r);
					break;
			}
			i++;			
			n=(n-1)/5;
		}
		
		int j=i;
	
		for(i=j-1;i>=0;i--)
		printf("%c",arr[i]);
		
		printf("\n");
	}
}
