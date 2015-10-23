// J_PACK ========================================================
#ifndef J_PACK
#define J_PACK
#define I(x) int x=0
#define F(x) float x=0;
#define D(x) double x=0;
#define FP(x,y) fprintf(stderr,x,y)
#endif

// J_HEAD ========================================================
#ifndef J_HEAD
#define J_HEAD
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#endif

// J_BUFFER =======================================================
#ifndef J_BUFFER
#define J_BUFFER
typedef struct j_buufer {
	int data;
}Buffer;
#endif

// Noraml ========================================================
void display();