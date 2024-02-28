#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>


typedef struct BiTNode
{
	int data;
	struct BiTNode* lchild;
	struct BiTNode* rchild;
}BiTNode,*BiTree;


typedef struct ThreadNode
{
	int data;
	struct ThreadNode* lchild;
	struct ThreadNode* rchild;
	int ltag;
	int rtag;
}ThreadNode,*ThreadTree;


ThreadNode* FirstNode(ThreadNode* r)
{
	while (r->lchild == 0)
		r = r->lchild;
	return r;
}


ThreadNode* NextNode(ThreadNode* p)
{
	if (p->rtag == 1)
		return p->rchild;
	else
		return FirstNode(p->rchild);
}


ThreadTree InPostPre(ThreadTree T, ThreadTree p)
{
	ThreadNode* r = NULL;
	if (p->rtag == 0)
		r = p->rchild;
	else if (p->ltag == 0)
		r = p->lchild;
	else if (p->lchild == NULL)
		r = NULL;
	else
	{
		while (p->ltag == 1 && p->lchild != NULL)
			p = p->lchild;
		if (p->ltag == 0)
			r = p->lchild;
		else
			r = NULL;
	}
	return r;
}



//BiTree head = NULL;
//BiTree pre = NULL;
//
//BiTree InOrder(BiTree T)
//{
//	BiTree bt = T;
//	if (bt)
//	{
//		InOrder(bt->lchild);
//		if (bt->lchild && bt->rchild)
//		{
//			if (pre)
//			{
//				head = bt;
//				pre = head;
//			}
//			else
//			{
//				pre->rchild = bt;
//				pre = bt;
//			}s
//		}
//		InOrder(bt->rchild);
//	}
//	pre->rchild = NULL;
//	return head;
//}

flag = 0;

int similar(BiTree T1, BiTree T2)
{
	int leftS = 0;
	int rightS = 0;
	if (T1 == NULL && T2 == NULL)
		return 1;
	else if (T1 == NULL || T2 == NULL)
		return 0;
	else
	{
		leftS = similar(T1->lchild, T2->lchild);
		rightS = similar(T1->rchild, T2->rchild);
		return leftS && rightS;
	}
}


int main()
{

	return 0;
}