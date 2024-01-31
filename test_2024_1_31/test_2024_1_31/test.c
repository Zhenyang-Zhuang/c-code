#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %2d ", i,j,i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


void bubble_sort(int arr[3][4], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[0][j] < arr[0][j + 1])
			{
				int tmp = arr[0][j];
				arr[0][j] = arr[0][j + 1];
				arr[0][j + 1] = tmp;
			}
		}
	}
}




int main()
{
	int arr[3][4] = {1,4,3,7,5,5,6,0,9,2};
	int sz = sizeof(arr) / sizeof(arr[0][0]);
	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	bubble_sort(arr,sz);
	return 0;
}

//int main()
//{
//	int arr[3][4] = { 0 };
//	int row = sizeof(arr) / sizeof(arr[0]);
//	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
//	printf("%d %d", row, col);
//	return 0;
//}