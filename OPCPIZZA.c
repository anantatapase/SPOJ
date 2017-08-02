#include<stdio.h>

int cmp_fun (const void * a, const void * b)
{
   
int n1 = * (int *) a;
           int  n2 = * (int *) b;

        return 
            n1 > n2             // if
            ? 1                 // then
            : n1 == n2          // else if
            ? 0                 // then
            : -1                // else
            ;                   // end if
   
}


int main()
{
	int t;
	
	scanf("%d",&t);
	
	while(t--)
	{
	 int x,m,n,pair=0,a[100001]={0},i,j,c=0;
		//struct num f[100001]={0},r[100001]={0};
		scanf("%d",&n,&m);
		
		for(i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);
		}
		
		qsort(a,n,sizeof(a[0]),cmp_fun);
		
		i=0;j=n-1;
		while(i<j)
		{
			if(a[j]-a[i]<m)
			i++;
			else if(a[i]+a[j]>m)
			j--;
			else
			{
				c++;
				i++;
				j--;
			}
		}
		
		printf("%d\n",c);
	}
	return 0;
}
