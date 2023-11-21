#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode, *LinkList;




LinkList List_TailInsert_no_head_node(LinkList* L)
{
	*L = (LinkList)malloc(sizeof(LNode));
	(*L)->data = 1;
	LNode* p = *L;
	LNode* s = NULL;
	int x = 0;
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		p->next = s;
		p = s;
		scanf("%d", &x);
	}
	p->next = NULL;
}


void Del_X_3(LinkList* L, int x)
{
	LNode* p = NULL;
	if ((*L)->next == NULL)
	{
		return;
	}
	if ((*L)->data == x)
	{
		p = *L;
		*L = (*L)->next;
		free(p);
		p = NULL;
		Del_X_3(&(*L), x);
	}
	else
	{
		Del_X_3(&((*L)->next), x);
	}
}




//int main()
//{
//	LinkList L = NULL;
//	List_TailInsert_no_head_node(&L);
//	Del_X_3(&L, 3);
//	return 0;
//}



void Del_X(LinkList L, int x)
{
	LNode* p = L;
	LNode* s = p->next;
	LNode* tmp = NULL;
	while (s != NULL)
	{
		if (s->data == x)
		{
			p->next = s->next;
			tmp = s;
			s = s->next;
			free(tmp);
		}
		else
		{
			p = s;
			s = s->next;
		}
	}
	return;
}


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




//int main()
//{
//	LinkList L = NULL;
//	List_TailInsert(&L);
//	Del_X(L, 3);
//	return 0;
//}


void R_print(LinkList L)
{
	if (L->next != NULL)
	{
		R_print(L->next);
	}
	printf("%d ", L->data);
}

void R_Ignore_Head(LinkList L)
{
	if (L->next != NULL)
	{
		R_print(L->next);
	}
}


//int main()
//{
//	LinkList L = NULL;
//	List_TailInsert(&L);
//	R_Ignore_Head(L);
//	return 0;
//}



void Delete_Min(LinkList L)
{
	LNode* pre = L;
	LNode* p = pre->next;
	LNode* minpre = pre;
	LNode* minp = p;
	while (p != NULL)
	{
		if (p->data < minp->data)
		{
			minp = p;
			minpre = pre;
		}
		pre = p;
		p = p->next;
	}
	minpre->next = minp->next;
	free(minp);
}


int main()
{
	LinkList L = NULL;
	List_TailInsert(&L);
	Delete_Min(L);
	return 0;
}





