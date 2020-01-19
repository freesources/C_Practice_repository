#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
typedef struct nut *lket;		
struct nut {		
	int gtri;									
	struct nut *ktiep;	
};

lket taoNutDon(int k) {
	lket tam;
	tam = (lket) malloc (sizeof(struct nut));
	if (!tam) {
		printf("Cap phat nut Don that bai!");
		exit(0);
	}
	tam->gtri = k;
	tam->ktiep = NULL;
	return tam;
}

lket taoNutDau(lket *dau, lket *cuoi, int k) {
	lket tam = taoNutDon(k);
	if(!(*dau))
		*dau = *cuoi = tam;
	else {
		tam->ktiep = *dau;
		*dau = tam;
	}
	return tam;
}

lket taoNutCuoi(lket *dau, lket *cuoi, int k) {
	lket tam = taoNutDon(k);
	if(!*dau)
		*dau = *cuoi = tam;
	else {
		(*cuoi)->ktiep = tam;
		*cuoi = tam;
	}
	return tam;
}

void chenNutSau(lket nutmoc, int k) {
	lket tam = taoNutDon(k);
	tam->ktiep = nutmoc->ktiep;
	nutmoc->ktiep = tam;
}

void chenNutTruoc(lket dau, lket nutmoc, int k) {
	lket tam = taoNutDon;
	lket q;
	q = dau;
	while (q != NULL && q->ktiep != tam)	q = q->ktiep;
	q->ktiep = tam;
	tam->ktiep = nutmoc;
}

void xoaNutGiua(lket dau, lket *bo) {
	lket q = dau;
	while (q != NULL && q->ktiep != *bo)		q = q->ktiep;
	q->ktiep = (*bo)->ktiep;
	(*bo)->ktiep = NULL;
	free(bo);
}
void xoaNutDau(lket *dau) {
	lket p = *dau;
	*dau = p->ktiep;
	p->ktiep = NULL;
	free(p);
}

void xoaNutCuoi(lket dau, lket *cuoi) {
	lket p = dau, q = *cuoi;
	while (p != NULL && p->ktiep != *cuoi)		p = p->ktiep;
	p->ktiep = NULL;
	*cuoi = p;
	free(q);
}

void xuatdanhsach(lket lkd) {
	lket tam;
	if(!lkd)
		printf("\nDanh sach rong!");
	else
		for(tam = lkd; tam; tam = tam->ktiep)
		printf("%d\t",tam->gtri);
}
