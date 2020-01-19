#include <stdio.h>
void main()
{
	int i,j,k,h;
	FILE *f1=fopen("TEST.txt","w"); 
	if (f1)
{
	h=10;
	for (i=h;i>0;i--)
	{
		for (j=1;j<i;j++)
			fputs(" ",f1);
		for (k=1;k<=(2*(h-i)+1);k++)
			if ((k==1)||(k==(2*(h-i)+1))||(i==1)) 
				fputs("*",f1);
			else
				fputs(" ",f1);
		fputs("\n",f1);
	}
	fclose(f1);
}
}
