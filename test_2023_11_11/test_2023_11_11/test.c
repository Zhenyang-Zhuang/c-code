#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

//int main()
//{
//	int hour = 0;
//	int minute = 0;
//	int k = 0;
//	scanf("%d:%d %d", &hour, &minute, &k);
//	hour += k / 60;
//	minute += k % 60;
//	while (hour > 23 || minute > 59)
//	{
//		hour += minute / 60;
//		minute %= 60;
//		hour %= 24;
//	}
//	printf("%02d:%02d", hour, minute);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int time = 0;
//	scanf("%d", &n);
//	time = (n / 12) * 4 + 2;
//	printf("%d\n", time);
//	return 0;
//}



//int main()
//{
//	long long n = 0;
//	long long m = 0;
//	long long tmp = 0;
//	scanf("%lld%lld", &n, &m);
//	long long x = m * n;
//	while (tmp = n % m)
//	{
//		n = m;
//		m = tmp;
//	}
//	printf("%lld\n", m + (x / m));
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int j = 1;
//	scanf("%d", &n);
//	while (n)
//	{
//		if ((n % 10) % 2 == 0)
//		{
//			sum += 0 * j;
//		}
//		else
//		{
//			sum += 1 * j;
//		}
//		n /= 10;
//		j *= 10;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//int func(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return func(n - 1) + func(n - 2);
//	}
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = func(n);
//	printf("%d\n", ret);
//	return 0;
//}




//int func(int n)
//{
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	if (n == 1)
//	{
//		return a;
//	}
//	else if (n == 2)
//	{
//		return b;
//	}
//	else
//	{
//		for (int i = 0; i < n - 2; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = func(n);
//	printf("%d\n", ret);
//	return 0;
//}




//int main()
//{
//	int arr[10000] = { 0 };
//	int n = 0;
//	int k = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &k);
//		arr[k] = k;
//	}
//	for (int i = 0; i < 10000; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//}



//int main()
//{
//	char str[8000] = { 0 };
//	long long count_c = 0;
//	long long count_h = 0;
//	long long count_n = 0;
//	scanf("%s", str);
//	int len = strlen(str);
//	for (int i = 0; i < len; i++)
//	{
//		if (str[i] == 'C')
//			count_c++;
//		else if (str[i] == 'H')
//			count_h += count_c;
//		else if(str[i] == 'N')
//			count_n += count_h;
//	}
//	printf("%d\n", count_n);
//	return 0;
//}



//int main()
//{
//	float a, b, c;
//	scanf("%f%f%f", &a, &b, &c);
//	printf("%.2f %.2f", (a + b + c), (a + b + c) / 3);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int max = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		scanf("%d", &n);
//		if (max < n)
//		{
//			max = n;
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int sum = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &n);
//		sum += n;
//	}
//	if (sum / 3 >= 60)
//	{
//		printf("NO\n");
//	}
//	else
//	{
//		printf("YES\n");
//	}
//	return 0;
//}



//int main()
//{
//	int score = 0;
//	scanf("%d", &score);
//	if (score >= 90 && score <= 100)
//	{
//		printf("A\n");
//	}
//	else if (score >= 80 && score <= 89)
//	{
//		printf("B\n");
//	}
//	else if (score >= 70 && score <= 79)
//	{
//		printf("C\n");
//	}
//	else if (score >= 60 && score <= 69)
//	{
//		printf("D\n");
//	}
//	else if (score >= 0 && score <= 59)
//	{
//		printf("E\n");
//	}
//	else
//	{
//		printf("F\n");
//	}
//	return 0;
//}




//int main()
//{
//	int arr[10][10] = { 0 };
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			sum += arr[i][j];
//		}
//		if (sum / 3 < 60)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int m = 0;
//	int max = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		if (max < m)
//		{
//			max = m;
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int tmp = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		tmp *= i;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int max3(int a, int b, int c)
//{
//	int max = a;
//	if (max < b)
//	{
//		max = b;
//	}
//	if (max < c)
//	{
//		max = c;
//	}
//	return max;
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	float m = max3(a + b, b, c) * 1.0 / (max3(a, b + c, c) + max3(a, b, b + c));
//	printf("%.2f\n", m);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int arr[100] = { 0 };
//	int x = 0;
//	int count = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &x);
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == x)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}



//int main()
//{
//	printf("printf(\"Hello world!\\n\"); \n");
//	printf("cout << \"Hello world!\" << endl;");
//	return 0;
//}



