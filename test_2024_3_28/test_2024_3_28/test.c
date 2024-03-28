#define _CRT_SECURE_NO_WARNINGS 1
//
//
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//
////#define N 1000
////
////int PrimeTable[N + 1] = { 0 };
////
////
////
////void GetPrimeTable()
////{
////	int i = 0;
////	int j = 0;
////	for (i = 0; i <= N; i++)
////	{
////		PrimeTable[i] = 1;
////	}
////	PrimeTable[0] = 0;
////	PrimeTable[1] = 0;
////	for (i = 2; i <= N / 2; i++)
////	{
////		if (PrimeTable[i])
////		{
////			for (j = 2 * i; j <= N; j += i)
////			{
////				PrimeTable[j] = 0;
////			}
////		}
////	}
////}
////
////
////
////int SeparateEven(int n,int* x,int* y)
////{
////	int i = 0;
////	for (i = 2; i <= n / 2; i++)
////	{
////		if (PrimeTable[i] && PrimeTable[n - i])
////		{
////			*x = i;
////			*y = n - i;
////			return 1;
////		}
////	}
////	return 0;
////}
////
////
////int main()
////{
////	GetPrimeTable();
////	int n = 0;
////	scanf("%d", &n);
////	int m = n;
////	int x = 0;
////	int y = 0;
////	if (m % 2 != 0)
////	{
////		m++;
////	}
////	int i = 0;
////	for (i = m; i <= n + 10; i += 2)
////	{
////		if (SeparateEven(i, &x, &y))
////		{
////			printf("%d=%d+%d\n", i, x, y);
////		}
////	}
////	return 0;
////}
//
//
//
////int countdigit(int n, int d)
////{
////	int count = 0;
////	while (n)
////	{
////		if (n % 10 == d)
////		{
////			count++;
////		}
////		n /= 10;
////	}
////	return count;
////}
//
//
////int main()
////{
////	int number = 0;
////	int digit = 2;
////	scanf("%d", &number);
////	int ret = countdigit(number, digit);
////	printf("count=%d\n", ret);
////	return 0;
////}
//
//
//
////int is(int n)
////{
////	if (n == 0)
////	{
////		return 0;
////	}
////	int count = 0;
////	int tmp = n;
////	while (tmp)
////	{
////		count++;
////		tmp /= 10;
////	}
////	int i = 0;
////	tmp = n;
////	int sum = 0;
////	for (i = 0; i < count; i++)
////	{
////		sum += (int)pow(tmp % 10, count);
////		tmp /= 10;
////	}
////	if (sum == n)
////	{
////		return 1;
////	}
////	return 0;
////}
//
//
////int main()
////{
////	int m = 0;
////	int n = 0;
////	printf("Input m and n: ");
////	scanf("%d%d", &m, &n);
////	int i = 0;
////	for (i = m; i <= n; i++)
////	{
////		if (is(i))
////		{
////			printf("%d", i);
////			printf("\n");
////		}
////	}
////	return 0;
////}
//
//
//
////int Isleap(int year)
////{
////	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
////	{
////		return 1;
////	}
////	return 0;
////}
////
////
////int IsDate(int year, int month, int date)
////{
////	switch (month)
////	{
////	case 1:
////	case 3:
////	case 5:
////	case 7:
////	case 8:
////	case 10:
////	case 12:
////		if (date >= 0 && date <= 31)
////			return 1;
////		else
////			return 0;
////	case 4:
////	case 6:
////	case 9:
////	case 11:
////		if (date >= 0 && date <= 30)
////			return 1;
////		else
////			return 0;		
////	case 2:
////		if (Isleap(year))
////		{
////			if (date > 0 && date <= 29)
////				return 1;
////			else
////				return 0;
////		}
////		else
////		{
////			if (date > 0 && date <= 28)
////				return 1;
////			else
////				return 0;
////		}
////	default:
////		return 0;
////	}
////}
////
////
////int Days(int year, int month, int date)
////{
////	int sum = 0;
////	switch (month)
////	{
////	case 12:
////		sum += 30;
////	case 11:
////		sum += 31;
////	case 10:
////		sum += 30;
////	case 9:
////		sum += 31;
////	case 8:
////		sum += 31;
////	case 7:
////		sum += 30;
////	case 6:
////		sum += 31;
////	case 5:
////		sum += 30;
////	case 4:
////		sum += 31;
////	case 3:
////		if (Isleap(year))
////			sum += 29;
////		else
////			sum += 28;
////	case 2:
////		sum += 31;
////	}
////	sum += date;
////	return sum;
////}
////
////
////
////int main()
////{
////	int year = 0;
////	int month = 0;
////	int date = 0;
////	scanf("%d-%d-%d", &year, &month, &date);
////	if (IsDate(year, month, date))
////	{
////		int ret = Days(year, month, date);
////		printf("NO:%d\n", ret);
////	}
////	else
////	{
////		printf("DateError\n");
////	}
////	return 0;
////}
//
//
////#define N 10
//
//
////void Sort(int* x, int n)
////{
////	int i = 0;
////	int j = 0;
////	for (i = 1; i < n; i++)
////	{
////		if (*(x + i) < *(x + i - 1))
////		{
////			int tmp = *(x + i);
////			for (j = i - 1; j >= 0 && tmp < *(x + j); j--)
////			{
////				*(x + j + 1) = *(x + j);
////			}
////			*(x + j + 1) = tmp;
////		}
////	}
////}
//
//
////void sort(int* x, int n)
////{
////	int i = 0;
////	int j = 0;
////	int k = 0;
////	int t = 0;
////	for (i = 0; i < n - 1; i++)
////	{
////		k = i;
////		for (j = i + 1; j < n; j++)
////		{
////			if (x[k] > x[j])
////			{
////				k = j;
////			}
////		}
////		t = x[i];
////		x[i] = x[k];
////		x[k] = t;
////	}
////}
////
////
////int main()
////{
////	int a[N] = { 0 };
////	int n = 0;
////	int* p = NULL;
////	scanf("%d", &n);
////	for (p = a; p < a + n; p++)
////	{
////		scanf("%d", p);
////	}
////	sort(a, n);
////	return 0;
////}
//
//
//
//i/*nt getdig(char* p, int* q)
//{
//	int i = 0;
//	for (; *p != '\0'; p++)
//	{
//		if (*p >= '0' && *p <= '9')
//		{
//			*q = *p - '0';
//			p++;
//			while (*p != '\0' && (*p >= '0' && *p <= '9'))
//			{
//				*q = *q * 10 + (*p - '0');
//				p++;
//			}
//			i++;
//			q++;
//		}	
//	}
//	return i;
//}*/
//
//
////int main()
////{
////	char str[100] = { 0 };
////	char* p = str;
////	int a[100] = { 0 };
////	int* q = a;
////	int count = 0;
////	gets(p);
////	count = getdig(str, q);
////	for (q = a; q < a + count; q++)
////	{
////		printf("%4d", *q);
////	}
////	return 0;
////}
//
//
//void Delchar(char* s, char c)
//{
//	int i = 0;
//	int j = 0;
//	while (*(s + i))
//	{
//		if (*(s + i) != c)
//		{
//			*(s + j) = *(s + i);
//			j++;
//		}
//		i++;
//	}
//	*(s + j) = '\0';
//}
//
//
//
//int main()
//{
//	char str[50] = { 0 };
//	char ch = 0;
//	scanf("%s", str);
//	getchar();
//	scanf("%c", &ch);
//	Delchar(str, ch);
//	printf("After delete:\n");
//	puts(str);
//	return 0;
//}


//void dectobin(int n)
//{
//	if (n > 1)
//	{
//		dectobin(n / 2);
//	}
//	printf("%d", n % 2);
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	dectobin(n);
//	return 0;
//}



void splitfloat(double x, int* intpart, double* fracpart)
{
	*intpart = (int)x;
	*fracpart = x - *intpart;
}

int main()
{
	double a = 0.0;
	double fracpart = 0.0;
	int intpart = 0;
	scanf("%lf", &a);
	splitfloat(a, &intpart, &fracpart);
	printf("INT:%d\nFRAC:%lf\n", intpart, fracpart);
	return 0;
}