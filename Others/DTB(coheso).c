#include <stdio.h>
void main()
{
	float T,L,H,TB;
	printf("Nhap diem Toan ");
	scanf("%f",&T);
	printf("Nhap diem Ly ");
	scanf("%f",&L);
	printf("Nhap diem Hoa ");
	scanf("%f",&H);
	printf("_______________\n");
	
	TB=(2*T+L+H)/4;
	printf("DTB la: %f",TB);
}
