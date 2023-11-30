#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define MAXSIZE 50
#define TRUE 1
#define FALSE 0

typedef struct SqQueue
{
	int data[MAXSIZE];
	int front;
	int rear;

}SqQueue;


void InitQueue(SqQueue* Q)
{
	Q->front = 0;
	Q->rear = 0;
}


int isEmpty(SqQueue* Q)
{
	if (Q->front == Q->rear)
		return TRUE;
	return FALSE;
}


int EnterQueue(SqQueue* Q,int x)
{
	if ((Q->rear + 1) % MAXSIZE == Q->front)
		return FALSE;
	Q->data[Q->rear] = x;
	Q->rear = (Q->rear + 1) % MAXSIZE;
	return TRUE;
}


int OutQueue(SqQueue* Q, int* x)
{
	if (Q->front == Q->rear)
		return FALSE;
	*x = Q->data[Q->front];
	Q->front = (Q->front + 1) % MAXSIZE;
	return TRUE;
}


typedef struct QNode
{
	int data;
	struct QNode* next;
}QNode;


typedef struct QNodePtr
{
	QNode* front;
	QNode* rear;
}QNodePtr;


void InitListQueue(QNodePtr* Q)
{
	Q->front = (QNode*)malloc(sizeof(QNode));
	Q->rear = Q->front;
	Q->front->next = NULL;
}


int IsEmpty(QNodePtr* Q)
{
	if (Q->front == Q->rear)
		return TRUE;
	return FALSE;
}



void EntreListQueue(QNodePtr* Q, int x)
{
	QNode* s = (QNode*)malloc(sizeof(QNode));
	s->data = x;
	s->next = NULL;
	Q->rear->next = s;
	Q->rear = s;
}


int OutListQueue(QNodePtr* Q, int* x)
{
	if (Q->front == Q->rear)
		return FALSE;
	QNode* p = Q->front->next;
	*x = p->data;
	Q->front->next = p->next;
	if (p == Q->rear)
		Q->rear = Q->front;
	free(p);
	return TRUE;
}







