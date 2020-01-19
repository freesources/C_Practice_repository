#include <stdio.h>

void main()
{
	int key;
	int i,j,n,k,t=1;	
	printf("Nhap so canh tam giac: "); scanf("%d",&n);
	
	printf("Nhap loai muon hien:\n");
	printf("1. Can duoi.\n");
	printf("2. Can tren.\n");
	scanf("%d",&key);
for (i=0;i<n;i++)
{
	switch(key){
		case 1:
			for (j=0;j<i;j++)	printf(" ");
			for (k=0;k<n-i;k++)	printf("%d ",k);
			printf("\n");
			break;
			
			
			
		case 2:
			for (j=0;j<n-i;j++)	printf(" ");
				for (k=1;k<i+2;k++)	printf("%d ",t);
				t++;
				
			printf("\n");
			break;
}
}
}

