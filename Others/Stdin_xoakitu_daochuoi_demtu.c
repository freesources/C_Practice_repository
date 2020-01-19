#include <stdio.h>
#include <string.h>
#include <conio.h>
//CHUOI KI TU

void reserve(char *s, char *o)
{
	int i,n;
	int j=0;
	n=strlen(s);
	for (i=n-1;i>=0;i--)
	{
			o[j]=s[i];
			j++;
	}
	o[j]=0;
}

void xoakitu(char *s)
{
	char xoa;
	char *tam;
	printf("\nNhap vao ki tu can xoa: "); scanf("%c",&xoa); fflush(stdin);
	
	while(tam=strchr(s,xoa))
	strcpy(tam,tam+1);
	
	printf("\nChuoi sau khi xoa ki tu: \n");
}

void demsotu(char *s)
{
	int dem=1;
	int n,i;
	n=strlen(s);
	for (i=0;i<n-1;i++)
	{
		if(s[i]==' ')
		{
			while(s[i]!=' ') i++;
			
			dem+=1;
		}
		
	//	i--;
	}
	printf("Chuoi co %d tu!",dem);
}

void main()
{
	char src[50];
	char kq[50];
	printf("Nhap vao Noi dung chuoi: \n");		// scanf("%s",src);
	fflush(stdin);
	gets(src);
//	fgets(src,50,stdin);
//	reserve(src,kq);
//	printf("\nChuoi sau khi dao nguoc: \n%s",kq);
//	xoakitu(src);
//	puts(src);
	demsotu(src);
}
