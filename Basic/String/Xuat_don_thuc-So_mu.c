#include <stdio.h>

void nhap(int *hs1, int *hs2, int *mu1, int *mu2)
{
	printf("Nhap vao he so thu nhat: "); scanf("%d",&(*hs1));
	printf("Nhap vao mu so thu thu nhat: "); scanf("%d",&(*mu1));
	printf("Nhap vao he so thu hai: "); scanf("%d",&(*hs2));
	printf("Nhap vao mu so thu hai: "); scanf("%d",&(*mu2));
}

void xuatdt(int hs, int mu)
{
		if (mu==0)
			printf("%d",hs);
		else
			{
				if (hs==1)
				printf(" ");
				else if (hs==-1)
				printf(" -");
				else printf("%d",hs);
			}
		if (mu==1) printf("x");
		else printf("x^%d",mu);
	
}

void main()
{
int tp, hs1, hs2, mu1, mu2, tam;


nhap(&hs1,&hs2,&mu1,&mu2);

	if (mu1==mu2)
	{
		tam=hs1-hs2;
			if (tam==0)
				printf(" ");
			else
				xuatdt(tam,mu1);
	}
	else
	
	{
		if (hs1==0)
		printf(" ");
		else
		
		{
			if (mu1==0)
			printf("%d",hs1);
			else
			xuatdt(hs1,mu1);
		}
		
		tp=-hs2;
		if (tp>0&&hs1!=0)
		printf(" + ");
		
		if (hs2==0)
		printf(" ");
		else 
		xuatdt((-hs2),mu2);
	}
	}
