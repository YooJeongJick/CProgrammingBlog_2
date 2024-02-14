#include <stdio.h>
#include <stdlib.h>

void allocInt(int** p1)
{
	*p1 = (int*)malloc(sizeof(int));
}

void setInt(int* p2, int data)
{
	*p2 = data;
}

void printInt(int* p3)
{
	printf("p : %d", *p3);
}

void freeInt(int* p4)
{
	free(p4);
}
