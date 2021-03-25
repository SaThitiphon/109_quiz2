#include <stdio.h>
int main()
{
	int n,i,j,m,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=2;j<100;j++)
		{
			m = j * j * j;
			if(i%m==0)
			{
				count--;
				break;
			}
		}
		if(i==n)
			{
				if(i%m==0)
				{
					printf("Not Cube Free");
					break;
				}
				else
				{
					count++;
					printf("%d",count);
					break;
				}
			}		
		count++;
	}
}
