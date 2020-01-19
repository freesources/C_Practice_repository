#include <stdio.h>
#include <string.h>

void kktctro(char *src);
void main()
{	char ckt[]="Nguy en- @@@@@@@@@++++++++@@@@@@++++---@@@@@@----Va +n -@@@@@@ABC";
	kktctro(ckt);
	puts(ckt);
}
								
void kktctro(char *src)					  
{										  
	char *ctr;							  
	while (ctr=strchr(src,'@'))
	strcpy(ctr,ctr+1);
	while (ctr=strchr(src,'+'))
	strcpy(ctr,ctr+1);
	while (ctr=strchr(src,'-'))
	strcpy(ctr,ctr+1);
	while (ctr=strchr(src,' '))
	strcpy(ctr,ctr+1);
}

