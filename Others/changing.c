#include<stdio.h>  

void main()  
{  
	char a[1000];
	int n,i,l,t;
	char A[]="A", B[]="B", C[]="C", D[]="D", E[]="E", F[]="F";
	
	while (1==1)	{	
	printf("\n\nNhap vao so thap phan: ");  scanf("%d",&n);  
	printf("\n Cho bien loai muon chuyen doi?\n");
	printf("1. Nhi phan\n");
	printf("2. Bat phan\n");
	printf("3. Thap luc phan\n");
	printf("Lua chon: ",l); scanf("%d",&l);
	if (l==1) 	t=2;
	else if (l==2)	t=8;
	else t=16;
	
for(i=0;n>0;i++)  
{  
a[i]=(n%t);  
n=(n/t);
}  

printf("\nDang so cua no la: ");  

for(i=i-1;i>=0;i--)
{  
	if (t==16)
	{
		if (a[i]==10)
		printf("%s",A);
		else if (a[i]==11)
		printf("%s",B);
		else if (a[i]==12)
		printf("%s",C);
		else if (a[i]==13)
		printf("%s",D);
		else if (a[i]==14)
		printf("%s",E);
		else if (a[i]==15)
		printf("%s",F);
		else
		printf("%d",a[i]);
	}
	else
		printf("%d",a[i]);
}  
}
}
