#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>
#include <errno.h>
#include <stddef.h>
#include <limits.h>
#include <ctype.h>
#define ROW 13
#define COL 13
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src)
//{
//
//}
//
//int main()
//{
//	char* (*pf) (char*, const char*) = my_strcpy;
//	char* (*pfArr[4]) (char*, const char*) = { my_strcpy };
//	return 0;
//}



//void menu()
//{
//	printf("******************************\n");
//	printf("***   1.Add       2.Sub   ****\n");
//	printf("****  3.Mul       4.Div   ****\n");
//	printf("*******    0.EXIT     ********\n");
//
//}
//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//
//
//
//void test()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int(*arr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请输入数字:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = arr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("请重新输入\n");
//		}
//	} while (input);
//}
//
//
//int main()
//{
//	test();
//	return 0;
//}


//int main()
//{
//	int a = 6;
//	float* p = (float*) & a;
//	printf("%d")
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a >= 2 && a <= 4)
//	{
//		printf("春天\n");
//	}
//	if (a >= 5 && a <= 7)
//	{
//		printf("夏天\n");
//	}
//
//	return 0;
//}




//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	switch (input)
//	{
//	case 2:
//	case 3:
//	case 4:
//		printf("春天\n");
//		break;
//	case 5:
//	case 6:
//	case 7:
//		printf("夏天\n");
//		break;
//	case 8:
//	case 9:
//	case 10:
//		printf("秋天\n");
//		break;
//	case 11:
//	case 12:
//	case 1:
//		printf("冬天\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	if((ch > 'A' && ch < 'Z') || (ch > 'a' && ch < 'z'));
//	{
//		printf("%c%c%c", ch + 1, ch, ch - 1);
//	}
//	printf("%c%c%c", ch + 1, ch, ch - 1);
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	int(*pl)(int, int) = Add;
//	int(*arr[4])(int, int) = { Add };
//	int(*(*pp)[4])(int,int) = &arr;
//	return 0;
//}


//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//
//int cmp_float(const void* e1, const void* e2)
//{
//	if (*(float*)e1 == *(float*)e2)
//	{
//		return 0;
//	}
//	else if (*(float*)e1 > *(float*)e2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}



//void test1()
//{
//	int i = 0;
//	int arr[] = { 5,7,3,10,9,2,4,6,1,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//void test2()
//{
//	int i = 0;
//	float f[] = { 5.0,7.0,3.0,10.0,9.0,2.0,4.0,6.0,1.0,8.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_int);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%lf ", f[i]);
//	}
//}
//
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	/*return ((struct stu*)e1)->age - ((struct stu*)e2)->age;*/
//	return (*(struct stu*)e1).age - (*(struct stu*)e2).age;
//}
//
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//void test3()
//{
//	int i = 0;
//	struct stu s[3] = { {"张三",15},{"李四",13},{"王五",19} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	/*test1();*/
//	/*test2();*/
//	test3();
//	return 0;
//}


//void swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//
//
//void bubble_sort(void* base, int sz, int width,int (*cmp)(void* e1,void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//int cmp_int(void* e1, void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//
////void test1()
////{
////	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
////}
//
//
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_s_by_age(void* e1, void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//
//
//
//
//
//void test2()
//{
//	struct stu s[3] = { {"张三",15},{"李四",13},{"王五",19} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]),cmp_s_by_age);
//}
//
//
//
//int main()
//{
//	/*test1();*/
//	test2();
//	return 0;
//}



//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a + 0));//8
//	printf("%d\n", sizeof(*a));//4
//	printf("%d\n", sizeof(a + 1));//8
//	printf("%d\n", sizeof(a[1]));//4
//	printf("%d\n", sizeof(&a));//8
//	printf("%d\n", sizeof(*&a));//16
//	printf("%d\n", sizeof(&a + 1));//8
//	printf("%d\n", sizeof(&a[0]));//8
//	printf("%d\n", sizeof(&a[0] + 1));//8
//	return 0;
//}


//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f',0};
//	printf("%s\n", arr);//随机值
////	printf("%d\n", strlen(arr + 0));//随机值
////	/*printf("%d\n", strlen(*arr));*/
////	/*printf("%d\n", strlen(arr[1]));*/
////	printf("%d\n", strlen(&arr));
////	printf("%d\n", strlen(&arr + 1));
////	printf("%d\n", strlen(&arr[0] + 1));
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr + 0));//4或8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4或8
//	//printf("%d\n", sizeof(&arr + 1));//4或8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4或8
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	/*printf("%d\n", strlen(*arr));//error
//	printf("%d\n", strlen(arr[1]));*///error
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";
//	//printf("%d\n", sizeof(p));//4或8
//	//printf("%d\n", sizeof(p + 1));//4或8
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//1
//	//printf("%d\n", sizeof(&p));//4或8
//	//printf("%d\n", sizeof(&p + 1));//4或8
//	//printf("%d\n", sizeof(&p[0] + 1)); //4或8
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//error
//	//printf("%d\n", strlen(p[0]));//error
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5
//	return 0;
//}


//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));//4或8
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4或8
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1));//4或8
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16
//	return 0;
//}


//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2,5
//	return 0;
//}


//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
//
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p);
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1],*ptr2);
//	return 0;
//}


//int test()
//{
//	int a = 1;
//	char* p = (char*) & a;
//	if (*p == 1)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//
//
//int main()
//{
//	int ret = test();
//	if (ret == 1)
//	{
//		printf("是大端\n");
//	}
//	else
//	{
//		printf("是小端\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}


//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}


//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}


//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}


//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *-- * ++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//FIRST
//	return 0;
//}


//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}



//void reverse(char* str)
//{
//	char* left = str;
//	char* right = str + my_strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}


//void reverse(char* str)
//{
//	assert(str != NULL);
//	int len = my_strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if(my_strlen(str + 1) >= 2)
//	{
//		reverse(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}




