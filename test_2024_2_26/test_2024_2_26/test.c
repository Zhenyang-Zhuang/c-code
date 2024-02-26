#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 50
typedef struct BiTNode
{
	int data;
	int level;
	struct BiTNode* lchild;
	struct BiTNode* rchild;
}BiTNode,*BiTree;


typedef struct SqQueue
{
	BiTree data[MAXSIZE];
	int front;
	int rear;
}SqQueue;


typedef struct SqStack
{
	BiTree data[MAXSIZE];
	int top;
	int tag;
}SqStack;



void DeleteXTree(BiTree T)
{
	DeleteXTree(T->lchild);
	DeleteXTree(T->rchild);
	free(T);
}


void Search(BiTree T, int x,SqQueue* Q)
{
	if (T)
	{
		if (T->data == x)
		{
			DeleteXTree(T);
			return;
		}
	}
	InitQueue(Q);
	EnQueue(Q, T);
	BiTree p = T;
	while (!IsEmpty(Q))
	{
		DeQueue(Q, p);
		if (p->lchild)
		{
			if (p->lchild->data == x)
			{
				DeleteXTree(p->lchild);
				p->lchild == NULL;
			}
			else
			{
				EnQueue(Q, p->lchild);
			}
		}
		if (p->rchild)
		{
			if (p->rchild->data == x)
			{
				DeleteXTree(p->rchild);
				p->rchild == NULL;
			}
			else
			{
				EnQueue(Q, p->rchild);
			}
		}
	}
}




void search(BiTree T, int x,SqStack* S)
{
	InitStack(S);
	BiTree p = T;
	BiTree r = NULL;
	while (p || !IsEmpty(S))
	{
		if (p != NULL && p->data != x)
		{
			push(S, p);
			p = p->lchild;
		}
		else
		{
			if (p != NULL && p->data == x)
			{
				printf("所有祖先的值为：\n");
				while (!IsEmpty(S))
				{
					pop(S, &p);
					printf("%d", p->data);
				}
				return;
			}
			GetTop(S, &p);
			if (p->rchild && p->rchild != r)
				p = p->rchild;
			else
			{
				pop(S, p);
				r = p;
				p = NULL;
			}
		}
	}
}


BiTree ancestor(BiTree root, BiTNode* p, BiTNode* q)
{
	SqStack* S1 = malloc(sizeof(SqStack));
	SqStack* S2 = malloc(sizeof(SqStack));
	InitStack(S1);
	InitStack(S2);
	BiTree bt = root;
	BiTree r = NULL;
	int i = 0;
	int j = 0;
	while (bt != NULL || !IsEmpty(S1))
	{
		while (bt != NULL && bt != p && bt != q)
		{
			push(S1, bt);
			bt = bt->lchild;
		}
		
		if (bt != NULL && bt == p)
		{
				
			for (i = 0; i <= S1->top; i++)
			{
				push(S2, S1->data[i]);
			}
			push(S1, bt);
		}
		if (bt != NULL && bt == q)
		{
			for (i = S1->top; i >= 0; i--)
			{
				for (j = S2->top; j >= 0; j--)
				{
					if (S1->data[i] == S2->data[j])
						return S1->data[i];
				}
			}
		}
		GetTop(S1, bt);
		if (bt->rchild != NULL && bt->rchild != r)
			bt = bt->rchild;
		else
		{
			pop(S1, bt);
			r = bt;
			bt = NULL;
		}
		
	}
}

int BTWidth(BiTree T)
{
	int i = 0;
	int max = 0;
	int front = -1;
	int rear = -1;
	BiTree p = T;
	BiTree Q[MAXSIZE] = { 0 };
	Q[++rear] = p;
	p->level = 1;
	while (front < rear)
	{
		p = Q[++front];
		if (p->lchild)
		{
			Q[++rear] = p->lchild;
			p->lchild->level = p->level + 1;
		}
		if (p->rchild)
		{
			Q[++rear] = p->rchild;
			p->rchild->level = p->level + 1;
		}
	}
	int k = 1;
	while (i <= rear)
	{
		int n = 0;
		while (i <= rear && Q[i]->level == k)
		{
			i++;
			n++;
		}
		k++;
		if (n > max)
		{
			max = n;
		}
	}
	return max;
}


BiTree head = NULL;
BiTree pre = NULL;

void InOrder(BiTree T)
{
	if (T)
	{
		InOrder(T->lchild);
		if (T->lchild && T->rchild)
		{
			if (pre == NULL)
			{
				head = T;
				pre = T;
			}
			else
			{
				pre->rchild = T;
				pre = T;
			}
		}
		InOrder(T->rchild);
	}

}


int main()
{
	return 0;
}


