#include <stdio.h>
	
typedef struct 
	{
	unsigned short ngay,thang;
	int nam;
	} ngaytn;
	
//void khoiganntn(ngaytn *ntn)
//	{
//	ntn->ngay=ntn->thang=0;
//	ntn->nam=0;
//	}

typedef struct
	{
	char holot[20], ten[10];
	unsigned short stt;
	int mssv;
	ngaytn ngaysinh, ngaynh, ngaytn;
	unsigned short tcdk, tctl;
	float dtb_tp, dtb_tl;
	} sinhvien;

void NhapSV(sinhvien *sv)
{
	printf("STT: "); 							scanf("%d",&sv->stt);
	fflush(stdin);
	printf("Ho lot: "); 						fgets(sv->holot,20,stdin);
	printf("Ten SV: ");							fgets(sv->ten,10,stdin);
	
//	printf("MSSV: ");							scanf("%d",&sv->mssv);
//	printf("Nhap ngay/thang/nam sinh: "); 		scanf("%d %d %d",&sv->ngaysinh.ngay,&sv->ngaysinh.thang,&sv->ngaysinh.nam);
//	printf("Ngay nhap hoc: "); 					scanf("%d %d %d",&sv->ngaynh.ngay,&sv->ngaynh.thang,&sv->ngaynh.nam);
//	printf("Ngay tot nghiep du kien: "); 		scanf("%d %d %d",&sv->ngaytn.ngay,&sv->ngaytn.thang,&sv->ngaytn.nam);
//	printf("So tin chi dang ky: ");				scanf("%d",&sv->tcdk);
//	printf("So tin chi tich luy: ");			scanf("%d",&sv->tctl);
//	printf("DTB tong ket: ");					scanf("%f",&sv->dtb_tp);
//	printf("DTB tich luy: ");					scanf("%f",&sv->dtb_tl);
}
	
void XuatSV(sinhvien sv)
{
	fflush(stdin);
	printf("\n\n\n1. STT: %d\n",sv.stt);
	printf("2. Ho va ten SV: %s %s\n",sv.holot,sv.ten);		// printf("3. MSSV: %d\n",sv.mssv);
//	printf("3. Ngay thang nam sinh: %d/%d/%d\n",sv.ngaysinh.ngay,sv.ngaysinh.thang,sv.ngaysinh.nam);
//	printf("4. Ngay nhap hoc: %d/%d/%d  - ",sv.ngaynh.ngay,sv.ngaynh.thang,sv.ngaynh.nam); printf("Ngay tot nghiep du kien: %d/%d/%d\n",sv.ngaytn.ngay,sv.ngaytn.thang,sv.ngaytn.nam);
//	printf("5. DTB TP: %f  -",sv.dtb_tp);  printf("DTB TL: %f\n",sv.dtb_tl);
//	printf("6. So tin chi dang ky: %d  -",sv.tcdk);   printf("So tin chi tich luy: %d\n",sv.tctl);
}	

void ThemSV(sinhvien sv[],int *n)
{
	NhapSV(&sv[*n]);
	*n=*n+1;
}

void XoaSV(sinhvien sv[],int *n)
{
	int i,j,k;
	printf("Nhap vao MSSV can xoa: "); scanf("%d",&k);
	for (i=0;i<*n;i++)
	if (k==sv[i].mssv)
		for (j=0;j<*n;j++)
		{
			sv[j]=sv[j+1];
		}
}

void DoiCho(sinhvien *a, sinhvien *b)
{
	sinhvien *tam;
	*a=*tam;
	*tam=*b;
	*b=*a;
}

void SapXepTen(sinhvien sv[],int *n)
{
	int i,j;
	for (i=0;i<*n;i++)
	if (sv[i].ten[0]>sv[i+1].ten[0])
		for (j=0;j<*n;j++)
		{
		DoiCho(&sv[j],&sv[j+1]);
		}
}

void main()
{
	sinhvien sv[20];
	int N,i,j,k;
	printf("Nhap so luong Sinh vien: "); scanf("%d",&N);
	
	
	for (i=0;i<N;i++)
	{
		printf("\n");
		NhapSV(&sv[i]);
	}

	for (j=0;j<N;j++)
	{
		SapXepTen(&sv[j],&N);
	}
	
	for (k=0;k<N;k++)
		XuatSV(sv[k]);
}