//int main()
//{
//	char arr[256] = { 0 };
//	scanf("%s", arr);
//	/*gets(arr);*/
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//int Add(int a, int n)
//{
//	int i = 0;
//	int num = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		num = num * 10 + 2;
//		sum += num;
//	}
//	return sum;
//}
//
//
//
//int main()
//{
//	int n = 0;
//	int a = 0;
//	scanf("%d%d",&a,&n);
//	int sum = Add(a, n);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int count = 0;
//		int tmp = i;
//		int sum = 0;
//		while (tmp != 0)
//		{
//			tmp /= 10;
//			count++;
//		}
//		tmp = i;
//		while (tmp != 0)
//		{
//			int ret = pow((tmp % 10), count);
//			sum += ret;
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf("%c",' ');
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("%c",'*');
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	total = money;
//	empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}


//void move(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] % 2 == 0)
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//
//
//
////void move(int arr[], int sz)
////{
////	int i = 0;
////	int left = 0;
////	int right = sz - 1;
////	while ()
////	{
////		
////	}
////}
//
//
//
//int main()
//{
//	int arr[] = { 1,3,5,7,9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}




//void left_move(char* p,int k)
//{
//	assert(p != NULL);
//	int i = 0;
//	int len = strlen(p);
//	char* start = p;
//	for (i = 0; i < k; i++)
//	{
//		
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			int tmp = *(p + j);
//			*(p + j) = *(p + j + 1);
//			*(p + j + 1) = tmp;		
//		}
//	}
//}

//ABCD


//void reverse(char* p1, char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	while (p1 < p2)
//	{
//		int tmp = *p1;
//		*p1 = *p2;
//		*p2 = tmp;
//		p1++;
//		p2--;
//	}
//}
//
//
//
//void left_move(char* str, int k)
//{
//	assert(str != NULL);
//	int len = strlen(str);
//	assert(k <= len);
//	reverse(str, str + k - 1);
//	reverse(str + k, str + len - 1);
//	reverse(str, str + len - 1);
//}
//
////abcdef
////bcdefa
//
//
//
//int is_left_move(const char* s2, char* s1)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len ; i++)
//	{
//		left_move(s1, 1);
//		if (strcmp(s1,s2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//
////int main()
////{
////	int k = 0;
////	char str[] = "abcdef";
////	scanf("%d", &k);
////	left_move(str,k);
////	printf("%s\n", str);
////	return 0;
////}
//
//int main()
//{
//	char s1[] = "abcdefg";
//	char s2[] = "abcdefg";
//	int ret = is_left_move(s2, s1);
//	if (ret == 1)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}



//int is_left_move(char* s1,char* s2)
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	strncat(s1, s1,len1);
//	char* ret = strstr(s1, s2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//
//
//
//
//int main()
//{
//	char s1[30] = "abcdef";
//	char s2[] = "bcde";
//	int ret = is_left_move(s1, s2);
//	if (ret == 1)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}



//int FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x < row && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			printf("下标是%d%d\n", x, y);
//			return 1;
//		}
//	}
//	return 0;
//}


//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	
//	while (x < *px && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//
//	}
//	return 0;
//}
//
//
//
//
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{2,3,4},{4,5,6} };
//	int k = 6;
//	int x = 3;
//	int y = 3;
//	int ret = FindNum(arr,k,&x,&y);
//	if (ret == 1)
//	{
//		printf("找到了,下标是%d %d\n",x,y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//递归
//int my_strlen(const char* str)
//{
// 
//	while (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//}


//指针-指针
//int my_strlen(char* str)
//{
//	int start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}


//计数器
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}

//int main()
//{
//	char str[] = "abcdefg";
//	int len = my_strlen(str);
//	printf("%d\n", len);
//	return 0;
//}


//char* my_strcpy(char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	char* start = str1;
//	//拷贝str2指向的字符串到str1指向的空间，包含'\0'
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	//返回目标空间的起始地址
//	return start;
//}





//int main()
//{
//	char s1[] = "abcdef";
//	char s2[] = "bit";
//	my_strcpy(s1, s2);
//	printf("%s\n", s1);
//	return 0;
//}


//char* my_strcat(char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	char* start = str1;
//	while (*str1 != '\0')
//	{
//		str1++;
//	}
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return start;
//}







//int main()
//{
//	char s1[20] = "abcdef";
//	char s2[] = "bit";
//	my_strcat(s1, s2);
//	printf("%s\n", s1);
//}


//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	while (*str1 != '\0' || *str2 != '\0')
//	{
//		if (*str1 == *str2)
//		{
//			str1++;
//			str2++;
//		}
//		else if (*str1 > *str2)
//		{
//			return *str1 - *str2;
//		}
//		else
//		{
//			return *str1 - *str2;
//		}
//	}
//	return 0;
//}



//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}


//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "abcef";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	char s1[] = "helloeeee\0xxxxxxx";
//	char s2[] = "bit";
//	strcpy(s1, s2, 3);
//	return 0;
//}


//int main()
//{
//	const char* p1 = "hello";
//	const char* p2 = "helle";
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	return 0;
//}


//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = p1;
//	if (*p2 == '\0')
//	{
//		return p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	
//}



//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* str1 = NULL;
//	char* str2 = NULL;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return p1;
//	}
//	while (*cur)
//	{
//		str1 = cur;
//		str2 = (char*)p2;
//		while (*str2 && (*str1 == *str2))
//		{
//			str1++;
//			str2++;
//		}
//		if (*str2 == '\0')
//		{
//			return cur;
//		}
//		if (*str1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;
//}


//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* str1 = NULL;
//	char* str2 = NULL;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		str1 = cur;
//		str2 = (char*)p2;
//		while ((*str2) && (*str1 == *str2))
//		{
//			str1++;
//			str2++;
//		}
//		if (*str2 == '\0')
//		{
//			return cur;
//		}
//		if (*str1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;
//}



