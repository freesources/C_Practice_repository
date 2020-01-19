#include <stdio.h>

void main()
{
	char kt[100];	int i;
   FILE *bt=fopen("TEST.txt","r");
   FILE *chep=fopen("TEST3.txt","w");
   
   if (bt)
   {
   fgets(kt,100,bt);
   while(!feof(bt))
   {	
	   fputs(kt,chep);
	   fgets(kt,100,bt);
	}
	fclose(chep);
	fclose(bt);
	}
}
