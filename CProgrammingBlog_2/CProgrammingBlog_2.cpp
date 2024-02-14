//#include <stdio.h>
//
//int main()
//{
//	int n = 10;
//	n = 11;
//	printf("%d\n", n);
//}

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
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = 0;
//	p = (int*)malloc(sizeof(int));
//	*p = 10;
//	printf("p : %d", *p);
//	free(p);
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
//}

//#include <stdio.h>
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int sub(int a, int b)
//{
//	return a - b;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int (*pf)(int a, int b);
//
//	pf = add;
//	printf("result : %d\n", pf(a, b));
//	pf = sub;
//	printf("result : %d\n", pf(a, b));
//}

//#include <stdio.h>
//
//int findKey(int arr[], int count, bool (*checkKey)(int data))
//{
//	for (int i = 0; i < count; i++)
//	{
//		if (checkKey(arr[i]))
//			return i;
//	}
//	return -1;
//}
//
//bool checkKey(int data)
//{
//	return data > 5 && data % 2 == 0;
//}
//
//int main()
//{
//	int arr[5] = { 1, 2, 3, 10, 5 };
//	int key = findKey(arr, 5, checkKey);
//	if (key != - 1)
//		printf("arr[%d] : %d", key, arr[key]);
//}