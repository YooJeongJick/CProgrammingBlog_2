#include "server.h"


int main()
{
	int* p = 0;

	allocInt(&p);
	setInt(p, 10);
	printInt(p);
	freeInt(p);
}
