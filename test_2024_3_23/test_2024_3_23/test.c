#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>


#define MAXNUM 50;

typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode,*LinkList;



LinkList ListTailInsert(LinkList* L)
{
	*L = (LinkList)malloc(sizeof(LNode));
	int x = 0;
	LNode* s = NULL;
	LNode* r = *L;
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		r->next = s;
		r = s;
		scanf("%d", &x);
	}
	r->next = NULL;
	return *L;
}

//void SelectSort(LinkList L, int len)
//{
//	int i = 0;
//	LNode* p = L->next;
//	for (i = 0; i < len - 1; i++)
//	{
//		LNode* min = p;
//		LNode* r = p->next;
//		while (r != NULL)
//		{
//			if (r->data < min->data)
//			{
//				min = r;
//			}
//			r = r->next;
//		}
//		if (min != p)
//		{
//			int tmp = min->data;
//			min->data = p->data;
//			p->data = tmp;
//		}
//		p = p->next;
//	}
//}


void SelectSort(LinkList L)
{
	LNode* h = L->next;
	while (h != NULL)
	{
		LNode* p = h;
		LNode* max = h;
		LNode* q = NULL;
		LNode* r = NULL;
		while (p != NULL)
		{
			if (p->data > max->data)
			{
				max = p;
				r = q;
			}
			q = p;
			p = p->next;
		}
		if (max == h)
		{
			h = h->next;
		}
		else
		{
			r->next = max->next;
		}
		max->next = L->next;
		L->next = max;
	}
}



int JudgeMinHeap(int arr[], int len)
{
	int i = 0;
	if (len % 2 == 0)
	{
		if (arr[len / 2] > arr[len])
		{
			return 0;
		}
		for (i = len / 2 - 1; i > 0; i--)
		{
			if (arr[i] > arr[2 * i] || arr[i] > arr[2 * i + 1])
			{
				return 0;
			}
		}
	}
	else
	{
		for (i = len / 2; i > 1; i--)
		{
			if (arr[i] > arr[2 * i] || arr[i] > arr[2 * i + 1])
			{
				return 0;
			}
		}
	}
	return 1;

}



void Merge(int A[], int B[], int low, int mid, int high)
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (k = low; k <= high; k++)
	{
		B[k] = A[k];
	}
	for (i = low, j = mid + 1, k = low; i <= mid && j <= high; k++)
	{
		if (B[i] <= B[j])
		{
			A[k] = B[i++];
		}
		else
		{
			A[k] = B[j++];
		}
	}
	while (i <= mid)
	{
		A[k++] = B[i++];
	}
	while (j <= high)
	{
		A[k++] = B[j++];
	}
}


void MergeSort(int A[], int B[], int low, int high)
{
	if (low < high)
	{
		int mid = (low + high) / 2;
		MergeSort(A, B, low, mid);
		MergeSort(A, B, mid + 1, high);
		Merge(A, B, low, mid, high);
	}
}



int main()
{
	int A[] = { 1,4,3,7,6,9,2,5,8,0 };
	int sz = sizeof(A) / sizeof(A[0]);
	int* B = (int*)malloc(sz * sizeof(int));
	MergeSort(A, B, 0, sz - 1);
	free(B);
	B = NULL;
	return 0;
}


//int main()
//{
//	LinkList L = NULL;
//	ListTailInsert(&L);
//	SelectSort(L);
//	return 0;
//}