//int main()
//{
//	const char* p1 = "abbbcdef";
//	const char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//int main()
//{
//	char str1[] = "abc@def@.hij";
//	char str2[30] = { 0 };
//	char* p = "@.";
//	strcpy(str2, str1);
//	/*char* ret = strtok(str2, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	if (ret == NULL)
//	{
//		printf("hehe\n");
//	}*/
//	for (char* ret = strtok(str2, p); ret != NULL;ret = strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		char* str = strerror(errno);
//		printf("%s\n", str);
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}



//struct s
//{
//	char name[20];
//	int age;
//};
//
//
//
//void* my_memcpy(void* p1, const void* p2, int num)
//{
//	assert(p1 && p2);
//	void* start = p1;
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		*((char*)p1) = *((char*)p2);
//		((char*)p1)++;
//		((char*)p2)++;
//	}
//	return start;
//}



//int main()
//{
//	/*int arr1[] = {1,2,3,4,5};
//	int arr2[20] = { 0 };*/
//	struct s arr3[3] = { {"张三",18},{"李四",16},{"王五",15}};
//	struct s arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	
//	return 0;
//}


//void* my_memmove(void* dest, const void* src, int num)
//{
//	assert(dest && src);
//	void* start = dest;
//	int i = 0;
//	if (dest > src)
//	{
//		for (i = 0; i < num; i++)
//		{
//			*((char*)dest + num - 1) = *((char*)src + num - 1);
//			--(char*)dest;
//			--(char*)src;
//		}
//	}
//	else
//	{
//		for (i = 0; i < num; i++)
//		{
//			*((char*)dest) = *((char*)src);
//			((char*)dest)++;
//			((char*)src)++;
//		}
//	}
//	return dest;
//}




//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr, arr + 2, 5 * sizeof(arr[0]));
//	return 0;
//}



//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,4,6 };
//	int ret = memcmp(arr1, arr2, 20);
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	char arr[10] = "0";
//	memset(arr, '*', 10);
//	return 0;
//}


//int main()
//{
//	char str1[50];
//	char str2[20];
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	strncat(str1, str2, 16);
//	puts(str1);
//	return 0;
//}


//int main()
//{
//	char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
//	int n;
//	puts("Looking for R2 astromech droids...");
//	for (n = 0; n < 3; n++)
//		if (strncmp(str[n], "R2xx", 2) == 0)
//		{
//			printf("found %s\n", str[n]);
//		}
//	return 0;
//}


//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//	pch = strstr(str, "simple");
//	strncpy(pch, "sample", 6);
//	puts(str);
//	return 0;
//}


//int main()
//{
//	char* p = "zhangpengwei...bitedu.tech";
//	const char* sep = ".@";
//	char arr[30];
//	char* str = NULL;
//	strcpy(arr, p);//将数据拷贝一份，处理arr数组的内容
//	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//}

//struct {
//	char name[40];
//	int age;
//} person, person_copy;
//int main()
//{
//	char myname[] = "Pierre de Fermat";
//	/* using memcpy to copy string: */
//	memcpy(person.name, myname, strlen(myname) + 1);
//	person.age = 46;
//	/* using memcpy to copy structure: */
//	memcpy(&person_copy, &person, sizeof(person));
//	printf("person_copy: %s, %d \n", person_copy.name, person_copy.age);
//	return 0;
//}


//int main()
//{
//	char buffer1[] = "DWgaOtP12df0";
//	char buffer2[] = "DWGAOTP12DF0";
//	int n;
//	n = memcmp(buffer1, buffer2, sizeof(buffer1));
//	if (n > 0) printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
//	else if (n < 0) printf("'%s' is less than '%s'.\n", buffer1, buffer2);
//	else printf("'%s' is the same as '%s'.\n", buffer1, buffer2);
//	return 0;
//}


//struct stu
//{
//	char name[20];
//	int age;
//}s1 = { "张三",18 }, s2 = {"李四",16};
//
//
//
//int main()
//{
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s2.name);
//	printf("%d\n", s2.age);
//	return 0;
//}


//struct stt
//{
//	char name[20];
//	int age;
//};

//struct stu
//{
//	char name[20];
//	int age;
//	struct stt s2;
//};
//
//int main()
//{
//	struct stu s1 = { "李四",18,{"张三",16} };
//	struct stu* p = &s1;
//	printf("%s\n", p->s2.name);
//	return 0;
//}


//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct Node));
//	return 0;
//}


//struct s1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct s2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct s1 s1 = { 0 };
//	struct s2 s2 = { 0 };
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//	return 0;
//}



//struct S
//{
//	char a;
//	int b;
//	double c;
//};
//
//int main()
//{
//	int ret = offsetof(struct S, c);
//	printf("%d\n", ret);
//	return 0;
//}



//typedef struct Node
//{
//	int data;
//	struct Node* p;
//}Node;
//
//
//int main()
//{
//	Node* ps = NULL;
//	return 0;
//}



//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	/*enum Sex s = MALE;*/
//	/*enum Color c = 1;*/
//	/*printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	printf("%d %d %d\n", RED,GREEN,BLUE);*/
//	return 0;
//}


//union un
//{
//	char a;
//	int b;
//};


//int main()
//{
//	union un u;
//	/*printf("%d\n", sizeof(u));*/
//	u.b = 1;
//	if (u.a == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}



//int check_sys()
//{
//	union un
//	{
//		char a;
//		int b;
//	}u;
//	u.b = 1;
//	return u.a;
//}
//
//
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//int main()
//{
//	char c = 'a';
//	char c1 = 129;
//	printf("%d\n", c);
//	printf("%c\n", c1);
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}



//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}



/*nt main()
{
	int* p = (int*)malloc(20);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}
	int* p1 = (int*)realloc(p, 40);
	if (p1 != NULL)
	{
		p = p1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p1 + i));
	}
	return 0;
}*/



