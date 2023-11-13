#define _CRT_SECURE_NO_WARNINGS 1
#define MAX_SIZE 10
#define INIT_SIZE 10
#include <stdio.h>
#include <stdlib.h>

////typedef struct SqList
////{
////	int data[MAX_SIZE];
////	int length;
////}SqList;
//
//
//
//void InitList(SqList* L)
//{
//	for (int i = 0; i < MAX_SIZE; i++)
//	{
//		L->data[i] = 0;
//	}
//	L->length = 0;
//}
//
//
//
//int main()
//{
//	SqList L = { 0 };
//	InitList(&L);
//	return 0;
//}




//typedef struct SeqList
//{
//	int* data;
//	int MaxSize;
//	int length;
//}SeqList;
//
//
//
//void InitList(SeqList* L)
//{
//	int* p = (int*)malloc(L->MaxSize * sizeof(int));
//	if (p == NULL)
//	{
//		return;
//	}
//	L->data = p;
//	L->MaxSize = INIT_SIZE;
//	L->length = 0;
//}
//
//
//void IncreaseSize(SeqList* L, int len)
//{
//	int* pp = (int*)realloc(L->data, (L->MaxSize + len) * sizeof(int));
//	if (pp == NULL)
//	{
//		return;
//	}
//	L->data = pp;
//	free(L->data);
//	L->data = NULL;
//}
//
//
//
//
//int main()
//{
//	SeqList L = { 0 };
//	InitList(&L);
//	IncreaseSize(&L, 5);
//}



//typedef struct complex
//{
//	float realpart;
//	float imagpart;
//}complex;
//
//
//
//void assign(complex* p, float real, float imag)
//{
//	p->realpart = real;
//	p->imagpart = imag;
//}
//
//void add(complex* p, complex* p1,complex* p2)
//{
//	p->realpart = p1->realpart + p2->realpart;
//	p->imagpart = p1->imagpart + p2->imagpart;
//}
//
//
//void multiply(complex* p, complex* p1, complex* p2)
//{
//	p->realpart = p1->realpart * p2->realpart - p1->imagpart * p2->imagpart;
//	p->imagpart = p1->realpart * p2->imagpart + p1->imagpart * p2->realpart;
//}
//
//
//int main()
//{
//	complex z1, z2, z3, z4, z;
//	assign(&z1, 8.0, 6.0);
//	assign(&z2, 4.0, 3.0);
//	add(&z3, &z1, &z2);
//	multiply(&z4, &z1, &z2);
//
//	return 0;
//}