#include "head.h"

void main() {
	char tem[2056];
	strcpy(tem,getfile("Yoo.txt","r"));
	
	fprintf(stderr, "%s",tem);
	
}