//int main()
//{
//	int* p = realloc(NULL, 40);
//	return 0;
//}


//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}

//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}



//int main()
//{
//	Test();
//	return 0;
//}


//struct S
//{
//	int n;
//	int arr[0];
//};


//int main()
//{
//	int i = 0;
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = (struct S*)realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	free(ps);
//	ps = NULL;
//	ptr = NULL;
//	return 0;
//}


//struct S
//{
//	int n;
//	int* arr;
//};
//
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = (int*)malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	int* ptr = (int*)realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	free(ps->arr);
//	free(ps);
//	ps = NULL;
//	ps->arr = NULL;
//	ptr = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf(strerror(errno));
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf(strerror(errno));
//		return 0;
//	}
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	fclose(pfWrite);
//	pfWrite = NULL;
//	/*FILE* pfRead = fopen("test.txt", "r");
//	printf("%c ",fgetc(pfRead));
//	printf("%c ", fgetc(pfRead));
//	printf("%c ", fgetc(pfRead));*/
//	return 0;
//}


//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}

//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		return 0;
//	}
//	char str[1024] = { 0 };
//	fgets(str,1024,pfRead);
//	printf(str);
//	fgets(str, 1024, pfRead);
//	printf(str);
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	fputs("hello bit",pfWrite);
//	fputs("hello bit", pfWrite);
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}




//int main()
//{
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);
//	fputs(buf, stdout);
//	return 0;
//}


//struct S
//{
//	int n;
//	float b;
//	char arr[10];
//};

//int main()
//{
//	struct S s = { 100,3.14f,"hello" };
//	struct S* ps = &s;
//	FILE* pfWrite = fopen("test.txt", "w");
//	fprintf(pfWrite,"%d %f %s",s.n,s.b,s.arr);
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}


//int main()
//{
//	struct S s = { 0 };
//	FILE* pfRead = fopen("test.txt", "r");
//	fscanf(pfRead, "%d %f %s", &s.n, &s.b, s.arr);
//	printf("%d ", s.n);
//	printf("%f ", s.b);
//	printf("%s ", s.arr);
//
//	return 0;
//}


//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin, "%d %f %s", &s.n, &s.b, s.arr);
//	fprintf(stdout, "%d %.2f %s", s.n, s.b, s.arr);
//	return 0;
//}


//struct S
//{
//	char name[20];
//	int age;
//};
//
//
//int main()
//{
//	struct S s = { "张三",18 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fwrite(&s,sizeof(s),1,pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#define CASE break;case 
//int main()
//{
//	int i = 2;
//	switch (i)
//	{
//	case 1:
//		printf("成功1");
//		CASE 2 :
//		printf("成功");
//		CASE 3:
//		printf("成功3");
//		CASE 4:
//		printf("成功4");
//	default:
//		printf("失败");
//		break;
//	}
//}

//#define PRINT(X) printf("the value of " #X " is %d\n",X)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}




//#define OFFSETOF(struct_name,struct_member_name) (int)&(((struct S*)0) -> struct_member_name)
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//
//
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}


//int find_single_dog1(int arr[], int sz)
//{
//	int ret = 0;  //记录数组元素两两相互异或的结果，初始化为0
//	for (int i = 0; i < sz; i++)
//	{
//		ret ^= arr[i]; //将数组元素两两相互异或
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,6,3,4,5,1,6,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);  //得到数组中的元素个数
//	int dog = find_single_dog1(arr, sz);
//	printf("dog=%d\n", dog);
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(++a));
//	printf("%d\n", a);
//	return 0;
//}



//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 5 == 0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}



//int main()
//{
//	int n = 1; 
//	
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}


//int find_max_common_divisor(int num1, int num2)
//{
//	int tmp = 0;
//	while (tmp = num1 % num2)
//	{
//		num1 = num2;
//		num2 = tmp;
//	}
//	return num2;
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int ret = find_max_common_divisor(num1, num2);
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= i / 2; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > i / 2)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//void sort(int* a, int* b, int* c)
//{
//	if (*a < *b)
//	{
//		int tmp = *a;
//		*a = *b;
//		*b = tmp;
//	}
//	if (*a < *c)
//	{
//		int tmp = *a;
//		*a = *c;
//		*c = tmp;
//	}
//	if (*b < *c)
//	{
//		int tmp = *b;
//		*b = *c;
//		*c = tmp;
//	}
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	sort(&a, &b, &c);
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//int main()
//{
//	int c;
//	puts("Enter text. Include a dot ('.') in a sentence to exit:");
//	do {
//		c = getchar();
//		putchar(c);
//	} while (c != '.');
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}


//int main()
//{
//	int tmp = 0;
//	int input = 0;
//	while (getchar() != '\n')
//	{
//		;
//	}
//	scanf("%d", &input);
//	if (input == 'y')
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}



//int main()
//{
//	char arr[20] = { 0 };
//	printf("请输入密码>:");
//	scanf("%s", arr);
//	printf("请确认密码(Y/N)>:");
//	while (getchar() != '\n')
//	{
//		;
//	}
//	char ch = getchar();
//	if ('Y' == ch)
//	{
//		printf("设置成功\n");
//	}
//	else
//	{
//		printf("设置失败\n");
//	}
//	return 0;
//
//}



//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	//这里打印多少个hehe?
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}


//int main()
//{
//	char password[10] = { 0 };
//	scanf("%s", password);
//	if (strcmp(password, "123456") == 0)
//	{
//		printf("success");
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int j = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += j * 1.0 / i;
//		j = -j;
//	}
//	printf("%lf", sum);
//	return 0;
//}


//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int Find_Max(int* ps, int sz)
//{
//	int max = *ps;
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		if (*ps > *(ps + 1))
//		{
//			max = *ps;
//		}
//		ps++;
//	}
//	if (max == 0)
//	{
//		max = *(ps);
//	}
//	return max;
//}


