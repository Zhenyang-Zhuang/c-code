#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode, *LinkList;




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



 Discreat(LinkList C, LinkList A, LinkList B)
{
	 LNode* rc = C->next;
	 LNode* ra = A;
	 LNode* rb = B;
	 LNode* tmp = NULL;
	 while (rc != NULL)
	 {
		 ra->next = rc;
		 ra = rc;
		 rc = rc->next;
		 if (rc != NULL)
		 {
			 tmp = rc->next;
			 rc->next = rb->next;
			 rb->next = rc;
			 rc = tmp;
		 }
		 else
		 {
			 break;
		 }
	 }
	 ra->next = NULL;
}



//int main()
//{
//	LinkList C = NULL;
//	LinkList A = NULL;
//	LinkList B = NULL;
//	List_TailInsert(&C);
//	List_TailInsert(&A);
//	List_TailInsert(&B);
//	Discreat(C, A, B);
//	return 0;
//}



 void Delete_Common_1(LinkList L)
 {
	 LNode* q = L;
	 LNode* p = q->next->next;
	 LNode* end = NULL;
	 q->next->next = NULL;
	 while (p != NULL)
	 {
		 q = L;
		 while (q->next != NULL)
		 {
			 if (q->next->data == p->data)
			 {
				 break;
			 }
			 q = q->next;
		 }
		 if (q->next == NULL)
		 {
			 q->next = p;
			 end = p;
			 p = p->next;
			 end->next = NULL;
		 }
		 else
		 {
			 p = p->next;
		 }
	 }
}


void Delete_Common_2(LinkList L)
{
	LNode* p = L->next;
	LNode* q = p->next;
	LNode* tmp = NULL;
	while (q != NULL)
	{
		while (p->data == q->data && q != NULL)
		{
			tmp = q;
			q = q->next;
			free(tmp);
		}
		if (q != NULL)
		{
			p->next = q;
			p = q;
			q = q->next;
		}
	}
}



void Delete_Common_3(LinkList L)
{
	LNode* pre = L->next;
	LNode* p = NULL;
	if (pre == NULL)
	{
		return;
	}
	while (pre->next != NULL)
	{
		p = pre->next;
		if (pre->data == p->data)
		{
			pre->next = p->next;
			free(p);
		}
		else
		{
			pre = pre->next;
		}
	}
}




 /*int main()
 {
	 LinkList L = NULL;
	 List_TailInsert(&L);
	 Delete_Common_3(L);
	 return 0;
 }*/



void MergeList(LinkList A, LinkList B)
{
	LNode* ra = A->next;
	LNode* rb = B->next;
	LNode* tmp = NULL;
	A->next = NULL;
	while (ra && rb)
	{
		if (ra->data <= rb->data)
		{
			tmp = ra->next;
			ra->next = A->next;
			A->next = ra;
			ra = tmp;
		}
		else
		{
			tmp = rb->next;
			rb->next = A->next;
			A->next = rb;
			rb = tmp;
		}
	}
	if (ra)
	{
		rb = ra;
	}
	while (rb)
	{
		tmp = rb->next;
		rb->next = A->next;
		A->next = rb;
		rb = tmp;
	}
}



//int main()
//{
//	LinkList A = NULL;
//	LinkList B = NULL;
//	LinkList C = NULL;
//	List_TailInsert(&A);
//	List_TailInsert(&B);
//	MergeList(A, B);
//	return 0;
//}



void Get_Common(LinkList A, LinkList B, LinkList C)
{
	LNode* ra = A->next;
	LNode* rb = B->next;
	LNode* rc = C;
	LNode* s = NULL;
	while (ra && rb)
	{
		if (ra->data == rb->data)
		{
			s = (LNode*)malloc(sizeof(LNode));
			s->data = ra->data;
			rc->next = s;
			rc = s;
			ra = ra->next;
			rb = rb->next;
		}
		else if (ra->data < rb->data)
		{
			ra = ra->next;
		}
		else
		{
			rb = rb->next;
		}
	}
	rc->next = NULL;
}




//int main()
//{
//	LinkList A = NULL;
//	LinkList B = NULL;
//	LinkList C = NULL;
//	List_TailInsert(&A);
//	List_TailInsert(&B);
//	List_TailInsert(&C);
//	Get_Common(A, B, C);
//	return 0;
//}


void Union(LinkList A, LinkList B)
{
	LNode* ra = A->next;
	LNode* rb = B->next;
	LNode* la = A;
	LNode* lb = B;
	while (ra && rb)
	{
		if (ra->data == rb->data)
		{
			la->next = ra;
			la = ra;
			lb = rb;
			ra = ra->next;
			rb = rb->next;
			free(lb);
		}
		else if (ra->data < rb->data)
		{
			lb = ra;
			ra = ra->next;
			free(lb);
		}
		else
		{
			lb = rb;
			rb = rb->next;
			free(rb);
		}
	}
	while (ra)
	{
		lb = ra;
		ra = ra->next;
		free(lb);
	}
	while (rb)
	{
		lb = rb;
		rb = rb->next;
		free(lb);
	}
	la->next = NULL;
	free(B);
	
}



int main()
{
	LinkList A = NULL;
	LinkList B = NULL;
	List_TailInsert(&A);
	List_TailInsert(&B);
	Union(A, B);
	return 0;
}