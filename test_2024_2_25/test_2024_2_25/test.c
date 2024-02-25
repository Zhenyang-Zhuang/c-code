#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>

#define MAXSIZE 50
typedef struct BiTNode
{
	int data;
	struct BiTNode* lchild;
	struct BiTNode* rchild;
}BiTNode, * BiTree;


typedef struct SqQueue
{
	BiTNode* data[MAXSIZE];
	int front;
	int rear;
}SqQueue;






int Btdepth(BiTree T)
{
	if (T == NULL)
		return 0;
	BiTree Q[50] = { 0 };
	int level = 0;
	int last = 0;
	int front = -1;
	int rear = -1;
	BiTree p = T;
	Q[++rear] = p;
	while (front < rear)
	{
		p = Q[++front];
		if (p->lchild)
			Q[++rear] = p->lchild;
		if (p->rchild)
			Q[++rear] = p->rchild;
		if (front == last)
		{
			level++;
			last = rear;
		}	
	}
	return level;
}


int Btdepth2(BiTree T)
{
	if (T = NULL)
		return 0;
	int ldep = Btdepth2(T->lchild);
	int rdep = Btdepth2(T->rchild);
	if (ldep > rdep)
		return ldep + 1;
	else
		return rdep + 1;
}



bool IsComplete(BiTree T, SqQueue* Q)
{
	if (!T)
		return true;
	InitQueue(Q);
	BiTree p = T;
	EnQueue(Q, p);
	while (!IsEmpty(Q))
	{
		DeQueue(Q, &p);
		if (p)
		{
			EnQueue(Q, p->lchild);
			EnQueue(Q, p->rchild);
		}
		else
		{
			while (!IsEmpty(Q))
			{
				DeQueue(Q, &p);
				if (p)
					return false;
			}
		}
	}
	return true;
}


int DsonNodes(BiTree T)
{
	if (T == NULL)
		return 0;
	else if (T->lchild != NULL && T->rchild != NULL)
		return 1 + DsonNodes(T->lchild) + DsonNodes(T->rchild);
	else
		return DsonNodes(T->lchild) + DsonNodes(T->rchild);
}


void Swap(BiTree T)
{
	if (T == NULL)
		return;
	Swap(T->lchild);
	Swap(T->rchild);
	BiTree p = T->lchild;
	T->lchild = T->rchild;
	T->rchild = p;
}


BiTree Search(BiTree T,int k)
{
	static count = 1;
	if (T == NULL)
		return NULL;
	if (count == k)
		return T;
	count++;
	BiTree p = Search(T->lchild, k);
	if (p != NULL)
		return p;
	p = Search(T->rchild, k);
	return p;

}


int main()
{
	return 0;
}