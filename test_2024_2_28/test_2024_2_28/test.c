#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

#include <ctype.h>

//int fact(int n)
//{
//	if (n <= 1)
//		return n;
//	else
//		return n * fact(n - 1);
//}
//
//
//int main()
//{
//	double x = 0.0;
//	int i = 1;
//	double k = 0.0;
//	double s = 0.0;
//	scanf("%lf", &x);
//	for (i = 1;(pow(fabs(x),i) / fact(i) >= 0.00001); i++)
//	{
//		k = pow(x, i) / fact(i);
//		s += k;
//	}
//	s += (pow(x, i) / fact(i));
//	printf("s=%.4lf\n", s);
//	return 0;
//}



//int main() {
//    int a, n, i;
//    double x, result, s = 0;
//    scanf("%lf", &x);
//    for (i = 1; (pow(fabs(x), i) / fact(i)) >= 0.00001; i++) {
//        result = pow(x, i) / fact(i);
//        s += result;
//    }
//    printf("s=%.4lf", s);
//    return 0;
//}





//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d,%d",&a,&n);
//	int s = a;
//	int i = 0;
//	int k = a;
//	printf("%d", a);
//	for (i = 0; i < n - 1; i++)
//	{
//		printf("+");
//		k = (k * 10 + a);
//		printf("%d", k);
//		s += k;
//	}
//	printf("=%d\n", s);
//	return 0;
//}

//int sum(int n)
//{
//	if (n == 1)
//		return 2;
//	else
//		return 2 * (n - 1) + sum(n - 1);
//
//}		
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = sum(n);
//	printf("%d\n", ret);
//	return 0;
//}


//void encrypt(char* str)
//{
//	char* p = str;
//	while (*p != '\n')
//	{
//		if (isalpha(*p))
//		{
//			if (isupper(*p))
//			{
//				*p = tolower(*p);
//			}
//			else
//			{
//				*p = toupper(*p);		
//			}
//			if ((*p >= 120 && *p <= 122) || (*p >= 88 && *p <= 90))
//				*p -= 23;
//			else
//				*p += 3;
//		}
//		if (isdigit(*p))
//		{
//			if (*p >= 53)
//				*p -= 5;
//			else
//				*p += 5;
//		}
//		p++;
//	}
//}
//
//
//int main()
//{
//	char str[60] = { 0 };
//	char ch = 0;
//	int i = 0;
//	do
//	{
//		ch = getchar();
//		str[i++] = ch;
//	} while (ch != '\n');
//	encrypt(str);
//	for (i = 0; str[i] != '\n'; i++)
//	{
//		printf("%c", str[i]);
//	}
//	return 0;
//
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	for (a = 1; a <= 4; a++)
	{
		for (b = 1; b <= 4; b++)
		{
			for (c = 1; c <= 4; c++)
			{
				for (d = 1;d <= 4;d++)
				{
					if ((c == 1) + (a == 3) == 1 && (b == 1) + (d == 4) == 1 && (d == 2) + (c == 3) == 1
						&& a != b && a != c && a != d && b != c && b != d && c != d)
					{
						printf("abcd\n");
						printf("%d%d%d%d\n", a, b, c, d);
					}
				}
			}
		}
	}
	return 0;
}