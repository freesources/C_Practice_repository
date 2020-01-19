#include <stdio.h>
int chieudaickt(char *ckt);
int chieudaickt2(char *ckt);

void main()
{	char *chuoi="Truong DH Khoa hoc Tu nhien";
	int n,m;
	n=chieudaickt(chuoi);
	m=chieudaickt2(chuoi);
	printf("\nDap an cach 1: \"%s\" bao gom %d ky tu!",chuoi,n);
	printf("\n\nDap an cach 2: \"%s\" bao gom %d ky tu!",chuoi,m);
}

int chieudaickt(char *ckt)
{
	int cd=0;
	while (ckt[cd]!='\0')
	cd++;
	return cd;
}

int chieudaickt2(char *ckt)
{
	int cd=0;
	while(*ckt++)
	cd++;
	return cd;
}
