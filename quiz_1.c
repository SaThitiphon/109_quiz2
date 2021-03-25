#include <stdio.h>
int main()
{
	int n,i,j,m;
	scanf("%d",&n);
	for(i=2;i<100;i++)
	{
		m = i * i * i;
		if(n%m==0)
		{
			printf("Not Cube Free");
			break;
		}
	}
}
