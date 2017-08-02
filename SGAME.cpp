#include<stdio.h>

int main()
{
	int t,i,n,m,a[400],a1,b1,c=0;
 
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d",&n);
	
	for(i=0;i<=301;i++)
	a[i]=0;
	
	c=0;
	 while(1)
	 {
	
		scanf("%d%d",&a1,&b1);
     	if(a1==-1&&b1==-1)
     	break;
     	a[a1]++;
     	a[b1]++;
	    c++;
	 }
	 
	 for(i=0;i<c;i++)
	 {
	 	if(a[i]%2==0)
	 	continue;
	 	else
	 	break;
	 }
	 
	 if(i==c)
	 printf("YES\n");
	 else
	 printf("NO\n");
	}	
return 0;
}
