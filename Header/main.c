#include "L.h"

void main() {
	void *fp = calloc(1, sizeof(int));
	int *fp2 = calloc(1, sizeof(int));
	int k = 2;

	fp = &k;
	fp2 = fp;
	fprintf(stderr, "%d\n", *fp2);
	//FP("%d\n", *fp);
	I(i);
	FP("나는 %d입니다.\n", i);
}