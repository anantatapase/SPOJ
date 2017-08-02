#include<stdio.h>



int main()
{
	
	long long int a,x,i,n;
	scanf("%lld",&n);
	
		scanf("%lld",&a);
		x=a;
		for(i=1;i<n;i++)
		{
			scanf("%lld",&a);
			x=a^x;
			
		}
	printf("%lld\n",x);

return 0;
}
