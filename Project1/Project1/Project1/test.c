#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>
#include <errno.h>
#include <stddef.h>
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


struct S
{
	char name[20];
	int age;
};


int main()
{
	struct S s = { "张三",18 };
	FILE* pf = fopen("test.txt", "wb");
	if (pf == NULL)
	{
		return 0;
	}
	fwrite(&s,sizeof(s),1,pf);
	fclose(pf);
	pf = NULL;
	return 0;
}