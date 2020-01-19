#include <stdio.h>

void main()
{
	FILE *f1=fopen("taptin2.txt","w");
	if(f1)	{
				fputc('\t',f1);
				fputs("1\tPhan Thanh Tung",f1);
				fputc('\n',f1);
				fputc('\t',f1);
				fputs("2\tVLTH",f1);
				fclose(f1);
			}
}
