#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 50
#define TRUE 1
#define FALSE 0


//typedef struct SqQueue
//{
//	int data[MAXSIZE];
//	int front;
//	int rear;
//	int tag;
//}SqQueue;
//
//void InitQueue(SqQueue* Q)
//{
//	Q->front = 0;
//	Q->rear = 0;
//	Q->tag = 0;
//}
//
//int EntreQueue(SqQueue* Q,int x)
//{
//	if (Q->front == Q->rear && Q->tag == 1)
//		return FALSE;
//	Q->data[Q->rear] = x;
//	Q->rear = (Q->rear + 1) % MAXSIZE;
//	Q->tag = 1;
//	return TRUE;
//}
//
//
//
//int OutQueue(SqQueue* Q, int* x)
//{
//	if (Q->front == Q->rear && Q->tag == 0)
//		return FALSE;
//	*x = Q->data[Q->front];
//	Q->front = (Q->front + 1) % MAXSIZE;
//	Q->tag = 0;
//	return TRUE;
//}



typedef struct SqQueue
{
	int data[MAXSIZE];
	int front;
	int rear;
}SqQueue;

typedef struct SqStack
{
	int data[MAXSIZE];
	int top;
}SqStack;



int Reverse_Queue(SqQueue* Q, SqStack* S,int x)
{
	if (Q->front == Q->rear)
		return FALSE;
	while (Q->front != Q->rear)
	{
		S->data[++(S->top)] = Q->data[Q->front];
		Q->front = (Q->front + 1) % MAXSIZE;
	}
	while (S->top != -1)
	{
		Q->data[Q->rear] = S->data[(S->top)--];
		Q->rear = (Q->rear + 1) % MAXSIZE;
	}
	return TRUE;
}



int EnQueue(SqStack* S1, SqStack* S2,int e)
{
	int tmp = 0;
	if (!StackOverflow(S1))
	{
		Push(S1, e);
		return TRUE;
	}
	if (Stack0verflow(S1) && !StackEmpty(S2))
	{
		printf("队列满\n");
		return FALSE;
	}
	if (Stack0verflow(S1) && StackEmpty(S2))
	{
		while (!StackEmpty(S1))
		{
			Pop(S1, &tmp);
			Push(S2, tmp);
		}
	}
	Push(S1, e);
	return TRUE;
}


int DeQueue(SqStack* S1, SqStack* S2, int* x)
{
	int tmp = 0;
	if (!StackEmpty(S2))
	{
		Pop(S2, x);
		return TRUE;
	}
	else if (StackEmpty(S1))
	{
		printf("队列空\n");
		return FALSE;
	}
	else
	{
		while (!StackEmpty(S1))
		{
			Pop(S1, &tmp);
			Push(S2, tmp);
		}
	}
	Pop(S2, x);
	return TRUE;
}