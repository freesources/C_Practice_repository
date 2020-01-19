#include <stdio.h>
#include <math.h>
void main()
// x - x^2 + x^3 + ... + (-1)^(n+1) * x^n
{
	float x,s,t,i;
	int n;
	printf("Nhap x, n: "); scanf("%f %d",&x,&n);
	s=0;
	
	for (i=1;i<=n;i++)
	{
		t=(pow(-1,i+1)*pow(x,i));
		s=s+t;
	}
	printf("Ket qua = %0.1f",s);
}

int dayso(int n, int x)
{
	if(x=0)
	return 1;
	else
	return dayso(n-1,x)+pow(-1,n)*(pow(x,n-1));
}
