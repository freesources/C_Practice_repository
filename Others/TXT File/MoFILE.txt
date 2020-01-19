#include <stdio.h>
void main()
{
	char ckt[100];
	FILE *f1=fopen("taptin1.txt","r"); 
	if (f1)
	{
		fgets(ckt,10,f1);
		printf("Day ky tu vua doc la: %s \n",ckt);
		fclose(f1);
	}
}
