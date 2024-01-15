#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int n = 0;
//	int sum = 1;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d", sum);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int sum = 1;
//		for (j = 1; j <= i; j++)
//		{
//			sum *= j;
//		}
//		ret += sum;
//	}
//	printf("%d", ret);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	int ret = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//		ret += sum;
//	}
//	printf("%d", ret);
//	return 0;
//}

//二分查找算法
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 10;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int left = 0;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
			left = mid + 1;
		else if (arr[mid] > k)
			right = mid - 1;
		else
		{
			printf("找到了,下标是%d", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到");
	return 0;
}