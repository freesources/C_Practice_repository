#include <stdio.h>

void main()
{
	int i,j,k,h;
	int key;
	printf("Nhap so canh: ");
	scanf("%d",&h);
	printf("\nChon loai muon xuat: \n");
	printf("1. Can phia tren. \n");
	printf("2. Can phia duoi. \n");
	scanf("%d",&key);
		switch(key)
		{
			case 1:
			for (i=h;i>0;i--)
			{
			for (j=1;j<i;j++)
			printf(" ");
			for (k=1;k<=(2*(h-i)+1);k++)
			if ((k==1)||(k==(2*(h-i)+1))||(i==1)) 
				printf("*");
			else
				printf(" ");
			printf("\n");
			}
			break;
			
			case 2:
			for (i=0;i<h;i++)
			{
			for (j=0;j<i;j++)
			printf(" ");
			for (k=1;k<(2*(h-j));k++)
			if (k==1||(k==(2*(h-j))-1)||(i==0))
				printf("*");
			else
				printf(" ");
			printf("\n");
			}
			break;
	}
}

