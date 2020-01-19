#include <stdio.h>
void main() {
	int NUM_LINES=40;
	int i;
	for(i=0;i<256;i++) {
		printf("%c: %d\n",i,i);
		if((i+1) % NUM_LINES == 0) {
			printf("** Nhan phim bat ky de tiep tuc **\n");
			getch();
		}
	}
}
