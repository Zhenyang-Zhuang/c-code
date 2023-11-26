#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


#define MAXSIZE 50
#define TRUE 1
#define FALSE 0

typedef struct SqStack
{
	int data[MAXSIZE];
	int top;
}SqStack;

void InitStack(SqStack* S)
{
	S->top = -1;
}


int StackEmpty(SqStack* S)
{
	if (S->top == -1)
		return TRUE;
	return FALSE;
}


int Push(SqStack* S,int x)
{
	if (S->top == MAXSIZE - 1)
		return FALSE;
	S->data[++S->top] = x;
	return TRUE;	
}


int Pop(SqStack* S, int* x)
{
	if (S->top == -1)
		return FALSE;
	*x = S->data[S->top--];
	return TRUE;
}


int GetTop(SqStack* S, int* x)
{
	if (S->top == -1)
		return FALSE;
	*x = S->data[S->top];
	return TRUE;
}

int main()
{
	SqStack S = { 0 };
	int x = 0;
	InitStack(&S);
	StackEmpty(&S);
	Push(&S, x);
	Pop(&S, &x);
	return 0;
}