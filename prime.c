#include<stdio.h>
int main()
{
	int a,i,c=0;
	scanf("%d",&a);
	for (i=1;i<=a;i++)
	{
		if (a%i==0)
		{
			c++;
		}
	}
	if (c==2)
	printf("Prime");
	else
	printf("Not Prime");	
	return 0;
}
