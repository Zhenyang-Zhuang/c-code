#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>



//int main()
//{
//	float a = 0;
//	scanf("%f", &a);
//	int b = (int)a;
//	printf("%d\n", b % 10);
//	return 0;
//}



//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	long long sum = age * 3.156 * 10000000;
//	printf("%lld\n", sum);
//	return 0;
//}



//int main()
//{
//	int seconds = 0;
//	scanf("%d", &seconds);
//	printf("%d ", seconds / 3600);
//	seconds %= 3600;
//	printf("%d %d", seconds / 60,seconds % 60);
//	return 0;
//}


//int main()
//{
//	float a = 0;
//	float b = 0;
//	float c = 0;
//	scanf("%f %f %f", &a, &b, &c);
//	printf("%.2f %.2f", (a + b + c), (a + b + c) / 3);
//}



//int main()
//{
//	int weight = 0;
//	int high = 0;
//	scanf("%d %d", &weight, &high);
//	printf("%.2f", weight / ((high / 100.0) * (high / 100.0)));
//}



//int main()
//{
//	float a, b, c, d, p, f;
//	scanf("%f %f %f", &a, &b, &c);
//	p = 0.5 * (a + b + c);
//	f = sqrt(p * (p - a) * (p - b) * (p - c));
//	d = (a + b + c);
//	printf("circumference=%.2f area=%.2f", d, f);
//}


//int main()
//{
//	float r = 0;
//	scanf("%f", &r);
//	double v = (4.0 / 3) * 3.1415926 * r * r * r;
//	printf("%.3f", v);
//}


//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		printf("%c\n", ch + 32);
//		getchar();
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 2 << (n - 1);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int h = 0;
//	int m = 0;
//	scanf("%d %d %d", &n, &h, &m);
//	int sum = n - (m / h) - (m % h);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");
//	return 0;
//}


//int main()
//{
//	int a, b, c, d, e;
//	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
//	printf("%.1f", (a + b + c + d + e) / 5.0);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%x %o", &a, &b);
//	printf("%d\n", a + b);
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}


//int main()
//{
//	float weight = 0;
//	float high = 0;
//	scanf("%f %f", &weight, &high);
//	float BIM = weight / (high * high);
//	if (BIM >= 18.5 && BIM <= 23.9)
//	{
//		printf("Normal");
//	}
//	else
//	{
//		printf("Abnormal");
//	}
//	return 0;
//}



//int main()
//{
//	float price = 0;
//	int month = 0;
//	int date = 0;
//	int have_discount = 0;
//	float sum = 0;
//	scanf("%f %d %d %d", &price, &month, &date, &have_discount);
//	if ((month == date) && (month == 11 || month == 12) && (have_discount == 0 || have_discount == 1))
//	{
//		if (month == 11)
//		{
//			if (have_discount == 1)
//			{
//				sum = price * 0.7 - 50;
//			}
//			else
//			{
//				sum = price * 0.7;
//			}
//		}
//		else
//		{
//			if (have_discount == 1)
//			{
//				sum = price * 0.8 - 50;
//			}
//			else
//			{
//				sum = price * 0.8;
//			}
//		}
//	}
//	if (sum < 0)
//	{
//		sum = 0;
//	}
//	printf("%.2f\n", sum);
//	return 0;
//}


int main()
{
	for (int i = 10000; i <= 99999; i++)
	{
		int sum = 0;
		for (int j = 10; j <= 10000; j *= 10)
		{
			sum += (i % j) * (i / j);
		}
		if (sum == i)
		{
			printf("%d ", sum);
		}
	}
	return 0;
}

//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%lf ", (int)pow(10, i + 1));
//	}
//	return 0;
//}



//int main()
//{
//    int number, j;
//    for (number = 10000; number < 99999; number++)
//    {
//        int sum = 0;
//        for (j = 10; j <= 10000; j = j * 10)
//        {
//            sum = sum + (number / j) * (number % j);
//        }
//        if (sum == number)
//            printf("%d ", number);
//    }
//    return 0;
//}