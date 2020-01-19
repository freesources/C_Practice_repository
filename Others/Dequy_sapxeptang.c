#include <stdio.h>
#define MAX 100
 
void nhap(int *a[],int n) 
{
    int i;
    for (i=0;i<n;i++) 
	{
        printf("Nhap a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}

void hoanvi(int *a, int *b){
	int tam = *b;
	*a = *b;
	*b = tam;
}

void sapxeptang(int a[], int n)
{
	int tam;
	if (n==1)return;
	else{
		sapxeptang(a,n-1); 
		if (a[n-1]<a[n-2])
		{ 
			tam=a[n-1]; 
			a[n-1]=a[n-2];
			a[n-2]=tam;
		sapxeptang(a,n-1);
		}
	}
}

void xuat(int a[],int n) 
{
    int i;
    for (i=0;i<n;i++) 
	{
        printf("%d \n", a[i]);
    }
}
 
int main() 
{
	int n;
	int a[MAX];
	printf("Nhap vao so phan tu: "); scanf("%d",&n);
    nhap(a,n);
    sapxeptang(a,n);
    xuat(a,n);
}
