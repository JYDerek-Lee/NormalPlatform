#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int input = 100;
	FILE *fp2 = fopen("test2.txt", "r"); // a, r

	fscanf(fp2, "%d", &input);

	printf("%d", input);

	//fclose(fp2);

	system("test2.txt");
}