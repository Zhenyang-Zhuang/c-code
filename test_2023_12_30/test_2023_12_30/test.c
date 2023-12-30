#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <math.h>

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%d\nmonth=%02d\ndate=%02d", year, month, date);
//	return 0;
//}



//int main()
//{
//	int ret = printf("\"Hello world!\"");
//	printf("\n");
//	printf("%d", ret);
//	return 0;
//}


//int main()
//{
//	printf("printf(\"Hello world!\\n\");");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	int max = a;
//	if (max < b)
//		max = b;
//	if (max < c)
//		max = c;
//	if (max < d)
//		max = d;
//	printf("%d", max);
//	return 0;
//}


//int main()
//{
//	int arr[4] = { 0 };
//	for (int i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (int i = 1; i < 4; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}


//int main()
//{
//	int max = 0;
//	int n = 0;
//	scanf("%d", &max);
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &n);
//		if (n > max)
//			max = n;
//	}
//	printf("%d", max);
//	return 0;
//}


//int main()
//{
//	double r = 0.0;
//	double pi = 3.1415926;
//	double v = 0.0;
//	scanf("%lf", &r);
//	v = 4 / 3.0 * pi * pow(r, 3);
//	printf("%.3lf", v);
//	return 0;
//}


//int main()
//{
//	float r = 0.0f;
//	float v = 0.0f;
//	scanf("%f", &r);
//	v = 4 / 3.0 * 3.1415926 * r * r * r;
//	printf("%.3f", v);
//	return 0;
//}


int main()
{
	int weight = 0;
	int high = 0;
	float BMI = 0.0f;
	scanf("%d %d", &weight, &high);
	BMI = weight / ((high / 100.0) * (high / 100.0));
	printf("%.2f", BMI);
	return 0;
}