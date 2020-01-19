#include <stdio.h>
void main()

// x - x^3 + x^5 + ... + (-1)^n * x^(2n+1)
{
	float x,s,t,a,b;
	int n,i,j;
	printf("Nhap x, n: "); scanf("%f %d",&x,&n);
	s=0;
	a=(-1);
	for (i=0;i<=n;i++)
	{
		b=1;
		a=(-1)*a;
		for (j=1;j<=(2*i+1);j++)
		{
			b=b*x;
	    }
		t=a*b;	
		s=s+t;
	}
	printf("Ket qua = %0.1f",s);
}
