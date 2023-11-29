#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAXSIZE 50
#define maxsize 100


typedef struct SqStack
{
	int data[MAXSIZE];
	int top;
}SqStack;



typedef struct LNode
{
	char data;
	struct LNode* next;
}LNode, * LinkList;


LinkList List_TailInsert(LinkList* L)
{
	char x = 0;
	LNode* s = NULL;
	*L = (LinkList)malloc(sizeof(LNode));
	LNode* r = *L;
	scanf("%c", &x);
	while (x != '1')
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		r->next = s;
		r = s;
		getchar();
		scanf("%c", &x);
	}
	r->next = NULL;
	return *L;
}




void InitStack(SqStack* S)
{
	S->top = -1;
}

int Judge(SqStack* S, char arr[])
{
	int i = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] == 'I')
		{
			if (S->top == MAXSIZE - 1)
				return FALSE;
			S->top++;
		}
		else
		{
			if (S->top == -1)
				return FALSE;
			S->top--;
		}
		i++;
	}
	if (S->top == -1)
		return TRUE;
	else
		return FALSE;
}

//int main()
//{
//	char arr[10] = { 0 };
//	scanf("%s", arr);
//	SqStack S = { 0 };
//	InitStack(&S);
//	int ret = Judge(&S,arr);
//	printf("%d\n", ret);
//	return 0;
//}


int Symmetry(LinkList L, int n)
{
	if (n == 1)
		return FALSE;
	int i = 0;
	char c[MAXSIZE] = { 0 };
	LNode* p = L->next;
	for (i = 0; i < n / 2; i++)
	{
		c[i] = p->data;
		p = p->next;
	}
	i--;
	if (n % 2 == 1)
		p = p->next;
	while (p)
	{
		if (p->data != c[i])
			return FALSE;
		else
		{
			p = p->next;
			i--;
		}
	}
	return TRUE;
}



//int main()
//{
//	LinkList L = NULL;
//	int n = 0;
//	scanf("%d", &n);
//	getchar();
//	List_TailInsert(&L);
//	int ret = Symmetry(L, n);
//	if (ret == 1)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}


//int main()
//{
//	LinkList L = NULL;
//	List_TailInsert(&L);
//	return 0;
//}



typedef struct ShareStack
{
	int data[maxsize];
	int top[2];
}ShareStack;


void InitShareStack(ShareStack* S)
{
	S->top[0] = -1;
	S->top[1] = maxsize;
}


int Push(ShareStack* S, int i, int x)
{
	if (i != 1 && i != 0)
		return FALSE;
	if (S->top[1] - S->top[0] == 1)
		return FALSE;
	switch(i)
	{
	case 0:
		S->data[++(S->top[0])] = x;
		break;
	case 1:
		S->data[--(S->top[1])] = x;
		break;
	default:
		break;
	}
	return TRUE;
}


int Pop(ShareStack* S, int i,int* x)
{
	if (i != 0 && i != 1)
		return FALSE;
	switch (i)
	{
	case 0:
		if (S->top[0] == -1)
			return FALSE;
		*x = S->data[(S->top[0])--];
		break;
	case 1:
		if (S->top[1] == maxsize)
			return FALSE;
		*x = S->data[(S->top[1])++];
		break;
	default:
		break;
	}
	return TRUE;
}


int main()
{
	ShareStack S = { 0 };
	InitShareStack(&S);

	return 0;
}