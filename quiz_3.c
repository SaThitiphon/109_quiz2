#include <stdio.h>
int main()
{
	int n,count=0,i,j,a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i>0 && i<10)
		{
			count++;
		}
		if(i>10 && i%11==0)
		{
			count++;
		}
		if(i>100)
		{
			a = i % 10;
			b = i / 100;
			if(a==b)
			{
				count++;
			}
		}
	}
	printf("%d",count);
}