//int Find_Max(int arr[], int sz)
//{
//	int i = 0;
//	int max = arr[0];
//	for (i = 1; i < sz; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//
//
//
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,12,6,7,8,13 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = Find_Max(arr, sz);
//	printf("max = %d\n", ret);
//	return 0;
//}


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//结果是啥？
//	//注：printf函数的返回值是打印在屏幕上字符的个数
//	return 0;
//}


//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char str[] = "abcdefsjs";
//	int ret = my_strlen(str);
//	printf("%d\n", ret);
//	return 0;
//}

//int factorial(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * factorial(n - 1);
//	}
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = factorial(n);
//	printf("%d\n", ret);
//	return 0;
//}


//int fib(int n)
//{
//	int count = 0;
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}

//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	
//    for (int i = 0; i < n - 2; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}



//void reverse_string(char* string)
//{
//	int len = my_strlen(string);
//	int tmp = *string;
//	*string = *(string + len - 1);
//	*(string + len - 1) = '\0';
//	if (my_strlen(string + 1) >= 2)
//	{
//		reverse_string(string + 1);
//	}
//	*(string + len - 1) = tmp;
//}


//int main()
//{
//	char string[] = "abcdef";
//	reverse_string(string);
//	printf(string);
//	return 0;
//}

//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}


//int power(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * power(n, k - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}



//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = power(n, k);
//	printf("%d\n", ret);
//	return 0;
//}

//void swap(void* p1, void* p2, int sz, int width)
//{
//	for (int i = 0; i < sz * width; i++)
//	{
//		char tmp = *((char*)p1);
//		*((char*)p1) = *((char*)p2);
//		*((char*)p2) = tmp;
//		++(char*)p1;
//		++(char*)p2;
//	}
//}



//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 10,9,8,7,6,5 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	swap(arr1, arr2, sz, sizeof(arr1[0]));
//
//	return 0;
//}

//int search_binary_one_count(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}




//int search_binary_one_count(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 10;
//	scanf("%d", &n);
//	int ret = search_binary_one_count(n);
//	printf("%d\n", ret);
//	return 0;
//}


//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
//}



//int main()
//{
//	printf("%d\n", 0 || 3);
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	/*i = a++ && ++b && d++;*/
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}


//int main()
//{
//	int a = 6;
//	int b = 0;
//	int m = a > 5 ? 3 : -3;
//	
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int m = 0;
//	int count = 0;
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) != ((m >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int calc_diff_bit(int n, int m)
//{
//	int count = 0;
//	n = n ^ m;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int ret = calc_diff_bit(n, m);
//	printf("%d\n", ret);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}


//int Sum(int a, int n)
//{
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	return sum;
//}
//
//
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int ret = Sum(a, n);
//	printf("%d\n", ret);
//	return 0;
//}


//int my_pow(int a, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return a * my_pow(a, k - 1);
//	}
//}



//int main()
//{
//	int tmp = 0;
//	int i = 0;
//	for (i = 0; i <= 10000; i++)
//	{
//		int n = 0;
//		tmp = i;
//		while (tmp)
//		{
//			tmp = tmp / 10;
//			n++;
//		}
//		tmp = i;
//		int sum = 0;
//		for (int j = 0; j < n; j++)
//		{
//			sum += my_pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int* p = NULL;
//	
//	return 0;
//}



//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	total = money;
//	empty = total;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	for (int i = 0; i < line; i++)
//	{
//		for (int j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < line - 1; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//void reverse_string(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left <= right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//
//int main()
//{
//	char str[] = "xxxxxxxxxx";
//	gets(str);
//	/*reverse_string(str);*/
//	printf(str);
//	return 0;
//}

//char* my_strcpy(char* dest, const char* sur)
//{
//	char* start = dest;
//	assert(dest != NULL);
//	assert(sur != NULL);
//	while (*dest++ = *sur++)
//	{
//		;	
//	}
//	return start;
//}
//
//int main()
//{
//	char str[100] = { 0 };
//	my_strcpy(str, "bit");
//	printf(str);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] % 2 == 0)
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//void swap(int* ps, int sz)
//{
//	int* left = ps;
//	int* right = ps + sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && *left % 2 == 1)
//		{
//			left++;
//		}
//		while ((left < right) && *right % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//}
//
//
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swap(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//int my_strlen(const char* str)
//{
//	assert(str);
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}

//int my_strlen(const char* str)
//{
//	assert(str);
//	const char* start = str;
//	while (*str++)
//	{
//		;
//	}
//	return str - start - 1;
//}



//int main()
//{
//	char* p = "bit";
//	int ret = my_strlen(p);
//	printf("%d\n", ret);
//	return 0;
//}



//int check_sys(void)
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}


//int check_sys(void)
//{
//	union Un
//	{
//		char c;
//		int a;
//	}un;
//	un.a = 1;
//	return un.c;
//}
//
//
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}


//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}


//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}


//#define ROW 7
//#define COL 7



//int main()
//{
//	int arr[ROW][COL] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (j == 0 || j == i)
//			{
//				arr[i][j] = 1;	
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//
//		}
//	}
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j <=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//void yangHuiTriangle(int n)
//{
//	int data[30][30] = { 1 }; //第一行直接填好，播下种子
//
//	int i, j;
//
//	for (i = 1; i < n; i++) //从第二行开始填
//	{
//		data[i][0] = 1; //每行的第一列都没有区别，直接给1，保证不会越界。
//		for (j = 1; j <= i; j++) //从第二列开始填
//		{
//			data[i][j] = data[i - 1][j] + data[i - 1][j - 1]; //递推方程
//		}
//	}
//
//	for (i = 0; i < n; i++) //填完打印
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", data[i][j]);
//		}
//		putchar('\n');
//	}
//}


