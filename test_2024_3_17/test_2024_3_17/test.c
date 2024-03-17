#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>

//直接插入排序算法
void InsertSort(int arr[], int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i < n; i++)
	{
		if (arr[i] < arr[i - 1])
		{
			int tmp = arr[i];
			for (j = i - 1; j >= 0 && tmp < arr[j]; j--)
			{
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = tmp;
		}
	}
}

//折半插入排序算法
void BinaryInsertSort(int arr[], int n)
{
	int i = 0;
	for (i = 1; i < n; i++)
	{
		int tmp = arr[i];
		int left = 0;
		int right = i - 1;
		while (left <= right)
		{
			int mid = (left + right) / 2;
			if (arr[mid] > tmp)
			{
				right = mid - 1;
			}
			else
			{
				left = mid + 1;//保持稳定性
			}
		}
		int j = 0;
		for (j = i - 1; j >= left; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = tmp;
	}
}

//希尔排序
//void ShellSort(int arr[], int n)
//{
//	int dk = 0;
//	int i = 0;
//	for (dk = n / 2; dk >= 1; dk /= 2)
//	{
//		for (i = dk; i < n; i++)
//		{
//			if (arr[i] < arr[i - dk])
//			{
//				int tmp = arr[i];
//				int j = 0;
//				for (j = i - dk; j >= 0 && tmp < arr[j]; j -= dk)
//				{
//					arr[j + dk] = arr[j];
//				}
//				arr[j + dk] = tmp;
//			}
//		}
//	}
//}



//void ShellSort(int arr[], int n)
//{
//	int dk = 0;
//	for (dk = n / 2; dk >= 1; dk /= 2)
//	{
//		int k = 0;
//		for (k = 0; k < dk; k++)
//		{
//			int i = 0;
//			for (i = k + dk; i < n; i += dk)
//			{
//				if (arr[i] < arr[i - dk])
//				{
//					int tmp = arr[i];
//					int j = 0;
//					for (j = i - dk; j >= 0 && tmp < arr[j]; j -= dk)
//					{
//						arr[j + dk] = arr[j];
//					}
//					arr[j + dk] = tmp;
//				}
//			}
//		}
//	}
//}


//void BubbleSort(int arr[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		bool flag = false;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = true;
//			}
//		}
//		if (flag == false)
//		{
//			return;
//		}
//	}
//}



void BubbleSort(int arr[], int n)
{
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		bool flag = false;
		int j = 0;
		for (j = n - 1; j > i; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
				flag = true;
			}
		}
		if (flag == false)
		{
			return;
		}
	}
}



int main()
{
	int arr[10] = { 2,7,4,6,3,8,9,5,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	/*InsertSort(arr, sz);*/
	/*BinaryInsertSort(arr, sz);*/
	/*ShellSort(arr, sz);*/
	BubbleSort(arr, sz);
	return 0;
}