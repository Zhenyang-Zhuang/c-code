#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define MAXSIZE 50
typedef struct SqQueue
{
	CSNode* data[MAXSIZE];
	int front;
	int rear;
}SqQueue;




typedef struct CSNode
{
	int data;
	struct CSNode* firstchild;
	struct CSNode* nextsibling;
}CSNode,*CSTree;



int PreOrder(CSTree cs)
{
	int count = 0;
	if (cs)
	{
		if (cs->firstchild == NULL)
			count++;
		PreOrder(cs->firstchild);
		PreOrder(cs->nextsibling);
	}
	return count;
}



//int level(CSTree cs)
//{
//	if (cs == NULL)
//		return 0;
//	else
//	{
//		int firstchildlevel = level(cs->firstchild);
//		int brotherlevel = level(cs->nextsibling);
//		if (firstchildlevel + 1 > brotherlevel)
//			return firstchildlevel + 1;
//		else
//			return brotherlevel;
//
//	}
//}


void create(SqQueue* Q)
{
	CSNode* cs = NULL;
	CSNode* p = NULL;
	int num = 0;
	int i = 0;
	while (!IsEmpty(Q))
	{
		DeQueue(Q, &cs);
		num = cs->n;
		if (num >= 1)
		{
			DeQueue(Q, &p);
			cs->firstchild = p;
			for()
		}
	}
}



int main()
{

	return 0;
}