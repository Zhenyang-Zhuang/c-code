#define _CRT_SECURE_NO_WARNINGS 1

#include "contact1.h"



void menu()
{
	printf("**********************************\n");
	printf("****   1.Add         2.Del    ****\n");
	printf("****   3.Search      4.Modify ****\n");
	printf("****   5.Show        6.Sort   ****\n");
	printf("****          0.Exit          ****\n");
}









void test()
{
	int input = 0;
	void(*fun[])(struct Contact* ps) = { 0,Add,Del,Search,Modify,Show,Sort };
	struct Contact con = { 0 };
	InitContact(&con);
	do
	{
		menu();
		printf("ÇëÊäÈëÊý×Ö:>");
		scanf("%d", &input);
		if (input == 0)
		{
			SaveContact(&con);
			DestroyContact(&con);
			break;
		}
		fun[input](&con);
	} while (input);
}








int main()
{
	test();
	return 0;
}
