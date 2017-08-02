#include<stdio.h>
int q[10001],a[10001][10001]={0},f=-1,r=-1,v[10001]={0};

int empty()
{
	if(f==-1||f==r+1)
	return 1;
	else
	return 0;
}

void insert(int a)
{
	
	if(f==-1)
	{
	f=0;
	}
	
	r++;
	q[r]=a;
}

int delet(void)
{int i;
	
		i=q[f];
		f++;
		return i;
}



int main()
{
	int n,m;
 
	scanf("%d%d",&n,&m);
	int a1;
	int b1;
	int i,j;
	
	for(i=1;i<=m;i++)
	{
		scanf("%d%d",&a1,&b1);
     	a[a1][b1]=1;
		 a[b1][a1]=1;}


	if(n!=m+1)
	{
		printf("NO\n");
	}

	else
	{
		
		
		insert(1);
		int x;
		int flag=0;
		while(!empty())
		{
			x=delet();
			//printf("x=%d ",x);
			v[x]=2;
			for(i=1;i<=n;i++)
			{ if(v[i]!=2 && a[x][i]==1)
			{ //printf("i=%d",i);
			
				if(v[i]==0)
				{
					v[i]=1;
					insert(i);
					
				}
				else if(a[x][i]==1)
				{
					flag=1;
					break;
				}
			}}
			if(flag==1)
			{
				break;
			}
	
		}
		
		if(flag==1)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}
	return 0;
}
 
