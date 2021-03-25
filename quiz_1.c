#include <stdio.h>
int main()
{
	long int n,i,j,m,count=0;
	scanf("%ld",&n);
	for(i=1;i!=n+1;i++)
	{
		for(j=2;j<100;j++)
		{
			m = j * j * j;
			if(i%m==0)
			{
				count--;
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
		}
		count++;
	}
}
