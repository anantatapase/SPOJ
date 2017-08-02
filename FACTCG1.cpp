# include <stdio.h>
# include <math.h>
void primeFactors(long int n)
{
	long int i;
    while (n%2 == 0)
    {
    	if(n/2==1)
    	printf("2");
    	else
        printf("x 2");
        n = n/2;
    }
    for (i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            printf(" x %ld", i);
            n = n/i;
        }
    }
    if (n > 2)
        printf ("%ld ", n);
        printf("\n");
}
int main()
{
    long int n;
    	while(scanf("%d",&n)==1)
	{
    if(n==1)
    printf("1\n");
    else{
    
    printf("1 x ");
    primeFactors(n);
    }}return 0;
}
