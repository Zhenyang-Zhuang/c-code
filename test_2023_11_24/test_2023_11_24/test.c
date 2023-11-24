#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode, *LinkList;



typedef struct DLNode
{
	int data;
	struct DLNode* next;
	struct DLNode* prior;
}DLNode,*DLinkList;


typedef struct DDLNode
{
	int data;
	int freq;
	struct DDLNode* next;
	struct DDLNode* prior;
}DDLNode, * DDLinkList;



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



int Pattern(LinkList A, LinkList B)
{
	LNode* ra = A;
	LNode* cur = ra;
	LNode* rb = B;
	while (cur->next != NULL)
	{
		ra = cur;
		rb = B;
		while(rb->next != NULL && rb->next->data == ra->next->data)
		{
			ra = ra->next;
			rb = rb->next;
		}
		if (rb->next == NULL)
		{
			return 1;
		}
		if (ra->next == NULL)
		{
			return 0;
		}
		cur = cur->next;
	}
	return 0;
}


//int main()
//{
//	LinkList A = NULL;
//	LinkList B = NULL;
//	List_TailInsert(&A);
//	List_TailInsert(&B);
//	int ret = Pattern(A, B);
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



DLinkList DList_TailInsert(DLinkList* L)
{
	DLNode* s = NULL;
	int x = 0;
	*L = (DLinkList)malloc(sizeof(DLNode));
	(*L)->next = NULL;
	DLNode* p = *L;
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (DLNode*)malloc(sizeof(DLNode));
		s->data = x;
		s->prior = p;
		p->next = s;
		p = s;
		scanf("%d", &x);
	}
	p->next = NULL;
}



DLinkList DList_HeadInsert(DLinkList* L)
{
	DLNode* s = NULL;
	DLNode* p = NULL;
	int x = 0;
	*L = (DLinkList)malloc(sizeof(DLNode));
	(*L)->next = NULL;
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (DLNode*)malloc(sizeof(DLNode));
		s->data = x;
		s->next = (*L)->next;
		s->prior = (*L);
		(*L)->next = s;
		if (s->next != NULL)
			s->next->prior = s;	
		scanf("%d", &x);
	}
}



DLinkList DList_Cir_TailInsert(DLinkList* L)
{
	DLNode* s = NULL;
	int x = 0;
	*L = (DLinkList)malloc(sizeof(DLNode));
	(*L)->next = NULL;
	DLNode* p = *L;
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (DLNode*)malloc(sizeof(DLNode));
		s->data = x;
		s->prior = p;
		p->next = s;
		p = s;
		scanf("%d", &x);
	}
	p->next = (*L);
	(*L)->prior = p;
}


DLinkList DList_Cir_HeadInsert(DLinkList* L)
{
	DLNode* s = NULL;
	DLNode* p = NULL;
	int x = 0;
	*L = (DLinkList)malloc(sizeof(DLNode));
	(*L)->next = (*L);
	(*L)->prior = (*L);
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (DLNode*)malloc(sizeof(DLNode));
		s->data = x;
		s->next = (*L)->next;
		(*L)->next = s;
		s->prior = (*L);
		if (s->next == (*L))
		{
			(*L)->prior = s;;
		}
		else
		{
			s->next->prior = s;
		}

		scanf("%d", &x);
	}
}





//int main()
//
//{
//	DLinkList L = NULL;
//	DList_Cir_HeadInsert(&L);
//	/*DList_HeadInsert(&L);*/
//	return 0;
//}



int length(DLinkList L)
{
	int count = 0;
	DLNode* p = L->next;
	while (p != L)
	{
		count++;
		p = p->next;
	}
	return count;
}



int Symmetry(DLinkList L)
{
	DLNode* p = L->next;
	DLNode* q = L->prior;
	int len = length(L);
	for (int i = 0; i < len / 2; i++)
	{
		if (p->data != q->data)
		{
			return 0;
		}
		p = p->next;
		q = q->prior;
	}
	return 1;
}


//int main()
//{
//	DLinkList L = NULL;
//	DList_Cir_TailInsert(&L);
//	int ret = Symmetry(L);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}


LinkList List_Cir_TailInsert(LinkList* L)
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
	r->next = (*L);
	return *L;
}


void List(LinkList h1, LinkList h2)
{
	LNode* p = h1;
	LNode* q = h2;
	while (p->next != h1 && q->next != h2)
	{
		p = p->next;
		q = q->next;
	}
	while (p->next != h1)
	{
		p = p->next;
	}
	while (q->next != h2)
	{
		q = q->next;
	}
	p->next = h2->next;
	q->next = h1;
	free(h2);
}



//int main()
//{
//	LinkList h1 = NULL;
//	LinkList h2 = NULL;
//	List_Cir_TailInsert(&h1);
//	List_Cir_TailInsert(&h2);
//	List(h1, h2);
//	return 0;
//}



void Del_Min(LinkList* L)
{
	while ((*L)->next != (*L))
	{
		LNode* pre = *L;
		LNode* p = pre->next;
		LNode* tmp = NULL;
		while (p->next != *L)
		{
			if (p->next->data < pre->next->data)
				pre = p;
			p = p->next;
		}
		printf("%d ", pre->next->data);
		tmp = pre->next;
		pre->next = pre->next->next;
		free(tmp);
	}
	free(*L);
	(*L) = NULL;
}



void Del_Min_1(LinkList* L)
{
	while ((*L)->next != (*L))
	{
		LNode* pre = *L;
		LNode* p = pre->next;
		LNode* minpre = pre;
		LNode* minp = minpre->next;
		while (p != (*L))
		{
			if (p->data < minp->data)
			{
				minp = p;
				minpre = pre;
			}
			pre = pre->next;
			p = p->next;	
		}
		printf("%d ", minp->data);
		minpre->next = minp->next;
		free(minp);
	}
	free(*L);
	(*L) = NULL;
}


//int main()
//{
//	LinkList L = NULL;
//	List_Cir_TailInsert(&L);
//	Del_Min_1(&L);
//	return 0;
//}


DDLinkList DDList_TailInsert(DDLinkList* L)
{
	DDLNode* s = NULL;
	int x = 0;
	*L = (DDLinkList)malloc(sizeof(DDLNode));
	(*L)->freq = 0;
	(*L)->next = NULL;
	DDLNode* p = *L;
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (DDLNode*)malloc(sizeof(DDLNode));
		s->data = x;
		s->prior = p;
		p->next = s;
		p = s;
		scanf("%d", &x);
	}
	p->next = NULL;
}



DDLinkList Locate(DDLinkList L, int x)
{
	DDLNode* p = L->next;
	DDLNode* q = L;
	while (p && p->data != x)
	{
		p = p->next;
	}
	if (p == NULL)
	{
		return L;
	}
	p->freq = p->freq + 1;
	p->prior->next = p->next;
	if (p->next != NULL)
	{
		p->next->prior = p->prior;
	}
	while (p->freq < q->next->freq && q->next != NULL)
	{
		q = q->next;
	}
	q->next->prior = p;
	p->next = q->next;
	q->next = p;
	p->prior = q;
	return p;
}



int main()
{
	DDLinkList L = NULL;
	DDList_TailInsert(&L);
	Locate(L, 3);
	Locate(L, 2);
	return 0;
}