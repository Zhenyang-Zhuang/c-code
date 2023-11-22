#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>



typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode, * LinkList;




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


void Reverse_List_1(LinkList L)
{
	LNode* r = NULL;
	LNode* p = L->next;
	L->next = NULL;
	while (p != NULL)
	{
		r = p;
		p = p->next;
		r->next = L->next;
		L->next = r;
	}
}


void Reverse_List_2(LinkList L)
{
	LNode* pre = L->next;
	LNode* p = pre->next;
	LNode* r = NULL;
	pre->next = NULL;
	while (p != NULL)
	{
		r = p->next;
		p->next = pre;
		pre = p;
		p = r;
	}
	L->next = pre;
}

//int main()
//{
//	LinkList L = NULL;
//	List_TailInsert(&L);
//	Reverse_List_2(L);
//	return 0;
//}


void Sort_List(LinkList L)
{
	LNode* p = L->next;
	LNode* r = p->next;
	LNode* pre = NULL;
	p->next = NULL;
	p = r;
	while (p != NULL)
	{
		r = p->next;
		pre = L;
		while (pre->next != NULL && pre->next->data < p->data)
		{
			pre = pre->next;
		}
		p->next = pre->next;
		pre->next = p;
		p = r;
	}
}




//int main()
//{
//	LinkList L = NULL;
//	List_TailInsert(&L);
//	Sort_List(L);
//	return 0;
//}


void Delete(LinkList L, int a, int b)
{
	LNode* p = L->next;
	LNode* pre = L;
	LNode* tmp = NULL;
	while (p != NULL)
	{
		if (p->data >= a && p->data <= b)
		{
			tmp = p;
			pre->next = p->next;
			p = p->next;
			free(tmp);
		}
		else
		{
			pre = p;
			p = p->next;
		}
	}
}



//int main()
//{
//	LinkList L = NULL;
//	List_TailInsert(&L);
//	Delete(L, 1, 5);
//	return 0;
//}


int List_Length(LinkList L)
{
	int count = 0;
	LNode* p = L->next;
	while (p != NULL)
	{
		count++;
		p = p->next;
	}
	return count;
}


LinkList Search_1st_Common(LinkList L1, LinkList L2)
{
	int dist = 0;
	int len1 = List_Length(L1);
	int len2 = List_Length(L2);
	LinkList longlist = NULL;
	LinkList shortlist = NULL;
	if (len1 >= len2)
	{
		dist = len1 - len2;
		longlist = L1->next;
		shortlist = L2->next;
	}
	else
	{
		dist = len2 - len1;
		longlist = L2->next;
		shortlist = L1->next;
	}
	while (dist--)
	{
		longlist = longlist->next;
	}
	while (longlist && shortlist)
	{
		if (longlist == shortlist)
		{
			return longlist;
		}
		longlist = longlist->next;
		shortlist = shortlist->next;
	}
	return NULL;
}



//int main()
//{
//	LinkList L1 = NULL;
//	LinkList L2 = NULL;
//	List_TailInsert(&L1);
//	List_TailInsert(&L2);
//	Search_1st_Common(L1, L2);
//	return 0;
//}



void List_Sort1(LinkList L)
{
	LNode* p = L->next;
	LNode* r = p->next;
	LNode* pre = NULL;
	p->next = NULL;
	p = r;
	while (p)
	{
		r = r->next;
		pre = L;
		while(pre->next && pre->next->data < p->data)
		{
			pre = pre->next;
		}
		p->next = pre->next;
		pre->next = p;
		p = r;
	}
}



//int main()
//{
//	LinkList L = NULL;
//	List_TailInsert(&L);
//	List_Sort1(L);
//
//	return 0;
//}



void Delete_Min(LinkList head)
{
	while (head->next != NULL)
	{
		LNode* pre = head;
		LNode* p = pre->next;
		LNode* u = NULL;
		while (p->next != NULL)
		{
			if (p->next->data < pre->next->data)
			{
				pre = p;
			}
			p = p->next;
		}
		printf("%d ", pre->next->data);
		u = pre->next;
		pre->next = u->next;
		free(u);
	}
	free(head);
}




//int main()
//{
//	LinkList head = NULL;
//	List_TailInsert(&head);
//	Delete_Min(head);
//	return 0;
//}


void DisCreat(LinkList A, LinkList B)
{
	int count = 2;
	LNode* a = A->next->next;
	LNode* b = B;
	LNode* p = A->next;
	while (a)
	{
		b->next = a;
		b = a;
		a = a->next;
		if (a)
		{
			p->next = a;
			p = a;
		}
		else
		{
			break;
		}
		a = a->next;
		
	}
	b->next = NULL;
	p->next = NULL;
}



int main()
{
	LinkList A = NULL;
	LinkList B = NULL;
	List_TailInsert(&A);
	List_TailInsert(&B);
	DisCreat(A, B);
	return 0;
}