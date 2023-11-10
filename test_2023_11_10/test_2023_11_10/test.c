#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int p[50] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n + 1; i++)
//	{
//		scanf("%d", &p[i]);
//	}
//	int tmp = n;
//	for (int i = n - 1; i >= 0; i--)
//	{
//		if (p[i] > p[tmp])
//		{
//			int m = p[i];
//			p[i] = p[tmp];
//			p[tmp] = m;
//			tmp--;
//		}
//	}
//	for (int i = 0; i < n + 1; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int p[100] = { 0 };
//	while (scanf("%d", &n) != EOF)
//	{
//		int count = 0;
//		for (int i = 2; i <= n; i++)
//		{
//			p[i - 2] = i;
//		}
//		for (int i = 2; i < n; i++)
//		{
//			for (int j = i - 1; j < n - 1; j++)
//			{
//				if (p[j] % i == 0)
//				{
//					p[j] = 0;
//				}
//			}
//		}
//		for (int i = 0; i <= n - 2; i++)
//		{
//			if (p[i] != 0)
//			{
//				printf("%d ", p[i]);
//			}
//			else
//			{
//				count++;
//			}
//		}
//		printf("\n%d", count);
//	}
//	return 0;
//}



//int main()
//{
//	int arr1[30][30] = { 0 };
//	int arr2[30][30] = { 0 };
//	int m = 0;
//	int n = 0;
//	float count = 0;
//	scanf("%d%d", &m, &n);
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//			{
//				count++;
//			}
//		}
//	}
//	printf("%.2f", (count / (m * n)) * 100);
//	return 0;
//}


//int main()
//{
//	char str1[10] = { 0 };
//	char str2[10] = { 0 };
//	while (scanf("%s%s", str1, str2) != EOF)
//	{
//		if (strcmp(str1, "admin") == 0 && strcmp(str2, "admin") == 0)
//		{
//			printf("Login Success!\n");
//		}
//		else
//		{
//			printf("Login Fail!\n");
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	printf("%d\n", (a + b - c) * d);
//	return 0;
//}



//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	if (x < 0)
//	{
//		y = 1;
//	}
//	else if (x == 0)
//	{
//		y = 0;
//	}
//	else
//	{
//		y = -1;
//	}
//	printf("%d\n", y);
//	return 0;
//}



//int main()
//{
//	int count = 0;
//	for (int i = 9; i <= 2019; i++)
//	{
//		int tmp = i;
//		while (tmp)
//		{
//			if (tmp % 10 == 9)
//			{
//				count++;
//				break;
//			}
//			else
//			{
//				tmp /= 10;
//			}
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		if (i % 2 == 0)
//		{
//			count++;
//		}
//	}
//	printf("%d %d", n - count, count);
//	return 0;
//}



//int main()
//{
//	float arr[30] = { 0 };
//	int n = 0;
//	float average = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%f", &arr[i]);
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				float tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		average += arr[i];
//	}
//	printf("%.2f %.2f %.2f", arr[n - 1], arr[0], average / 5);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int arr[20] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n + 1; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int tmp = n;
//	for (int i = n - 1; i >= 0; i--)
//	{
//		if (arr[i] > arr[tmp])
//		{
//			int m = arr[i];
//			arr[i] = arr[tmp];
//			arr[tmp] = m;
//			tmp--;
//		}
//	}
//	for (int i = 0; i < n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//int main()
//{
//	char password1[20] = { 0 };
//	char password2[20] = { 0 };
//	scanf("%s%s", password1, password2);
//	if (strcmp(password1, password2) == 0)
//	{
//		printf("same\n");
//	}
//	else
//	{
//		printf("different\n");
//	}
//	return 0;
//}



