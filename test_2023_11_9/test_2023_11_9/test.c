#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//int main()
//{
//	int arr[50] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//int main()
//{
//	char arr[30] = { 0 };
//	scanf("%s", arr);
//	int len = strlen(arr);
//	int count1 = 0;
//	int count2 = 0;
//	for (int i = 0; i < len - 1; i++)
//	{
//		if (arr[i] == 'A')
//		{
//			count1++;
//		}
//		else
//		{
//			count2++;
//		}
//	}
//	if (count1 == count2)
//	{
//		printf("%c", 'E');
//	}
//	else if (count1 > count2)
//	{
//		printf("%c", 'A');
//	}
//	else
//	{
//		printf("%c", 'B');
//	}
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	int tmp = 0;
//	while ((tmp = scanf("%d",&n)) != EOF)
//	{
//		if (n >= 140)
//		{
//			printf("Genius\n");
//		}
//
//	}
//	return 0;
//}



//int main()
//{
//	int score = 0;
//	while (scanf("%d", &score) != EOF)
//	{
//		if (score >= 90 && score <= 100)
//		{
//			printf("Perfect");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int score = 0;
//	while (scanf("%d", &score) != EOF)
//	{
//		if (score >= 60)
//		{
//			printf("Pass\n");
//		}
//		else
//		{
//			printf("Fail\n");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n % 2 == 0)
//		{
//			printf("Even\n");
//		}
//		else
//		{
//			printf("Odd\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = c;
//		c = b;
//		b = tmp;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	char* p = "aeiouAEIOU";
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == *(p + i))
//			{
//				break;
//			}
//		}
//		if (ch == *(p + i))
//		{
//			printf("Vowel\n");
//		}
//		else
//		{
//			printf("Consonant\n");
//		}
//		getchar();
//	}
//	return 0;
//}



//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isalpha(ch))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//		}
//		getchar();
//	}
//	return 0;
//}




//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isupper(ch))
//		{
//			ch = tolower(ch);
//		}
//		else
//		{
//			ch = toupper(ch);
//		}
//		putchar(ch);
//		printf("\n");
//		getchar();
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int m = 0;
//	while (scanf("%d %d", &n, &m) != EOF)
//	{
//		if (n > m)
//		{
//			printf("%d>%d\n", n, m);
//		}
//		else if(n < m)
//		{
//			printf("%d<%d\n", n, m);
//		}
//		else
//		{
//			printf("%d=%d\n", n, m);
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int t = 0;
//	while (scanf("%d", &t) != EOF)
//	{
//		if (t > 0)
//		{
//			printf("1\n");
//		}
//		else if (t == 0)
//		{
//			printf("0.5\n");
//		}
//		else
//		{
//			printf("0\n");
//		}
//	}
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d%d%d", &a, &b, &c) != EOF)
//	{
//		if ((a + b) > c && (a + c) > b && (b + c) > a)
//		{
//			if (a == b && b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if (a == b || b == c || a == c)
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//}



//int main()
//{
//	float weight = 0;
//	float high = 0;
//	while (scanf("%f %f", &weight, &high) != EOF)
//	{
//		float BIM = weight / ((high / 100) * (high / 100));
//		if (BIM < 18.5)
//		{
//			printf("Underweight\n");
//		}
//		else if (BIM >= 18.5 && BIM <= 23.9)
//		{
//			printf("Normal\n");
//		}
//		else if (BIM > 23.9 && BIM <= 27.9)
//		{
//			printf("Overweight\n");
//		}
//		else
//		{
//			printf("Obese\n");
//		}
//	}
//}



