#include <stdio.h>  
#include <conio.h>

void main()  
{  
	char A[]="A", B[]="B", C[]="C", D[]="D", E[]="E", F[]="F";
	char t[100];
	int n,i,j;
	n=17;
	
	for (i=0;n>0;i++)
	{
		t[i]=n;
		if (t[i]==10)
		printf("  %s",A);
		else if (t[i]==11)
		printf("  %s",B);
		else if (t[i]==12)
		printf("  %s",C);
		else if (t[i]==13)
		printf("  %s",D);
		else if (t[i]==14)
		printf("  %s",E);
		else if (t[i]==15)
		printf("  %s",F);
		else
		printf("  %d",t[i]);
		n=n-1;
	}
//	
//	for (i=i-1;i>=0;i--)
//	{
//
//	}
	//	printf("n:%s",A);
}
