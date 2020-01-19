#include <stdio.h>
void main()

// x - x^3 + x^5 + ... + (-1)^n * x^(2n+1)
{
	float x,s,t,a,b,c;
	int n,i,j;
	printf("Nhap x, n: "); scanf("%f %d",&x,&n);
	s=0;
	a=(1);
	c=1;
	for (i=1;i<=n;i++)
	{
		a=(-1)*a;
		b=b+i;
		c=x*c;
		s=s+((a*c)/b);
	}
	printf("Ket qua = %f",s);
}
