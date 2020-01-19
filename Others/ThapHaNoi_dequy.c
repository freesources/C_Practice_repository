#include <stdio.h>
#include <math.h>
#include <conio.h>

int tong(int a[], int n)
{
	if(n<=0) return 0;
	return  a[n-1]+tong(a,n-1);
}

int giaithua(int n)
{
	if(n<=0) return 1;
	return n*giaithua(n-1);
}

double tongeuler(int n, int k)
{
	if(n<=0||k<1) return 0;
	return 1./pow(n,k)+tongeuler(n-1,k);
}

int UCLN2S(int a, int b)
{
	if(a==b) return a;
	else
		if (a>b) return UCLN2S(a-b,b);
		else return UCLN2S(a,b-a);
}

int UCLNC2(int a, int b)
{
	if(a*b==0) return a+b;
	else
		if (a>b) return UCLNC2(a%b,b);
		else return UCLNC2(a,b%a);
}

int reserve(int n)
{
	if (n==0) printf("");
	else if (n!=0) {printf("%d",n%10);
    reserve(n/10);}
}



void main()
{
	int n,k,i, choice,kq;
	float kq1;
	int a[50];
	printf(" ===================================== \n");
	printf("||	Nhap vao lua chon:           ||\n");
	printf("||	1. Tinh tong mang.           ||\n");
	printf("||	2. Tinh giai thua.           ||\n");
	printf("||	3. Tinh tong Euler.          ||\n");
	printf("||	4. Tim UCLN 2 so. (code 1)   ||\n");
	printf("||	5. Tim UCLN 2 so. (code 2)   ||\n");
	printf("||	6. Viet nguoc chuoi so.      ||\n");
	printf("||	                             ||\n");
	printf("|| Bam Ctrl+C de thoat chuc nang     ||\n");
	printf(" ===================================== \n");
	scanf("%d",&choice);
	while (choice>6){printf("Nhap sai! Yeu cau nhap lai.");
	scanf("%d",&choice);}
	
	while (choice<7)
{
	switch(choice)
	{
	case 1:
			printf("Nhap vao so phan tu mang: "); scanf("%d",&n);
			for (i=0;i<n;i++) 
			{
        		printf("Nhap a[%d]= ",i);
        		scanf("%d",&a[i]);
    		}
			kq=tong(a,n);
			printf("\nKet qua tong mang la: %d\n\n",kq);
			break;
	case 2:
			printf("Nhap vao n! can tinh: "); scanf("%d",&n);
			kq=giaithua(n);
			printf("\nKet qua giai thua la: %d\n\n",kq);
			break;
	case 3:
			printf("Nhap vao n va k cua Tong Euler: "); scanf("%d\n%d",&n,&k);
			kq1=tongeuler(n,k);
			printf("\nKet qua tinh Tong Euler la: %f\n\n",kq1);
			break;
	case 4:
			printf("Nhap vao 2 so a va b: "); scanf("%d\n%d",&n,&k);
			kq=UCLN2S(n,k);
			printf("UCLN 2 so la: %d\n\n",kq);
			break;
	case 5:
			printf("Nhap vao 2 so a va b: "); scanf("%d\n%d",&n,&k);
			kq=UCLNC2(n,k);
			printf("UCLN 2 so la: %d\n\n",kq);
			break;
	case 6:
			printf("Nhap vao chuoi so can viet nguoc: "); scanf("%d",&n);
			printf("Chuoi sau khi viet nguoc la: ");
			reserve(n);
			printf("\n\n");
			break;
	}
	printf(" ===================================== \n");
	printf("||	Nhap lai lua chon:           ||\n");
	printf("||	1. Tinh tong mang.           ||\n");
	printf("||	2. Tinh giai thua.           ||\n");
	printf("||	3. Tinh tong Euler.          ||\n");
	printf("||	4. Tim UCLN 2 so. (code 1)   ||\n");
	printf("||	5. Tim UCLN 2 so. (code 2)   ||\n");
	printf("||	6. Viet nguoc chuoi so.      ||\n");
	printf("||	                             ||\n");
	printf("|| Bam Ctrl+C de thoat chuc nang     ||\n");
	printf(" ===================================== \n");
	scanf("%d",&choice);
	while (choice>6){printf("Nhap sai! Yeu cau nhap lai.");
	scanf("%d",&choice);}
}
}
