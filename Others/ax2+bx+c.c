#include <stdio.h>
#include <math.h>

void main()
{
	float a,b,c,dt;
	printf("GIAI PHUONG TRINH BAC HAI VOI DANG ax^2 + bx + c = 0\n");
	printf("Nhap a= "); scanf("%f",&a); 
	printf("Nhap b= "); scanf("%f",&b); 
	printf("Nhap c= "); scanf("%f",&c); 
	if (a==0)
	printf("Nghiem cua phuong trinh la: %f\n",-(c/b));
	else if (a==0&&b==0&&(c!=0)) {
	printf("Phuong trinh vo nghia!");}
	else if (a==0&&b==0&&c==0) {
	printf("Phuong trinh vo so nghiem!");}
	else
	{
	dt=b*b-4*a*c;
	if (dt<0) printf("Phuong trinh vo nghiem!");
	else if (dt=0) printf("Phuong trinh co nghiem kep la: %f",-(c/a));
	else if (dt>0)
	{ printf("Phuong trinh co 2 nghiem phan biet!\n");
	printf("Nghiem 1 la: %f\n",(-b+sqrt(dt))/2*a);
	printf("Nghiem 2 la: %f\n",(-b-sqrt(dt))/2*a);
	}	
}
}
