#include <stdio.h>
void main()

{
	float p,t,sl;
	printf("Nhap don gia san pham: ");
	scanf("%f",&p);
	printf("Nhap so luong san pham: ");
	scanf("%f",&sl);
	printf("_______________\n");
	printf("So tien thue la: %f\n",(0.1*sl*p));
	printf("Tong tien phai tra la: %f\n",((0.1*sl*p)+sl*p));
}
