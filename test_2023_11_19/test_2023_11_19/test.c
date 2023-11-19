#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//��������
typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode,*LinkList;


//����ͷ�巨����������
LinkList List_HeadInsert(LinkList* L)
{
	LNode* s = NULL;
	int x = 0;
	*L = (LinkList)malloc(sizeof(LNode));
	(*L)->next = NULL;
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		s->next = (*L)->next;
		(*L)->next = s;
		scanf("%d", &x);
	}
	return *L;
}



//����β�巨����������
LinkList List_TailInsert(LinkList* L)
{
	int x = 0;
	LNode* s = NULL;
	*L = (LinkList)malloc(sizeof(LNode));
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


//����Ų��ҽ��
LNode* GetElem(LinkList L, int i)
{
	int j = 1;
	if (i < 1)
	{
		return NULL;
	}
	LNode* p = L->next;
	while (p != NULL && j < i)
	{
		p = p->next;
		j++;
	}
	return p;
}



//��ֵ���ҽ��
LNode* LocateElem(LinkList L, int e)
{
	LNode* p = L->next;
	while (p != NULL && p->data != e)
	{
		p = p->next;
	}
	return p;
}



//���������
void ListInsert(LinkList L, int i, int e)
{
	LNode* s = (LNode*)malloc(sizeof(LNode));
	s->data = e;
	LNode* p = GetElem(L, i - 1, e);
	s->next = p->next;
	p->next = s;
}

//ɾ��������
void ListDelete(LinkList L, int i)
{
	LNode* p = GetElem(L, i - 1);
	LNode* q = p->next;
	p->next = q->next;
	free(q);
	q = NULL;
}


//�������
int ListLength(LinkList L)
{
	int count = 0;
	LNode* p = L->next;
	while (p != NULL)
	{
		p = p->next;
		count++;
	}
	return count;
}



//�����ϲ���������ʵ��
void Merge(LinkList A, LinkList B)
{
	LNode* a = A->next;
	LNode* b = B->next;
	LNode* c = A;
	while (a && b)
	{
		if (a->data <= b->data)
		{
			c->next = a;
			c = a;
			a = a->next;
		}
		else
		{
			c->next = b;
			c = b;
			b = b->next;
		}
	}
	/*if (!a)
		c->next = b;
	else
		c->next = a;*/
	c->next = a ? a : b;
	free(B);
	B = NULL;
}


int main()
{
	LinkList L = NULL;
	/*List_HeadInsert(&L);*/
	List_TailInsert(&L);
	/*LNode* p = GetElem(L, 2);*/
	/*printf("%d\n", p->data);*/
	/*LNode* p = LocateElem(L, 888);*/
	/*printf("%d\n", p->data);*/
	/*ListInsert(L, 3, 10);*/
	/*ListDelete(L, 3);
	LNode* p = GetElem(L, 3);
	printf("%d\n", p->data);*/
	int ret = ListLength(L);
	printf("%d\n", ret);

}

