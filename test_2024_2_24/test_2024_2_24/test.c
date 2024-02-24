#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define MAXSIZE 50

typedef struct SqStack
{
	BiTNode* data[MAXSIZE];
	int top;
}SqStack;


typedef struct SqQueue
{
	BiTNode* data[MAXSIZE];
	int front;
	int rear;
}SqQueue;


typedef struct BiTNode
{
	int data;
	struct BiTNode* lchild;
	struct BiTNode* rchild;
}BiTNode,*BiTree;


void PostOrder(BiTree T,SqStack* S)
{
	InitStack(S);
	BiTNode* p = T;
	BiTNode* r = NULL;
	while (p != NULL || !IsEmpty(S))
	{
		if (p != NULL)
		{
			push(S, p);
			p = p->lchild;
		}
		else
		{
			GetTop(S, &p);
			if (p->rchild != NULL && p->rchild != r)
			{
				p = p->rchild;
			}
			else
			{
				pop(S, &p);
				visit(p->data);
				r = p;
				p = NULL;
			}
		}
	}
}


void InvertLevel(BiTree T, SqQueue* Q,SqStack* S)
{
	InitQueue(Q);
	InitStack(S);
	BiTNode* p = T;
	if (p != NULL)
	{
		EnQueue(Q, p);
	}
	while (!IsEmpty(Q))
	{
		DeQueue(Q, &p);
		push(S, p);
		if (p->lchild != NULL)
		{
			EnQueue(Q, p->lchild);
		}
		if (p->rchild != NULL)
		{
			EnQueue(Q, p->rchild);
		}
	}
	while (!IsEmpty(S))
	{
		pop(S, &p);
		visit(p->data);
	}
}



int main()
{

	return 0;
}