//void yangHuiTriangle(int n)
//{
//	int data[30] = { 1 };
//	int i, j;
//	printf("1\n"); //第一行就直接打印了
//	for (i = 1; i < n; i++) //从第二行开始
//	{
//		for (j = i; j > 0; j--) //从后向前填，避免上一行的数据在使用前就被覆盖
//		{
//			data[j] += data[j - 1]; //公式同上，由于变成了一维，公式也变简单了。
//		}
//
//		for (j = 0; j <= i; j++) //这一行填完就直接打印了。
//		{
//			printf("%d ", data[j]);
//		}
//		putchar('\n');
//	}
//}






//int main()
//{
//	int n = 6;
//	yangHuiTriangle(n);
//	return 0;
//}



//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("凶手是%c\n", killer);
//		}
//	}
//	return 0;
//}



//int checkData(int* p)
//{
//	int tmp[7] = { 0 }; //标记表，实际是哈希表的思路。一开始每个元素都是0。
//
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		if (tmp[p[i]]) //如果这个位置的标记已经是1，则代表重复，直接返回0。
//		{
//			return 0;
//		}
//		tmp[p[i]] = 1; //如果不是，则给这个位置标记为1。
//	}
//	return 1; //全部标记完毕也没有出现重复的情况，代表OK。
//}
//
//
//
//int main()
//{
//
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//};



//void swap(void* p1, void* p2,int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char tmp = *(char*)p1;
//		*(char*)p1 = *(char*)p2;
//		*(char*)p2 = tmp;
//		++(char*)p1;
//		++(char*)p2;
//	}
//}
//
//
//
//
//int cmp(const void* p1, const void* p2)
//{
//	return (*(struct S*)p1).age - (*(struct S*)p2).age;
//}
//
//void my_qsort(void* base, int count, int width, int(*cmp)(const void* , const void* ))
//{
//	for (int i = 0; i < count - 1; i++)
//	{
//		for (int j = 0; j < count - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}
//
//int main()
//{
//	struct S s[] = { {"张三",18},{"李四",16} ,{"王五",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	my_qsort(s, sz, sizeof(s[0]), cmp);
//	return 0;
//}


//int main()
//{
//	//int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a));//16
//	//printf("%d\n", sizeof(a + 0));//8
//	//printf("%d\n", sizeof(*a));//4
//	//printf("%d\n", sizeof(a + 1));//8
//	//printf("%d\n", sizeof(a[1]));//4
//	//printf("%d\n", sizeof(&a));//8
//	//printf("%d\n", sizeof(*&a));//16
//	//printf("%d\n", sizeof(&a + 1));//8
//	//printf("%d\n", sizeof(&a[0]));//8
//	//printf("%d\n", sizeof(&a[0] + 1));//8
//	char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr + 0));//8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//8
//	//printf("%d\n", sizeof(&arr + 1));//8
//	//printf("%d\n", sizeof(&arr[0] + 1));//8
//	printf("%d\n", strlen(arr));//随机
//	printf("%d\n", strlen(arr + 0));//随机
//	//printf("%d\n", strlen(*arr));//error
//	//printf("%d\n", strlen(arr[1]));//error
//	printf("%d\n", strlen(&arr)); //随机
//	printf("%d\n", strlen(&arr + 1));//随机
//	printf("%d\n", strlen(&arr[0] + 1));//随机
//	return 0;
//}



//int main()
//{
//	char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr + 0));//8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//8
//	//printf("%d\n", sizeof(&arr + 1));//8
//	//printf("%d\n", sizeof(&arr[0] + 1));//8
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	/*printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr[1]));*/
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//随机
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	return 0;
//}



//int main()
//{
//	char* p = "abcdef";
//	//printf("%d\n", sizeof(p));//8
//	//printf("%d\n", sizeof(p + 1));//8
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//1
//	//printf("%d\n", sizeof(&p));//8
//	//printf("%d\n", sizeof(&p + 1));//8
//	//printf("%d\n", sizeof(&p[0] + 1));//8
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	/*printf("%d\n", strlen(*p));
//	printf("%d\n", strlen(p[0]));*/
//	printf("%d\n", strlen(&p));//6
//	printf("%d\n", strlen(&p + 1));//随机
//	printf("%d\n", strlen(&p[0] + 1));//5
//	//二维数组
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";
//	printf("%p\n", p);
//	printf("%p\n", &p);
//	return 0;
//}


//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));//8
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//8
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1));//8
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16
//	return 0;
//}


//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	p = 0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}


//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}


//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}


//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}


//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *-- * ++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	return 0;
//}


//void leftRound(char* str, int k)
//{
//	char* start = str;
//	int len = strlen(start) - 1;
//	for (int i = 0; i < k; i++)
//	{
//		start = str;
//		for (int j = 0; j < len; j++)
//		{
//			char tmp = *start;
//			*start = *(start + 1);
//			*(start + 1) = tmp;
//			start++;
//		}
//	}
//}


//void leftRound(char* str, int k)
//{
//	int len = strlen(str);
//	int pos = k % len;
//	char* ptr = (char*)malloc(len + 1);
//	if (ptr == NULL)
//	{
//		return;
//	}
//	strcpy(ptr, str + pos);
//	strncat(ptr, str, pos);
//	strcpy(str, ptr);
//	free(ptr);
//	ptr = NULL;
//}


//void part_reverse(char* p1, char* p2)
//{
//	while (p1 < p2)
//	{
//		char tmp = *p1;
//		*p1 = *p2;
//		*p2 = tmp;
//		p1++;
//		p2--;
//	}
//}
//
//
//
//
//void leftRound(char* str, int k)
//{
//	int len = strlen(str);
//	int pos = k % len;
//	part_reverse(str, str + pos - 1);
//	part_reverse(str + pos, str + len - 1);
//	part_reverse(str, str + len - 1);
//}
//
//
//
//int main()
//{
//	char str[] = "abcdefg";
//	int k = 0;
//	scanf("%d", &k);
//	leftRound(str, k);
//	printf(str);
//	return 0;
//}



