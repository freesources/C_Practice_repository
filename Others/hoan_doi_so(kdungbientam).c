#include <stdio.h>
void main()
{
	int a, b;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	a=a+b;
	b=abs(a-b);
	a=abs(a-b);
	printf("Change...\n");
	printf("b= %d\n",b);
	printf("a= %d\n",a);
	
}
