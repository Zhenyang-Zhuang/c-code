#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>

typedef struct SSTable
{
	int* data;
	int TalbleLen;
}SSTable;


typedef struct BSTNode
{
	int data;
	struct BSTNode* lchild;
	struct BSTNode* rchild;
}BSTNode,*BSTree;


//int Binary_Search(int* data, int left, int right, int k)
//{
//	int mid = (left + right) / 2;
//	if (left > right)
//		return -1;
//	if (data[mid] == k)
//		return mid;
//	else if (data[mid] > k)
//		return Binary_Search(data, left, mid - 1, k);
//	else
//		return Binary_Search(data, mid + 1, right, k);
//}
//
//
//int main()
//{
//	SSTable ST = { 0 };
//	ST.TalbleLen = 10;
//	ST.data = (int*)malloc(sizeof(int) * (ST.TalbleLen + 1));
//	int i = 0;
//	int x = 0;
//	int k = 11;
//	
//	for (i = 1; i <= ST.TalbleLen; i++)
//	{
//		scanf("%d", &x);
//		ST.data[i] = x;
//	}
//	int ret = Binary_Search(ST.data, 1, ST.TalbleLen, k);
//	printf("%d\n", ret);
//	return 0;
//}



BSTNode* BST_Search(BSTree T, int key)
{
	while (T != NULL && T->data != key)
	{
		if (T->data < key)
			T = T->rchild;
		else
			T = T->lchild;
	}
	return T;
}




//int BST_Insert(BSTree* T, int key)
//{
//	if (*T == NULL)
//	{
//		*T = (BSTree)malloc(sizeof(BSTNode));
//		(*T)->data = key;
//		(*T)->lchild = NULL;
//		(*T)->rchild = NULL;
//		return 1;
//	}
//	else if ((*T)->data == key)
//		return 0;
//	else if ((*T)->data < key)
//		return BST_Insert(&((*T)->rchild), key);
//	else
//		return BST_Insert(&((*T)->lchild), key);
//}



int BST_Insert(BSTree* T, int key)
{
	BSTNode* p = *T;
	BSTNode* q = NULL;
	while (p != NULL)
	{
		if (p->data == key)
			return 0;
		else if (p->data > key)
		{
			q = p;
			p = p->lchild;
		}
		else
		{
			q = p;
			p = p->rchild;
		}	
	}
	p = (BSTNode*)malloc(sizeof(BSTNode));
	p->data = key;
	p->lchild = NULL;
	p->rchild = NULL;
	if (!q)
		*T = p;
	else if (q->data > key)
		q->lchild = p;
	else
		q->rchild = p;
	return 1;
}


void Creat_BST(BSTree* T, int arr[], int n)
{
	*T = NULL;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		BST_Insert(T, arr[i]);
	}
}

int main()
{
	int arr[6] = { 45,24,53,45,12,24 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BSTree T = NULL;
	Creat_BST(&T, arr, sz);
	int x = 0;
	return 0;
}