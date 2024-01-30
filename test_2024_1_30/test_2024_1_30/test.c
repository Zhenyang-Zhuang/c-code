#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>



//void print(unsigned int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%u ", n % 10);
//}
//
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	print(n);
//	return 0;
//}


//int main()
//{
//	printf("%u", -1);
//	return 0;
//}


//int my_strlen(char* str)
//{
//	if (*str)
//		return 1 + my_strlen(str + 1);
//	return 0;
//}



//int fac(int n)
//{
//	if (n == 1)
//		return 1;
//	else if (n == 0)
//		return 0;
//	else
//		return n * fac(n - 1);
//}


//int fib(int n)
//{
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	for (i = 0; i < n - 2;i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return b;
//}


//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}

//int main()
//{
//	char str[20] = { 0 };
//	scanf("%s", str);
//	int len = my_strlen(str);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d ", ret);
//	return 0;
//}


int MoveNum(int n)
{
	if (n == 1)
		return 1;
	else
		return 2 * MoveNum(n - 1) + 1;
}


void Move(char x, char y)
{
	printf("%c --> %c\n", x, y);
}


void hanoi(int n, char A, char B, char C)
{
	if (n == 1)
	{
		Move(A, C);
	}
	else
	{
		hanoi(n - 1, A, C, B);
		Move(A, C);
		hanoi(n - 1, B, A, C);
	}
}


int jump(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return jump(n - 1) + jump(n - 2);
	
}


//int main()
//{
//	int n = 3;
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	switch (a)
//	{
//	case 1:
//		printf("world");
//	default:
//		printf("hello");
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}


int main()
{
	int i = 0;
	float sum = 0.0f;
	float flag = 1.0f;
	for (i = 1; i <= 100; i++)
	{
		sum += flag / i;
		flag = -flag;
	}
	printf("%f", sum);
	return 0;
}