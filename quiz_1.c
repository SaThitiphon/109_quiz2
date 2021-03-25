#include <stdio.h>
int main()
{
	int n,i,j,m,count=0;
	scanf("%d",&n);
	for(i=2;i<100000;i++)
	{
		m = i * i * i;
		if(n%m==0)
		{
			printf("Not Cube Free");
			break;
		}
	}
	for(i=1;i<100000;i++)
	{
		for(j=2;j<100000;j++)
		{
			m = j * j * j;
			if(i%m==0)
			{
				count--;
			}			
		}
		if(i==n)
		{
			count++;
			printf("%d",count);
			break;
		}
		count++;
	}
}
