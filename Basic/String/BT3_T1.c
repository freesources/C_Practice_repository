#include <stdio.h>
void main()

// 1 - 1/(1+2) + 1/(1+2+3) + ... + (-1)^n* 1/(1+2+3+...+n)
{
	float s,t,a,b;
	int n,i;
	printf("Nhap n: "); scanf("%d",&n);
	s=0;
	a=(-1);
	b=0;
	for (i=1;i<=n;i++)
	{
		a=(-1)*a;
		b=b+i;
		s=s+(a/b);
	}
	printf("Ket qua = %f",s);
}
