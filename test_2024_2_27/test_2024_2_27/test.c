#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>


//void swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		swap(&a, &b);
//	}
//	if (a > c)
//	{
//		swap(&a, &c);
//	}
//	if (b > c)
//	{
//		swap(&b, &c);
//	}
//	printf("small to big: %d %d %d\n", a, b, c);
//	return 0;
//}


//int main()
//{
//	float x = 0.0f;
//	float y = 0.0f;
//	scanf("%f", &x);
//	if (x <= 100)
//	{
//		printf("%.2f", 0.51 * x);
//	}
//	else
//	{
//		printf("%.2f", 0.65 * x);
//	}
//	return 0;
//}

//0 1 //1 3// 2 5

//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 13 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
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
//	scanf("%d", &n);
//	printf("%d\n", n * (n - 1));
//	return 0;
//}



//int main()
//{
//	double x = 0.0;
//	double y = 0.0;
//	double A = 0.0;
//	double B = 0.0;
//	double C = 0.0;
//	scanf("%lf%lf", &x, &y);
//	scanf("%lf%lf%lf", &A, &B, &C);
//	double distance = (A * x + B * y + C) / sqrt(A * A + B * B);
//	distance = distance > 0 ? distance : -distance;
//	printf("%lf\n", distance);
//	return 0;
//}


//int main()
//{
//	float x = 0.0f;
//	scanf("%f", &x);
//	if (x < 1)
//		printf("y=%.2f\n", x);
//	else if (x >= 1 && x < 10)
//		printf("y=%.2f\n", x - 1);
//	else
//		printf("y=%.2f\n", 3 * x - 11);
//	return 0;
//}



//int main()
//{
//	double x1, y1, x2, y2, x3, y3, a, b, c,p;
//	scanf("%lf,%lf", &x1, &y1);
//	scanf("%lf,%lf", &x2, &y2);
//	scanf("%lf,%lf", &x3, &y3);
//	a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
//    b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
//	c = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
//	p = (a + b + c) / 2;
//	if (a + b > c && a + c > b && b + c > a)
//		printf("primeter=%.2lf,area=%.2lf", (a + b + c), sqrt((p * (p - a) * (p - b) * (p - c))));
//	else
//		printf("Impossible\n");
//	return 0;
//}



//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	switch (month)
//	{
//	case 2:
//	case 3:
//	case 4:
//		printf("Spring\n");
//		break;
//	case 5:
//	case 6:
//	case 7:
//		printf("Summer\n");
//		break;
//	case 8:
//	case 9:
//	case 10:
//		printf("Autumn\n");
//		break;
//	case 11:
//	case 12:
//	case 1:
//		printf("Winter\n");
//		break;
//	default:
//		printf("Error\n");
//		break;
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 3 == 0 && n % 5 == 0)
//		printf("A\n");
//	else if (n % 3 == 0)
//		printf("B\n");
//	else if (n % 5 == 0)
//		printf("C\n");
//	else
//		printf("D\n");
//	return 0;
//}

int judgeyear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    return 0;
}

    
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int day = 0;
//    int flag = 0;
//    int data[13] = { -1,31,28,31,30,31,30,31,31,30,31,30,31 };
//    scanf("%d%d%d", &year, &month, &day);
//    if (data[month] >= day && month != 2)
//        flag = 1;
//    else if (month == 2)
//    {
//        if (judgeyear(year))
//        {
//            if (data[month] + 1>= day)
//                flag = 1;
//        }
//        else
//        {
//            if (data[month] >= day)
//                flag = 1;
//        }   
//    }
//    if (flag)
//        printf("yes\n");
//    else
//        printf("no\n");
//    
//    return 0;
//}




//int main()
//{
//    int year = 0;
//    int month = 0;
//    int day = 0;
//    int dayNumber = 0;
//    scanf("%d%d%d", &year, &month, &day);
//    switch (month)
//    {
//    case 12:
//        dayNumber += 30;
//    case 11:
//        dayNumber += 31;
//    case 10:
//        dayNumber += 30;
//    case 9:
//        dayNumber += 31;
//    case 8:
//        dayNumber += 31;
//    case 7:
//        dayNumber += 30;
//    case 6:
//        dayNumber += 31;
//    case 5:
//        dayNumber += 30;
//    case 4:
//        dayNumber += 31;
//    case 3:
//        if (judgeyear(year))
//            dayNumber += 29;
//        else
//            dayNumber += 28;
//    case 2:
//        dayNumber += day + 31;
//        break;
//    case 1:
//        dayNumber += day;
//    default:
//        printf("Input error!");
//        break;
//    }
//    printf("%d\n", dayNumber);
//    return 0;
//}



//int main()
//{
//    int n = 0;
//    int i = 0;
//    scanf("%d", &n);
//    int totals = 1;
//    for (i = n - 1; i > 0; i--)
//    {
//        totals++;
//        totals = totals * 2;
//    }
//    printf("Totals=%d\n", totals);
//    return 0;
//}


