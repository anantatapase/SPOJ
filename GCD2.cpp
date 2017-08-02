#include<stdio.h>
#include<string.h>
int main()
{   char b[256];
        int t,i,j,m,n,a,s,l,r,q,count;
        scanf("%d",&t);

        while(t--)
        {
                scanf("%d",&a);
                scanf("%s",b);
                
                puts(b);

                if(a==0)
                printf("%s\n",b);

                else
                {n=0;
       			 m=a;
                l=strlen(b);
                for(i=m;i>0;i--)
                {  printf("i=%d\n",i);
                  if(m%i==0)
                   { count=0;
				     n=0;
				     r=0;
                     q=0;
                     for(j=0;j<l;j++)
                     {
                     s=b[j]-'0';
                     	printf("j=%d b[j]=%c s=%d\n",j,b[j],s);
					 n=s+r*10;
                     printf("n=%d\n",n);
                     q=q*10+(n/i);
                     printf("q=%d\n",q);
                     r=n%i;
                     printf("r=%d\n",r);
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