//int main()
//{
//	float a, b, c;
//	while (scanf("%f%f%f", &a, &b, &c) != EOF)
//	{
//		if (a == 0)
//		{
//			printf("Not quadratic equation\n");
//		}
//		else
//		{
//			float tmp = b * b - 4 * a * c;
//			float x1 = (-b + sqrt(tmp)) / (2 * a);
//			float x2 = (-b - sqrt(tmp)) / (2 * a);
//			x1 = (x1 == 0 ? 0 : x1);
//			x2 = (x2 == 0 ? 0 : x2);
//			if (tmp == 0)
//			{
//				printf("x1=x2=%.2f\n", x1);
//			}
//			else if (tmp > 0)
//			{
//				if (x1 > x2)
//				{
//					float m = x1;
//					x1 = x2;
//					x2 = m;
//				}
//				printf("x1=%.2f;x2=%.2f\n", x1, x2);
//			}
//			else
//			{
//				printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", (-b) / (2 * a), sqrt(-tmp) / (2 * a),
//					(-b) / (2 * a), sqrt(-tmp) / (2 * a));
//			}
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int year = 0;
//	int month = 0;
//	while (scanf("%d%d", &year, &month) != EOF)
//	{
//		if (month == 2)
//		{
//			if ((year % 4 == 0 && year % 100 != 0) || (year % 400) == 0)
//			{
//				printf("29\n");
//			}
//			else
//			{
//				printf("28\n");
//			}
//		}
//		else
//		{
//			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//			{
//				printf("31\n");
//			}
//			else
//			{
//				printf("30\n");
//			}
//		}
//	}
//}



//int main()
//{
//	double a = 0;
//	double b = 0;
//	char ch = 0;
//	scanf("%lf%c%lf", &a, &ch, &b);
//	if (ch != '+' && ch != '-' && ch != '*' && ch != '/')
//	{
//		printf("Invalid operation!\n");
//	}
//	else
//	{
//		if (ch == '+')
//		{
//			printf("%.4lf%c%.4lf=%.4lf", a, ch, b, (a + b));
//		}
//		else if (ch == '-')
//		{
//			printf("%.4lf%c%.4lf=%.4lf", a, ch, b, (a - b));
//		}
//		else if (ch == '*')
//		{
//			printf("%.4lf%c%.4lf=%.4lf", a, ch, b, (a * b));
//		}
//		else
//		{
//			if (b == 0)
//			{
//				printf("Wrong!Division by zero!\n");
//			}
//			else
//			{
//				printf("%.4lf%c%.4lf=%.4lf", a, ch, b, (a / b));
//			}
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n - 1 - i; j++)
//			{
//				printf("  ");
//			}
//			for (int j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j < n - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n + 1; i++)
//		{
//			for (int j = 0; j < n - i; j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j <= i; j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j < n - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n + 1; i++)
//		{
//			for (int j = 0; j < n + 1 - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j <= i + 1; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n + 1; i++)
//		{
//			for (int j = 0; j < 2 * (n - i); j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j <= i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < 2 * (i + 1); j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j < n - i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			printf("*\n");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			printf("*\n");
//		}	
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == j || i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == 0 || i == n - 1)
//				{
//					printf("* ");
//					continue;
//				}
//				else
//				{
//					if (j == 0 || j == n - 1)
//					{
//						printf("* ");
//					}
//					else
//					{
//						printf("  ");
//					}
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (j == 0 || j == i || i == n - 1)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	float a, b, c, d, e;
//	scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
//	printf("%.2f", (a + b + c + d + e) / 5);
//	return 0;
//}


//int main()
//{
//	int fail = 0;
//	scanf("%d", &fail);
//	if (fail >= 10)
//	{
//		printf("Danger++\n");
//	}
//	else if (fail >= 4 && fail <= 9)
//	{
//		printf("Danger\n");
//	}
//	else
//	{
//		printf("Good\n");
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		switch (n)
//		{
//		case 200:
//			printf("OK\n");
//			break;
//		case 202:
//			printf("Accepted\n");
//			break;
//		case 400:
//			printf("Bad Request\n");
//			break;
//		case 403:
//			printf("Forbidden\n");
//			break;
//		case 404:
//			printf("Not Found\n");
//			break;
//		case 500:
//			printf("Internal Server Error\n");
//			break;
//		case 502:
//			printf("Bad Gateway\n");
//			break;
//		default:
//			break;
//		}
//	}
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 1; j <= i + 1; j++)
//			{
//				printf("%d ",j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int arr[7] = { 0 };
//	while (scanf("%d%d%d%d%d%d%d",
//		&arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6])
//		!= EOF)
//	{
//		for (int i = 0; i < 6; i++)
//		{
//			for (int j = 0; j < 6 - i; j++)
//			{
//				if (arr[j] < arr[j + 1])
//				{
//					int tmp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tmp;
//				}
//			}
//		}
//		printf("%.2f\n", (arr[1] + arr[2] + arr[3] + arr[4] + arr[5]) / 5.0);
//	}
//	return 0;
//}



