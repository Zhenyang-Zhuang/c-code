#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>


//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	int j = 0;
//	while (j < i)
//	{
//		while (j < i && arr[j] % 2 != 0)
//			j++;
//		while (j < i && arr[i] % 2 == 0)
//			i--;
//		if (j < i)
//		{
//			int tmp = arr[j];
//			arr[j] = arr[i];
//			arr[i] = tmp;
//			j++;
//			i--;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



int main()
{
	int arr1[] = { 1,3,5,7,9};
	int arr2[] = { 2,4,6,8,10 };
	int arr3[10] = { 0 };
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < sz1 && j < sz2)
	{
		if (arr2[j] > arr1[i])
		{
			arr3[k] = arr1[i];
			k++;
			i++;
		}
		else
		{
			arr3[k] = arr2[j];
			k++;
			j++;		
		}
	}
	if (i == sz1)
	{
		for(i = j;i < sz2;i++)
		{
			arr3[k] = arr2[i];
			k++;
			i++;
		}
	}
	else
	{
		for (j = i; j < sz1; j++)
		{
			arr3[k] = arr2[j];
			k++;
			j++;
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr3[i]);
	}
	return 0;
}