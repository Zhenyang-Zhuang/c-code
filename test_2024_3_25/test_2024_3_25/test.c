#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//void print(int arr[], int right)
//{
//	int i = 0;
//	for (i = 0; i < right; i++)
//	{
//		printf("%5d", arr[i]);
//	}
//	printf("\n");
//}
//
//
//
//void Insert(int arr[], int x, int n, int len)
//{
//	int i = 0;
//	if (n < 0 || n > len - 2)
//	{
//		arr[len - 1] = x;
//	}
//	else
//	{
//		for (i = len - 1; i > n; i--)
//		{
//			arr[i] = arr[i - 1];
//		}
//		arr[n] = x;
//	}
//	
//	for (i = 0; i < len; i++)
//	{
//		printf("%5d", arr[i]);
//	}
//	printf("\n");
//}
//
//
//void Delete(int arr[], int n,int len)
//{
//	int i = 0;
//	if (n < 0 || n > len - 1)
//	{
//		for (i = 1; i < len; i++)
//		{
//			arr[i - 1] = arr[i];
//		}
//	}
//	else
//	{
//		for (i = n + 1;i < len;i++)
//		{
//			arr[i - 1] = arr[i];
//		}
//	}
//	for (i = 0; i < len - 1; i++)
//	{
//		printf("%5d", arr[i]);
//	}
//}
//
//
//
//int main()
//{
//	int arr[11] = { 1,2,3,4,5,6,7,8,9,0 };
//	int x1 = 0;
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d %d", &x1, &n1, &n2);
//	print(arr, 10);
//	Insert(arr, x1, n1,11);
//	Delete(arr, n2, 11);
//	return 0;
//}


//int Search(int arr[], int x,int n,int* big_count,int* small_count)
//{
//	int i = 0;
//	int flag = -1;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == x)
//		{
//			flag = i;
//		}
//		else if (arr[i] > x)
//		{
//			(*big_count)++;
//		}
//		else
//		{
//			(*small_count)++;
//		}
//	}
//	return flag;
//}


//int main()
//{
//	int n = 0;
//	int x = 0;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	int i = 0;
//	int big_count = 0;
//	int small_count = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &(*(arr + i)));
//	}
//	scanf("%d", &x);
//	int ret = Search(arr, x, n, &big_count, &small_count);
//	printf("%d\n%d\n%d", ret, big_count, small_count);
//	return 0;
//}



//int main()
//{
//	int a[20] = { 81,55,102,84,204,105,56,85,58,202,101,83,104,103,82,201,59,203,57,205 };
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 20; i++)
//	{
//		count++;
//		if (a[i] >= 0 && a[i] <= 59)
//		{
//			printf("%5d", -1);
//		}
//		else if (a[i] >= 60 && a[i] <= 100)
//		{
//			printf("%5d", a[i]);
//		}
//		else if (a[i] > 100 && a[i] <= 200)
//		{
//			printf("%5d", -2);
//		}
//		else
//		{
//			printf("%5d", -3);
//		}
//		if (count == 5)
//		{
//			printf("\n");
//			count = 0;
//		}
//	}
//	return 0;
//}





//int main()
//{
//	char str[80] = { 0 };
//	char ch = 0;
//	scanf("%s", str);
//	char* p = str;
//	int data[26] = { 0 };
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		data[i] = 0;
//	}
//	while (*p != '\0')
//	{
//		if (isalpha(*p))
//		{
//			if (isupper(*p))
//			{
//				int tmp = *p - 65;
//				data[tmp]++;
//			}
//			else
//			{
//				int tmp = *p - 97;
//				data[tmp]++;
//			}
//		}
//		p++;
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		if (data[i] != 0)
//		{
//			printf("%c is %d\n", i + 97, data[i]);
//		}
//	}
//	return 0;
//}

int IsPrimer(int num)
{
	int i = 0;
	int flag = 0;
	for (i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			break;
		}
	}
	if (i > num / 2)
	{
		flag = 1;
	}
	return flag;
}

void Swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

//int main()
//{
//	int a[100] = { 0 };
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	scanf("%d", &n);
//	j = n - 1;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	i = 0;
//	while (i < j)
//	{
//		while (i < j && !IsPrimer(a[i]))
//		{
//			i++;
//		}
//		while (i < j && IsPrimer(a[j]))
//		{
//			j--;
//		}
//		if (i < j)
//		{
//			Swap(&a[i], &a[j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%5d", a[i]);
//	}
//	return 0;
//}


//void reverse(int a[], int left, int right)
//{
//	while (left < right)
//	{
//		int tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//		left++;
//		right--;
//	}
//}



//int main()
//{
//	int a[100] = { 0 };
//	int n = 0;
//	int k = 0;
//	int i = 0;
//	scanf("%d", &k);
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	k %= n;
//	reverse(a, 0, n - k - 1);
//	reverse(a, n - k, n - 1);
//	reverse(a, 0, n - 1);
//	for (i = 0; i < n; i++)
//	{
//		printf("%3d", a[i]);
//	}
//	return 0;
//}


void Sort(int s[], int len)
{
	int i = 0;
	for (i = 0; i < len - 1; i++)
	{
		int j = 0;
		for (j = 0; j < len - 1 - i; j++)
		{
			if (s[j] > s[j + 1])
			{
				int tmp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = tmp;
			}
		}
	}
}


int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	int s1[10] = { 10,21,34,12,15,8,17,20,23,30 };
	int s2[10] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &s2[i]);
	}
	Sort(s1, 10);
	Sort(s2, n);
	i = 0;
	while (i < 10 && j < n)
	{
		if (s1[i] == s2[j])
		{
			printf("%5d", s1[i]);
			i++;
			j++;
		}
		else if (s1[i] > s2[j])
		{
			j++;
		}
		else
		{
			i++;
		}
	}
	return 0;
}