//void reverse_string(char* p1, char* p2)
//{
//	while (p1 < p2)
//	{
//		char tmp = *p1;
//		*p1 = *p2;
//		*p2 = tmp;
//		p1++;
//		p2--;
//	}
//}
//
//
//
//void leftRound(char* str,int k)
//{
//	int len = strlen(str);
//	int pos = k % len;
//	reverse_string(str, str + pos - 1);
//	reverse_string(str + pos, str + len - 1);
//	reverse_string(str, str + len - 1);
//}
//
//
//
//
//int is_leftRound(char* str2, char* str1)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	for (int i = 0; i < len1; i++)
//	{
//		leftRound(str1,i);
//		if (strcmp(str2, str1) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}


//int is_leftRound(char* str2, char* str1)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	strncat(str1, str1, len1);
//	if (strstr(str1, str2) == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//	
//}




//int main()
//{
//	char str1[20] = "abcdef";
//	char str2[] = "bcdefa";
//	int ret = is_leftRound(str2, str1);
//	if (ret == 1)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}

//char* my_strcat(char* destination, const char* source)
//{
//	assert(destination && source);
//	char* start = destination;
//	while (*destination != '\0')
//	{
//		destination++;
//	}
//	while (*destination++ = *source++)
//	{
//		;
//	}
//	return start;
//}

//int main()
//{
//	char str1[20] = "abcdef";
//	char str2[] = "ghijklm";
//	my_strcat(str1, str2);
//	printf(str1);
//	return 0;
//}


//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while ((*str1 - *str2 == 0) && *str1)
//	{
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}



//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "abcdef";
//	int ret = my_strcmp(str1, str2);
//	if (ret == 0)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//}



//int main()
//{
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	strncat(str1, str2, 6);
//	puts(str1);
//	return 0;
//}


//int main()
//{
//	char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
//	int n;
//	puts("Looking for R2 astromech droids...");
//	for (n = 0; n < 3; n++)
//		if (strncmp(str[n], "R2xx", 2) == 0)
//		{
//			printf("found %s\n", str[n]);
//		}
//	return 0;
//}


//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* p2 = str2;
//	const char* cur = str1;
//	while (*cur)
//	{
//		p2 = str2;
//		str1 = cur;
//		while ((*p2 == *str1) && (*p2))
//		{
//			p2++;
//			str1++;
//		}
//		if (*p2 == '\0')
//		{
//			return (char*)cur;
//		}
//		if (*str1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;
//}




//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//	pch = my_strstr(str, "simple");
//	printf(pch);
//	return 0;
//}

//int main()
//{
//	char str1[] = "bbbc";
//	char str2[] = "bbc";
//	char* p = my_strstr(str1, str2);
//	printf(p);
//	return 0;
//}



//int main()
//{
//	char str[] = "abc.@denf..abcd";
//	char* p = NULL;
//	for (p = strtok(str, ".@"); p != NULL; p = strtok(NULL, ".@"))
//	{
//		printf(p);	
//	}
//	
//	return 0;
//}


//int main()
//{
//	char str[] = "- This, a sample string.";
//	char* pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, " ,.-");
//	while (pch != NULL)
//	{
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ,.-");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char str[] = "Test String.\n";
//	char c;
//	while (str[i])
//	{
//		c = str[i];
//		if (isupper(c))
//			c = tolower(c);
//		putchar(c);
//		i++;
//	}
//	return 0;
//}



//void* my_memcpy(void* destination, const void* source, int num)
//{
//	assert(destination && source);
//	void* start = destination;
//	for (int i = 0; i < num; i++)
//	{
//		*(char*)destination = *(char*)source;
//		++(char*)destination;
//		++(char*)source;
//	}
//	return start;
//}



//void* my_memmove(void* destination, const void* source, size_t num)
//{
//	assert(destination && source);
//	void* start = destination;
//	if (destination > source)
//	{
//		destination = (char*)destination + num - 1;
//		source = (char*)source + num - 1;
//		while (num--)
//		{
//			*(char*)destination = *(char*)source;
//			--(char*)destination;
//			--(char*)source;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*(char*)destination = *(char*)source;
//			++(char*)destination;
//			++(char*)source;
//		}
//	}
//	return start;
//}



//int main()
//{
//	int arr1[] = { 1,2,3,4,5};
//	int arr2[] = { 2,3,4,5,6 };
//	my_memmove(arr1 + 2, arr1 + 1,12);
//	return 0;
//}


//int main()
//{
//	char buffer1[] = "DWgaOtP12df0";
//	char buffer2[] = "DWGAOTP12DF0";
//	int n;
//	n = memcmp(buffer1, buffer2, sizeof(buffer1));
//	if (n > 0) printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
//	else if (n < 0) printf("'%s' is less than '%s'.\n", buffer1, buffer2);
//	else printf("'%s' is the same as '%s'.\n", buffer1, buffer2);
//	return 0;
//}


//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//#define MY_OFFSETOF(s,m) &(((s*)0)->m)
//
//
//int main()
//{
//	int ret = MY_OFFSETOF(struct S4, c1);
//	printf("%d\n", ret);
//	return 0;
//}


//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

//union Un
//{
//	int i;
//	char c;
//};

//int main()
//{
//	/*union Un un;
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);*/
//	return 0;
//}

//int check_sys()
//{
//	union Un
//	{
//		int i;
//		char c;
//	}un;
//	un.i = 1;
//	return un.c;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//union Un1
//{
//	char c[5];
//	int i;
//};
//union Un2
//{
//	short c[7];
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un1));
//	printf("%d\n", sizeof(union Un2));
//	return 0;
//}


//int main()
//{
//	
//	printf("%d\n", '\0');
//	return 0;
//}

//int main()
//{
//	char str[] = "     -1234567777777";
//	int ret = atoi(str);
//	printf("%d\n", ret);
//	return 0;
//}


enum State
{
	INVALID,
    VALID
};


