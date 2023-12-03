#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define MAXSIZE 50
typedef struct SqStack
{
	char data[MAXSIZE];
	int top;
}SqStack;



int is_pair(char s[],SqStack* S)
{
	int i = 0;
	if (s[i] == ')' || s[i] == ']' || s[i] == '}')
		return 0;
	while (s[i] != '\0')
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
		{
			S->data[++(S->top)] = s[i];
		}
		else
		{
			if ((s[i] == ')' && S->data[S->top] == '(') ||
				(s[i] == ']' && S->data[S->top] == '[') ||
				(s[i] == '}' && S->data[S->top] == '{'))
				S->top--;
			else
				return 0;
				
		}
		i++;
	}
	if (S->top == -1)
		return 1;
}


void InitStack(SqStack* S)
{
	S->top = -1;
}



//int main()
//{
//	char s[20] = { 0 };
//	SqStack S = { 0 };
//	scanf("%s", s);
//	InitStack(&S);
//	int ret = is_pair(s,&S);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}


int Push(SqStack* S, char x)
{
	if (S->top == MAXSIZE)
		return 0;
	S->data[++(S->top)] = x;
	return 1;
}


int Pop(SqStack* S, char* x)
{
	if (S->top == -1)
		return 0;
	*x = S->data[(S->top)--];
	return 1;
}


int IsEmpty(SqStack* S)
{
	if (S->top == -1)
		return 1;
	return 0;
}


void Train_arrange(char* train, SqStack* S)
{
	char* p = train;
	char* q = train;
	char tmp = 0;
	while (*p)
	{
		if (*p == 'H')
			Push(S, *p);
		else
			*(q++) = *p;
		p++;
	}
	while (!IsEmpty(S))
	{
		Pop(S, &tmp);
		*(q++) = tmp;
	}
}



//int main()
//{
//	char train[20] = { 0 };
//	scanf("%s", train);
//	SqStack S = { 0 };
//	InitStack(&S);
//	Train_arrange(train, &S);
//	return 0;
//}


int P(int n, int x)
{
	typedef struct S
	{
		int no;
		int val;
	}S;
	S st[MAXSIZE] = { 0 };
	int top = -1;
	int fv1 = 1;
	int fv2 = 2 * x;
	for (int i = n; i >= 2; i--)
	{
		st[++top].no = i;
	}
	while (top != -1)
	{
		st[top].val = 2 * x * fv2 - 2 * (st[top].no - 1) * fv1;
		fv1 = fv2;
		fv2 = st[top].val;
		top--;
	}
	if (n == 0)
		return fv1;
	return fv2;
}


//int main()
//{
//	int x = 0;
//	int n = 0;
//	scanf("%d%d", &x, &n);
//	int ret = P(n, x);
//	printf("%d\n", ret);
//	return 0;
//}


typedef struct SqQueue
{
	int data[MAXSIZE];
	int front;
	int rear;
}SqQueue;


void manager(SqQueue* q, SqQueue* q1, SqQueue* q2)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	while (j < 10)
	{
		if (!QueueEmpty(q1) && i < 4)
		{
			DeQueue(q1, &tmp);
			EnQueue(q, tmp);
			j++;
			i++;
		}
		else if (i == 4 && !QueueEmpty(q2))
		{
			DeQueue(q2, &tmp);
			EnQueue(q, tmp);
			j++;
			i = 0;
		}
		else
		{
			while (j < 10 && i < 4 && !QueueEmpty(q2))
			{
				DeQueue(q2, &tmp);
				EnQueue(q, tmp);
				j++;
				i++;
			}
			i = 0;
		}
		if (QueueEmpty(q2) && QueueEmpty(q1))
			j = 11;
	}
}



int main()
{
	SqQueue q = { 0 };
	SqQueue q1 = { 0 };
	SqQueue q2 = { 0 };
	manager(&q, &q1, &q2);
	return 0;
}