//int main()
//{
//	float a, b, c, d, sum;
//	scanf("%f%f%f%f", &a, &b, &c, &d);
//	sum = a * 0.2 + b * 0.1 + c * 0.2 + d * 0.5;
//	printf("%.1f", sum);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n--)
//	{
//		printf("Happy new year!Good luck!\n");
//	}
//	return 0;
//}



//int main()
//{
//	int score = 0;
//	int max = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &score);
//		if (max < score)
//		{
//			max = score;
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}



//int main()
//{
//	int count = 0;
//	for (int i = 100; i <= 999; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int k = 0;
//	int arr[1001] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &k);
//		arr[k] = k;
//	}
//	for (int i = 0; i < 1001; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int arr[10][10] = { 0 };
//	int flag = 1;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				flag = -1;
//			}
//		}
//	}
//	if (flag == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}




//struct TDate
//{
//	int day;
//	int month;
//	int year;
//};
//
//
//int main()
//{
//	struct TDate d = { 0 };
//	scanf("%d%d%d", &d.year, &d.month, &d.day);
//	printf("%d/%d/%d\n", d.day, d.month, d.year);
//	return 0;
//}



//int main() {
//    int c = 1;//用于控制最后的尾巴（数柄）；
//    int n = 0;//层数
//    scanf("%d", &n);
//    int d = 3 * n;//a和d用于控制最开始的空白数；
//    for (int i = 1; i <= n; i++) {
//        for (int a = d - 1; a > 0; a--) { //
//            printf(" ");
//        }
//        for (int k = 1; k <= i; k++) { //k代表一行打印多少个“*     ”
//            printf("*     ");//把第一层当作“*     ”来打印
//        }
//        printf("\n");
//        for (int a = d - 2; a > 0; a--) { //同上
//            printf(" ");
//        }
//        for (int k = 1; k <= i; k++) {
//            printf("* *   ");
//        }
//        printf("\n");
//        for (int a = d - 3; a > 0; a--) { //同上
//            printf(" ");
//        }
//        for (int k = 1; k <= i; k++) {
//            printf("* * * ");
//        }
//        printf("\n");
//        d = d - 3;
//    }
//    while (c <= n) {
//        for (int i = 1; i <= (6 * n - 1) / 2; i++) {
//            printf(" ");
//        }
//        printf("*\n");
//        c++;
//    }
//    return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int d = n * 3;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < d - 1; j++)
//		{
//			printf(" ");
//		}
//		for (int a = 0; a <= i; a++)
//		{
//			printf("*     ");
//		}
//		printf("\n");
//		for (int j = 0; j < d - 2; j++)
//		{
//			printf(" ");
//		}
//		for (int a = 0; a <= i; a++)
//		{
//			printf("* *   ");
//		}
//		printf("\n");
//		for (int j = 0; j < d - 3; j++)
//		{
//			printf(" ");
//		}
//		for (int a = 0; a <= i; a++)
//		{
//			printf("* * * ");
//		}
//		printf("\n");
//		d = d - 3;
//		if (i == n - 1)
//		{
//			for (int k = 0; k < n; k++)
//			{
//				for (int m = 0; m < n * 3 - 1; m++)
//				{
//					printf(" ");
//				}
//				printf("*\n");
//			}
//		}
//	}
//}



int main() {
    int n;
    scanf("%d", &n);
    int i, j, k;
    int row = 3;
    int col = 5;
    // 行数 = 3 * pow(2,n-1) 列数 = 5 * pow(2,n-1)
    char ch[400][800] = { "  *  ", " * * ", "* * *" };
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < row; j++) {
            for (k = 0; k < col; k++) {
                ch[j + row][k] = ch[j][k]; // 左下角的图形复制
                ch[j + row][k + 1 + col] = ch[j][k];
            }
        }
        // 清空原来的三角位置
        for (j = 0; j < row; j++) {
            for (k = 0; k < col; k++)
                ch[j][k] = ' ';
        }
        // 将左下角的三角复制到两个中间去
        for (j = 0; j < row; j++) {
            for (k = 0; k < col; k++)
                ch[j][k + row] = ch[j + row][k];
        }
        row *= 2;           // 当前的行数
        col = col * 2 + 1;  // 当前的列数
    }
    // 打印出来
    for (j = 0; j < row; j++) {
        for (k = 0; k < col; k++) {
            if (ch[j][k] == '*')
                printf("%c", ch[j][k]);
            else
                printf(" ");
        }
        printf("\n");
    }
    // 打印树干
    for (j = 0; j < n; j++) {
        for (k = 0; k < row - 1; k++)
            printf(" ");
        printf("*\n");
    }
    return 0;
}






