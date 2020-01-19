#include <stdio.h>
#include <conio.h>

int count=0;
void change(int n, char A, char C)
{
	printf("Chuyen dia %d: %c -> %c.\n",n,A,C);
	count++;
}
void process(int n, char A, char B, char C)
{
	if(n>0)
	{
		process(n-1,A,C,B);
		change(n,A,C);
		process(n-1,B,A,C);
	}
}
void main()
{
	int n; printf("Nhap vao so dia ban dau o cot A: "); scanf("%d",&n);
	process(n,'A','B','C');
	printf("\nSo lan chuyen MIN la: %d",count);
	getch();
}
