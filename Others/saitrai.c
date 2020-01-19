#include <stdio.h>

	
	
typedef struct 
	{
	unsigned short ngay,thang;
	int nam;
	} ngaytn;
	
void khoiganntn(ngaytn *ntn)
	{
	ntn->ngay=ntn->thang=0;
	ntn->nam=0;
	}

typedef struct
	{
	char *hoten;
	unsigned short stt;
	int mssv;
	ngaytn ngaysinh, ngaynh, ngaytn;
	unsigned short tcdk, tctl;
	float dtb_tp, dtb_tl;
	} sinhvien;

void NhapSV(sinhvien *sv)
{
	
	fflush(stdin);
	printf("Ho ten SV: "); fgets(sv->hoten,20,stdin);
	
	printf("STT: "); 							scanf("%d",&sv->stt);
	printf("MSSV: ");							scanf("%d",&sv->mssv);
	printf("Nhap ngay/thang/nam sinh: "); 		scanf("%d %d %d",&sv->ngaysinh.ngay,&sv->ngaysinh.thang,&sv->ngaysinh.nam);
	printf("Ngay nhap hoc: "); 					scanf("%d %d %d",&sv->ngaynh.ngay,&sv->ngaynh.thang,&sv->ngaynh.nam);
	printf("Ngay tot nghiep du kien: "); 		scanf("%d %d %d",&sv->ngaytn.ngay,&sv->ngaytn.thang,&sv->ngaytn.nam);
	printf("So tin chi dang ky: ");				scanf("%d",&sv->tcdk);
	printf("So tin chi tich luy: ");			scanf("%d",&sv->tctl);
	printf("DTB tong ket: ");					scanf("%f",&sv->dtb_tp);
	printf("DTB tich luy: ");					scanf("%f",&sv->dtb_tl);
}
	
void XuatSV(sinhvien sv)
{
	fflush(stdin);
	printf("1. STT: %d\n",sv.stt);
	printf("2. Ho va ten SV: %s  ",sv.hoten); 	printf("MSSV: %d",sv.mssv);
	printf("3. Ngay thang nam sinh: %d/%d/%d\n",sv.ngaysinh.ngay,sv.ngaysinh.thang,sv.ngaysinh.nam);
	printf("4. Ngay nhap hoc: %d/%d/%d  - ",sv.ngaynh.ngay,sv.ngaynh.thang,sv.ngaynh.nam); printf("Ngay tot nghiep du kien: %d/%d/%d\n",sv.ngaytn.ngay,sv.ngaytn.thang,sv.ngaytn.nam);
	printf("5. DTB TP: %f  -",sv.dtb_tp);  printf("DTB TL: %f\n",sv.dtb_tl);
	printf("6. So tin chi dang ky: %d  -",sv.tcdk);   printf("So tin chi tich luy: %d",sv.tctl);
}	

void main()
{
	sinhvien sv[20];
	int N,i,j;
	printf("Nhap so luong Sinh vien: "); scanf("%d",&N);
	
	for (i=0;i<N;i++)
	{
		NhapSV(&sv[i]);
	}
	
	for (j=0;i<N;j++)
		XuatSV(sv[i]);
}
