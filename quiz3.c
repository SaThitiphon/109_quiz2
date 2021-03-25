#include <stdio.h>
int main()
{
	int n,count=0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i>0 && i<10)
		{
			count++;
		}
	}
	printf("%d",count);
}
