//#include <stdio.h>
//
//void newNumber(int p)
//{
//	p = 11;
//}
//
//void printNumber(int n)
//{
//	printf("%d\n", n);
//}
//
//int main()
//{
//	int n = 10;
//	newNumber(n);
//	printNumber(n);
//
//	//int n = 10;
//	//n = 11;
//	//printf("%d\n", n);
//}

//#include <stdio.h>
//
//void newNumber(int* p)
//{
//	*p = 11;
//}
//
//void printNumber(int n)
//{
//	printf("%d\n", n);
//}
//
//int main()
//{
//	int n = 10;
//	newNumber(&n);
//	printNumber(n);
//
//	//int n = 10;
//	//n = 11;
//	//printf("%d\n", n);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void allocint(int* p1)
//{
//	p1 = (int*)malloc(sizeof(int));
//}
//
//void setint(int* p2, int data)
//{
//	*p2 = data;
//}
//
//void printint(int* p3)
//{
//	printf("p : %d\n", *p3);
//}
//
//void freeint(int* p4)
//{
//	free(p4);
//}
//
//int main()
//{
//	int* p = 0;
//
//	allocint(p);
//	setint(p, 10);
//	printint(p);
//	freeint(p);
//
//	//int* p = 0;
//	//p = (int*)malloc(sizeof(int));
//	//*p = 10;
//	//printf("p : %d", *p);
//	//free(p);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void allocint(int** p1)
//{
//	*p1 = (int*)malloc(sizeof(int));
//}
//
//void setint(int* p2, int data)
//{
//	*p2 = data;
//}
//
//void printint(int* p3)
//{
//	printf("p : %d\n", *p3);
//}
//
//void freeint(int* p4)
//{
//	free(p4);
//}
//
//int main()
//{
//	int* p = 0;
//
//	allocint(&p);
//	setint(p, 10);
//	printint(p);
//	freeint(p);
//
//	//int* p = 0;
//	//p = (int*)malloc(sizeof(int));
//	//*p = 10;
//	//printf("p : %d", *p);
//	//free(p);
//}

