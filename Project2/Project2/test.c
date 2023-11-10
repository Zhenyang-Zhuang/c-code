#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



struct stu
{
	char name[20];
	int age;
};


int cmp_s_by_age(void* e1, void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}




void swap(char* p1, char* p2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		int tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;
	}
}




void up_bubble_sort(void* base, int sz, int width,int (*cmp)(void* e1,void* e2 ))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}






void test1()
{
	struct stu s[3] = { {"张三",15},{"李四",10},{"王五",9} };
	int sz = sizeof(s) / sizeof(s[0]);
	up_bubble_sort(s, sz, sizeof(s[0]), cmp_s_by_age);
}





int main()
{
	test1();
	return 0;
}