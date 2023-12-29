#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


typedef struct ThreadNode
{
	int data;
	struct ThreadNode* lchild;
	struct ThreadNode* rchild;
	int ltag;
	int rtag;
}ThreadNode,*ThreadTree;


void InThread(ThreadTree p, ThreadTree pre)
{
	if (p != NULL)
	{
		InThread(p->lchild, pre);
		if (p->lchild == NULL)
		{
			p->lchild = pre;
			p->ltag = 1;
		}
		if (pre != NULL && pre->rchild == NULL)
		{
			pre->rchild = p;
			pre->rtag = 1;
		}
		pre = p;
		InThread(p->rchild, pre);
	}
	pre->lchild = NULL;
	pre->rtag = 1;
}




void CreateInThread(ThreadTree T)
{
	ThreadTree pre = NULL;
	if (T != NULL)
	{
		InThread(T, pre);
	}
}



ThreadNode* FirstNode(ThreadNode* p)
{
	while (p->ltag == 0)
	{
		p = p->lchild;
	}
	return p;
}


ThreadNode* NextNode(ThreadNode* p)
{
	if (p->rtag == 0)
		return FirstNode(p->rchild);
	else
		return p->rchild;
}


ThreadNode* LastNode(ThreadNode* p)
{
	while (p->rtag == 0)
	{
		p = p->rchild;
	}
	return p;
}


ThreadNode* PreNode(ThreadNode* p)
{
	if (p->ltag == 0)
		return LastNode(p->lchild);
	else
		return p->lchild;
}

void InThreadOrder(ThreadNode* T)
{
	ThreadNode* p = NULL;
	for (p = FirstNode(T);p != NULL;p = NextNode(p))
	{
		visit(p);
	}
}



int main()
{

	return 0;
}