//int main()
//{
//    int year1 = 0;
//    int year2 = 0;
//    int years = 0;
//    int i = 0;
//    scanf("[%d,%d]", &year1, &year2);
//    for (i = year1; i <= year2; i++)
//    {
//        if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//            years++;
//    }
//    printf("years=%d\n", years);
//    return 0;
//}


//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d,%d", &a, &b);
//    int c = a * b;
//    int d = 0;
//    while (d = a % b)
//    {
//        a = b;
//        b = d;
//    }
//    printf("gys=%d,gbs=%d\n", b, c / b);
//    return 0;
//}



//int main()
//{
//    int year = 0;
//    int month = 0;
//    int day = 0;
//    int days = 0;
//    int i = 0;
//    scanf("%d%d%d", &year, &month, &day);
//    for (i = 1; i < month; i++)
//    {
//        switch (i)
//        {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            days += 31;
//            break;
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            days += 30;
//            break;
//        case 2:
//            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//                days += 29;
//            else
//                days += 28;
//            break;
//        default:
//            printf("Error\n");
//            break;
//        }
//    }
//    printf("%d\n", days + day);
//    return 0;
//}



//int main()
//{
//    int n = 0;
//    int i = 0;
//    scanf("%d", &n);
//    for (i = 2; i <= n; i++)
//    {
//        int j = 0;
//        int sum = 1;
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//                sum += j;
//        }
//        if (sum == i)
//            printf("%d\n", sum);
//    }
//    return 0;
//}



//int main()
//{
//    int x = 0;
//    int y = 0;
//    int z = 0;
//    for (x = 1; x <= 20; x++)
//    {
//        for (y = 1; y <= 33; y++)
//        {   
//            z = 100 - x - y;
//            if ((15 * x + 9 * y + z) == 300)
//            {
//                printf("%5d%5d%5d", x, y, z);
//                printf("\n");
//            }   
//        }
//    }
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int x = 0;
//    int y = 0;
//    int z = 0;
//    int count = 0;
//    for (z = 1; z <= n / 5; z++)
//    {
//        for (y = 1; y <= n / 2; y++)
//        {   
//            for (x = 1; x <= n; x++)
//            {
//                if (5 * z + 2 * y + x == n)
//                    count++;
//            }
//        }
//    }
//    printf("count=%d\n", count);
//    return 0;
//}



//int main()
//{
//    int i = 0;
//    int j = 0;
//    for (i = 1; i <= 7; i++)
//    {   
//        for (j = 0; j < 30 - i; j++)
//        {
//            printf(" ");
//        }
//        for (j = 0; j < 2 * i - 1; j++)
//        {
//            printf("%d", i);
//        }
//        printf("\n");
//    }
//    int k = 7;
//    for (i = 0; i < 6; i++)
//    {
//        k--;
//        for (j = 0; j < 24 + i; j++)
//        {
//            printf(" ");
//        }
//        for (j = 0; j < 11 - 2 * i; j++)
//        {
//            printf("%d", k);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//int main()
//{
//    int i = 0;
//    int count = 0;
//    int sum = 0;
//    for (i = 2; i <= 200; i += 2)
//    {
//        if ((i % 7 == 0) || (i % 17 == 0))
//        {
//            printf("%6d", i);
//            sum += i;
//            count++;
//        }
//        if (count == 5)
//        {
//            printf("\n");
//            count = 0;
//        }
//    }
//    printf("\n");
//    printf("sum=%d\n", sum);
//    return 0;
//}

//int is_prime(int k)
//{
//    int i = 0;
//    for (i = 2; i <= sqrt(k); i++)
//    {
//        if (k % i == 0)
//            return 0;
//    }
//    return 1;
//}

//int main()
//{
//    int n = 0;
//    int m = 0;
//    int i = 0;
//    scanf("%d,%d", &n, &m);
//
//    for (i = n; i > 0; i--)
//    {
//        if (m == 0)
//            break;
//        int ret = is_prime(i);
//        if (ret == 1)
//        {
//            printf("%d\n", i);
//            m--;
//        }   
//    }
//    return 0;
//}



//int main()
//{
//    float r1 = 0.0f;
//    float r2 = 0.0f;
//    scanf("%f%f", &r1, &r2);
//    printf("%.2f", (r1 * r2) / (r1 + r2));
//    return 0;
//}



int main()
{
    int n = 0;
    int i = 0;
    double a = 0.0;
    double b = 0.0;
    scanf("%d", &n);
    scanf("%lf", &a);
    b = a;
    double k = 0.0;
    for (i = 0; i < n - 1; i++)
    {
        scanf("%lf", &k);
        if (a < k)
            a = k;
        if (b > k)
            b = k;
    }
    printf("%.2lf\n", a - b);
    return 0;
}