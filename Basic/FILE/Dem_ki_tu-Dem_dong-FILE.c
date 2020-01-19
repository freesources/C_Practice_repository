#include <stdio.h>
#include <string.h>

void demdong(FILE* f)
{
	int n,i,dem=1;
	char kt='\n'; char dong[50];
	if (f)
	{
	while(!feof(f))
	{
		if(fgets(dong,50,f)!=NULL)
		{
		n=strlen(dong);	
		for(i=0;i<n;i++)
		{
			if(dong[i]==kt)
				dem++;
		}
		}
	}
	printf("FILE co %d dong!",dem);	
	fclose(f);
}
}

void demkytu(FILE* k)
{
	char kytu[50];
	int n,i,d=0;
		if (k)
{
	while(!feof(k))
	{
		if(fgets(kytu,50,k)!=NULL)
		{
		n=strlen(kytu);
		for(i=0;i<n;i++)
		{
			if(kytu[i]!=' '&&kytu[i]!='\n'&&kytu[i]!='\t')
			{
			//	printf("%c",kytu[i]);
				d++;
			}
		}
		}
	}
	fclose(k);
	printf("FILE co %d ki tu!\n\n",d+1);
}
}

void main()
{		
FILE *f1=fopen("FILETEST.txt","r"); 
if (f1)
demkytu(f1);

FILE *f2=fopen("FILETEST.txt","r"); 
if (f2)
demdong(f2);
}