//enum State state = INVALID;
//
//int my_atoi(const char* str)
//{
//	assert(str);
//	int flag = 1;
//	long long n = 0;
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	while (isspace(*str))
//	{
//		str++;
//	}
//	while ((*str == '-') || (*str == '+'))
//	{
//		if (*str == '+')
//		{
//			flag = 1;
//			str++;
//		}
//		else
//		{
//			flag = -1;
//			str++;
//		}
//	}
//	while (*str)
//	{
//		if (isdigit(*str))
//		{
//			n = n * 10 + flag * (*str - '0');
//			if (n > INT_MAX || n < INT_MIN)
//			{
//				return 0;
//			}
//			str++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (*str == '\0')
//	{
//		state = VALID;
//	}
//	return (int)n;
//}
//
//int main()
//{
//	
//	char* p = "    -+12366";
//	int ret = my_atoi(p);
//	if (state == VALID)
//	{
//		printf("合法转换，转换后的正确值为%d\n", ret);
//	}
//	else
//	{
//		printf("非法转换 ret = %d",ret);
//	}
//	return 0;
//}



//int find_single_dog(char* p,int sz)
//{
//	int n = 0;
//	while (sz--)
//	{
//		n = n ^ *p;
//		p++;
//	}
//	return n;
//}
//
//
//
//int main()
//{
//	char arr[] = { 1,2,1,2,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = find_single_dog(arr,sz);
//	printf("%d\n", ret);
//	return 0;
//}



//char* my_strncpy(char* dest, const char* sur, size_t num)
//{
//	assert(dest && sur);
//	char* start = dest;
//	while (num--)
//	{
//		if (*sur == '\0')
//		{
//			*dest++ = *sur;
//		}
//		else
//		{
//			*dest++ = *sur++;
//		}
//	}
//	return start;
//}

//char* my_strncpy(char* dst, const char* src, size_t n)
//{
//	int i;
//	for (i = 0; src[i] && i < n; i++)
//	{
//		dst[i] = src[i];
//	}
//
//	if (i < n)
//	{
//		dst[i] = 0;
//	}
//	return dst;
//}


//int main()
//{
//	char str1[20] = "abcdefaaaaaa";
//	char str2[] = "ghijk";
//	my_strncpy(str1, str2, 10);
//	return 0;
//}


//char* my_strncat(char* dest, const char* sur, size_t num)
//{
//	assert(dest && sur);
//	char* start = dest;
//	while (*dest)
//	{
//		dest++;;
//	}
//	while (*sur && num--)
//	{
//		*dest++ = *sur++;
//	}
//	*dest = '\0';
// return start;
//}



//int main()
//{
//	char str1[20] = "abcdef\0xxxxxx";
//	char str2[] = "ghi";
//	my_strncat(str1, str2, 2);
//	return 0;
//}



//int my_strncmp(const char* str1, const char* str2, size_t num)
//{
//	while ((num--) && (*str1 == *str2) && *str2)
//	{
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}



//int main()
//{
//	char str1[] = "abcde";
//	char str2[] = "abcda";
//	int ret = my_strncmp(str1, str2, 5);
//	printf("%d\n", ret);
//	return 0;
//}

//void find_single_dog(int arr[], int sz, int* a, int* b)
//{
//	int n = 0;
//	int pos = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		n ^= arr[i];
//	}
//	for (int i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		if ((arr[i] >> pos) & 1 == 1)
//		{
//			*a = *a ^ arr[i];
//		}
//	}
//	*b = n ^ *a;
//}



//void find_signal_dog(int* arr, int sz, int* a,int* b)
//{
//	int i = 0;
//	int ret = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		ret  = ret ^ arr[i];
//	}
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			(*a) ^= arr[i];
//		}
//		else
//		{
//			(*b) ^= arr[i];
//		}
//	}
//}






//int main()
//{
//	int a = 0;
//	int b = 0;
//	int arr[] = {1,2,3,4,5,1,2,3,4,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find_single_dog(arr, sz,&a,&b);
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}


//int main()
//{
//	printf("%d\n",__STDC__)
//	return 0;
//}



//#define SwapIntBit(n) (((n) & 0x55555555) << 1 | ((n) & 0xaaaaaaaa) >> 1)



//int main()
//{
//	int n = 0;
//	int arr[30][30] = { 1 };
//	scanf("%d", &n);
//	for (int i = 1; i < n; i++)
//	{
//		arr[i][0] = 1;
//		for (int j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
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
//	int arr[30] = { 1 };
//	scanf("%d", &n);
//	printf("%d\n", 1);
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = i; j > 0; j--)
//		{
//			arr[j] += arr[j - 1];
//		}
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%d ",arr[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("凶手是%c", killer);
//		}
//	}
//	return 0;
//}



//int checkdata(int* p)
//{
//	int tmp[7] = { 0 };
//	for (int i = 0; i < 5; i++)
//	{
//		if (tmp[p[i]] == 0)
//		{
//			tmp[p[i]] = 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//
//
//void diveRank(int* p, int n)
//{
//	if (n >= 5)
//	{
//		if (
//			(p[1] == 2) + (p[0] == 3) == 1 &&
//			(p[1] == 2) + (p[4] == 4) == 1 &&
//			(p[2] == 1) + (p[3] == 2) == 1 &&
//			(p[2] == 5) + (p[3] == 3) == 1 &&
//			(p[4] == 4) + (p[0] == 1) == 1 &&
//			checkdata(p)
//			)
//		{
//			for (int i = 0; i < 5; i++)
//			{
//				printf("%d ", p[i]);
//			}
//		}
//	}
//	else
//	{
//		for (p[n] = 1; p[n] <= 5; p[n]++)
//		{
//			diveRank(p, n + 1);
//		}
//	}
//}
//
//
//
//int main()
//{
//	int p[5] = { 0 };
//	diveRank(p, 0);
//	return 0;
//}