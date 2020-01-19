#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

//BTVN, cai dat cac ma nguon sau: 

//void xuatDanhSach:
void xuatDanhSach(lket dau) 
{
	lket tam;
	if(!lkd)
		printf("\nDanh sach trong!");
	else
		for(tam=lkd;tam;tam=tam->ktiep)
		printf("%d\n",tam->gtri);
}

//void chenNutSau:
void chenNutSau(lket nutmoc, int k) 
{
	lket tam=taoNutDon(k);
	tam->ktiep=nutmoc->ktiep;
	nutmoc->ktiep=tam;
}

//void chenNutTruoc:
void chenNutTruoc(lket dau, lket nutmoc, int k) 
{
	lket tam = taoNutDon;
	lket q;
	q=dau;
	while(q!=NULL&&q->ktiep!= tam)	
	q=q->ktiep;
	q->ktiep=tam;
	tam->ktiep=nutmoc;
}

//void xoaNutGiua:
void xoaNutGiua(lket dau, lket *bo) 
{
	lket q=dau;
	while(q!=NULL&&q->ktiep!=*bo)		
	q=q->ktiep;
	q->ktiep=(*bo)->ktiep;
	(*bo)->ktiep=NULL;
	free(bo);
}

//void xoaNutDau:
void xoaNutDau(lket *dau) 
{
	lket p=*dau;
	*dau=p->ktiep;
	p->ktiep=NULL;
	free(p);
}

//void xoaNutCuoi:
void xoaNutCuoi(lket dau, lket *cuoi) 
{
	lket p=dau, q=*cuoi;
	while (p!=NULL&&p->ktiep!=*cuoi)		
	p=p->ktiep;
	p->ktiep=NULL;
	*cuoi=p;
	free(q);
}