//int main()
//{
//	int arr[10][10] = { 0 };
//	int n = 0;
//	int m = 0;
//	int sum = 0;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (arr[i][j] > 0)
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	int count1 = 0;
//	int count2 = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] > 0)
//		{
//			count1++;
//		}
//		else if (arr[i] < 0)
//		{
//			count2++;
//		}
//	}
//	printf("positive:%d\nnegative:%d", count1, count2);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	printf("%d", sum);
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	printf("%d\n", arr[n - 1] - arr[0]);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	int f1 = 1;
//	int f2 = 1;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			f1 = 0;
//		}
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (arr[i] < arr[i + 1])
//		{
//			f2 = 0;
//		}
//	}
//	if (f1 || f2)
//	{
//		printf("sorted\n");
//	}
//	else
//	{
//		printf("unsorted\n");
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	int num = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &num);
//	for (i = 0; i < n; i++)
//	{
//		while (arr[i] == num)
//		{
//			for (j = i; j < n - 1; j++)
//			{
//				arr[j] = arr[j + 1];
//			}
//			if (i >= n - 1)
//			{
//				n--;
//				break;
//			}
//			n--;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int arr[20] = { 0 };
//	int tmp[50] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (tmp[arr[i]] == 0)
//		{
//			tmp[arr[i]] = 1;
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				arr[j] = 0;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
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
//	int m = 0;
//	int arr[50] = { 0 };
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n + m; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n + m - 1; i++)
//	{
//		for (int j = 0; j < n + m - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < n + m; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	float arr[5][5] = {0};
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		float sum = 0;
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%.1f ", arr[i][j]);
//			sum += arr[i][j];
//		}
//		printf("%.1f\n", sum);
//	}
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	int m = 0;
//	int x = 0;
//	int y = 0;
//	int arr[20][20] = { 0 };
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	scanf("%d%d", &x, &y);
//	printf("%d\n", arr[x - 1][y - 1]);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[20][20] = { 0 };
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int m = 0;
//	int x = 0;
//	int y = 0;
//	int arr[20][20] = { 0 };
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int max = arr[0][0];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				x = i;
//				y = j;
//			}
//		}
//	}
//	printf("%d %d", (x + 1), (y + 1));
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int m = 0;	
//	int arr1[20][20] = { 0 };
//	int arr2[20][20] = { 0 };
//	int flag = 1;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (arr1[i][j] != arr2[i][j])
//			{
//				flag = -1;
// 
//			}
//		}
//	}
//	if (flag == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int arr[20][20] = { 0 };
//	int flag = 1;
//	scanf("%d", &n);
	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}*/
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				flag = -1;
//				break;
//			}
//		}
//	}
//	if (flag == 1)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[20][20] = { 0 };
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int m = 0;
//	char ch = 0;
//	int a = 0;
//	int b = 0;
//	int k = 0;
//	int arr[20][20] = { 0 };
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	scanf("%d", &k);
//	for (int i = 0; i < k; i++)
//	{
//		getchar();
//		scanf("%c %d %d", &ch, &a, &b);
//		if (ch == 'r')
//		{
//			for (int j = 0; j < m; j++)
//			{
//				int tmp = arr[a - 1][j];
//				arr[a - 1][j] = arr[b - 1][j];
//				arr[b - 1][j] = tmp;
//			}
//		}
//		else if (ch == 'c')
//		{
//			for (int j = 0; j < n; j++)
//			{
//				int tmp = arr[j][a - 1];
//				arr[j][a - 1] = arr[j][b - 1];
//				arr[j][b - 1] = tmp;
//			}
//		}
//
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int arr[30][30] = { 1 };
//	scanf("%d", &n);
//	for (int i = 1; i < n; i++)
//	{
//		arr[i][0] = 1;
//		for (int j = 1; j <= i ; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int arr[30] = { 1 };
//	scanf("%d", &n);
//	printf("%5d\n", arr[0]);
//	for (int i = 1; i < n; i++)
//	{
//		printf("%5d", 1);
//		for (int j = i; j > 0 ; j--)
//		{
//			arr[j] += arr[j - 1];
//		}
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%5d", arr[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//char iswin(char arr[3][3], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] != 'O')
//		{
//			return arr[i][0];
//		}
//	}
//	for (int j = 0; j < col; j++)
//	{
//		if (arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j] && arr[0][j] != 'O')
//		{
//			return arr[0][j];
//		}
//	}
//	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != 'O')
//	{
//		return arr[0][0];
//	}
//	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != 'O')
//	{
//		return arr[0][2];
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[3][3] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%c", &arr[i][j]);
//			getchar();
//		}
//		
//	}
//	char ret = iswin(arr, 3, 3);
//	if (ret == 'K')
//	{
//		printf("KiKi wins!\n");
//	}
//	else if (ret == 'B')
//	{
//		printf("BoBo wins!\n");
//	}
//	else
//	{
//		printf("No winner!\n");
//	}
//	return 0;
//}


//int main()
//{
//	long long n = 0;
//	long long sum = 0;
//	long long i = 1;
//	scanf("%d", &n);
//	while (n)
//	{
//		sum += (n % 6) * i;
//		n /= 6;
//		i *= 10;
//	}
//	printf("%lld\n", sum);
//	return 0;
//}



//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	long long  sum = (n * (1 + n)) / 2;
//	printf("%lld\n", sum);
//	return 0;
//}


