#include<stdio.h>
#include<string.h>
int main()
{   char b[251];
        int t,i,j,m,n,a,l,r,q,count;
        
		scanf("%d",&t);

        while(t--)
        {
                scanf("%d",&m);
                scanf("%s",b);
				if(m==0)
                printf("%s\n",b);
				else
                {
                l=strlen(b);
                for(i=m;i>0;i--)
                { 
                  if(m%i==0)
                   { count=0;
				     n=0;
				     r=0;
                     q=0;
                     for(j=0;j<l;j++)
                     {
                     n=(b[j]-'0')+r*10;
                     q=q*10+(n/i);
                     r=n%i;
                  	 }
					}
					if(r==0)
                     {count=1;
                     break;
                     }
				}
            if(count==1)
        printf("%d\n",i);
            else
            printf("1\n");
            }
         }
return 0;
}
