#include <stdio.h>
void main()
{
	int n,t;
	n=37;
	while (n==0)
	{
		t=n%2;
		printf("%d",t);
		n=n/2;
	}
}
