#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int i,l;

void print(char s[],int h,int *max)
{
	if(i==l-1)
	return;
	
	if(h>*max)//can make max global also
	*max=h;
	
	
	if(s[i]=='l')
	{
	i++; //inserted leaf in tree (virtually) and going to next node in preorder traverasl
	return;//left side end going back to parent
	}
	
	//here s[i]==n
	i++; //inserted node in tree(vertually) and going to next node in preorder traversal
	print(s,h+1,max);//going to left side of tree
	
	//after completing left subtree
		
	print(s,h+1,max);//going to rite side
	
	return ;//rite side end going back to parent
	
	
}

int main()
{
	int t;
	
	cin>>t;
	
	while(t--)
	{
		char s[10001];
		int max=0;
		scanf("%s",s);
		l=strlen(s);
		i=0;
		print(s,0,&max);
		printf("%d\n",max);
	}
}
