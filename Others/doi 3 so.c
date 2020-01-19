#include <stdio.h>
void main()
{
	int a, b, c;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	a=a+b;
	b=abs(a-b);
	a=abs(a-b);
	b=b+c;
	c=abs(b-c);
	b=abs(b-c);
	printf("Change...\n");
	printf("----------------------------\n");
	printf("a=%d, ",a);
	printf("b=%d, ",b);
	printf("c=%d",c);
	a=a+b;
	b=abs(a-b);
	a=abs(a-b);
	b=b+c;
	c=abs(b-c);
	b=abs(b-c);
	printf(" or ");
	printf("a=%d, ",a);
	printf("b=%d, ",b);
	printf("c=%d",c);
}
