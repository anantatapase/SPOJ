#include<stdio.h>
 
 
long long int a[1000100]={0};
long long int nfactor[15][1000010]; 
int main()
{
long long int t=0,i,j;
 
for(i=2;i<1000001;i++)
{
  if(a[i]==0)
	{
	for(j=i;j<1000001;j=j+i)
	a[j]++;                  
	}
}


 for(i=1;i<1000001;i++)
    {
        for(j=0;j<11;j++)
        {
           
            if(a[i]==j)
            {
                nfactor[j][i]=nfactor[j][i-1]+1;
            } 
            else
            {
                nfactor[j][i]=nfactor[j][i-1];
            }

        }
    }


scanf("%lld",&t);
 
while(t--)	
{
	long long int u,v,n,count=0;
	scanf("%lld %lld %lld",&u,&v,&n);
		printf("%lld\n",nfactor[n][v]-nfactor[n][u-1]);
}
return 0;
} 
