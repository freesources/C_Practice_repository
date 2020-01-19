#include <stdio.h>
#include <string.h>

void xoakitu(char s[],char x)
{
	int l,j; char c;
 for (l=0;l<=strlen(s);l++)
 {
 	for (j=0;j<=strlen(s);j++) //se xoa duoc han 1 ky tu, vi da duoc gioi han boi strlen(s), khi chuyen vi tri ki tu do ra sau no se tu dich ra khoi mang dang xet
 	if (s[j]==x)
 	{
 		c=s[j];
 		s[j]=s[j+1];
 		s[j+1]=c;
 	}
 }
}

void demtu(char s[], char k, char cong)
{
	int i,j,t; t=1;
	
	for (i=0;i<=strlen(s);i++)
		if (s[i]==k||s[i]==cong)
		{
			for (j=i+1;j<strlen(s);j++)
				{if (s[j]!=k||s[j]!=cong)
				t=t+1;
				break;
				}
				i=j+1;
		}
 	printf("\n\nSo tu xuat hien trong chuoi la: %d",t);
}

void main()
{
 char s[300];
 char t,k,c,x,cong; 		int l, j, i, d, dem, skt;
 cong=43;
 
 printf("Nhap vao 1 chuoi: ");	fgets(s,300,stdin);
 printf("\nNhap vao 1 ky tu muon dem: ");	scanf("%c",&t);
 fflush(stdin);
 printf("\nNhap vao khoang trang: ");	scanf("%c",&k);
 fflush(stdin);
 printf("\nNhap vao ki tu muon xoa khoi chuoi: "); scanf("%c",&x);
 
 dem=0; d=0; 
 
 for(i=0;i<=strlen(s);i++)   
 {
 if(s[i]==t) 
 dem=dem+1;
 if(s[i]==k)
 d+=1;
 }
 
 printf("\n\nSo lan xuat hien ky tu %c la: %d",t,dem);
 printf("\n\nSo lan xuat hien khoang trang la: %d ",d);

 fflush(stdout);
 
 xoakitu(s,x);
 demtu(s,k,cong);
 printf("\n\nKet qua sau khi xoa ki tu: \n%s",s);
 
}
