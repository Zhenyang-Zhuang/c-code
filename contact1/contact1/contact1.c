#define _CRT_SECURE_NO_WARNINGS 1

#include "contact1.h"


void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return 0;
	}
	memset(ps->data, 0, sizeof(DEFAULT_SZ * sizeof(struct PeoInfo)));
	ps->capacity = DEFAULT_SZ;
	ps->size = 0;
	LoadContact(ps);
}



int Findbyname(struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp((ps->data)[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}



int cmp(struct PeoInfo* p1, struct PeoInfo* p2)
{
	return p1->age - p2->age;
}




void swap(struct PeoInfo* p1, struct PeoInfo* p2)
{
	struct PeoInfo tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}



void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}




void Add(struct Contact* ps)
{
	CheckCapacity(ps);
	printf("请输入名字:>");
	scanf("%s", (ps->data)[ps->size].name);
	printf("请输入年龄:>");
	scanf("%d", &(ps->data)[ps->size].age);
	printf("请输入性别:>");
	scanf("%s", (ps->data)[ps->size].sex);
	printf("请输入电话:>");
	scanf("%s", (ps->data)[ps->size].tele);
	printf("请输入地址:>");
	scanf("%s", (ps->data)[ps->size].addr);
	ps->size++;
	system("cls");
	printf("添加成功\n");
	/*if (ps->size == MAX)
	{
		printf("通讯录已满,无法添加\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", (ps->data)[ps->size].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data)[ps->size].age);
		printf("请输入性别:>");
		scanf("%s", (ps->data)[ps->size].sex);
		printf("请输入电话:>");
		scanf("%s", (ps->data)[ps->size].tele);
		printf("请输入地址:>");
		scanf("%s", (ps->data)[ps->size].addr);
		ps->size++;
		system("cls");
		printf("添加成功\n");
	}*/
}




void Del(struct Contact* ps)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要删除的联系人的名字:>");
	scanf("%s", name);
	int ret = Findbyname(ps, name);
	if (ret == -1)
	{
		system("cls");
		printf("要删除的联系人不存在\n");
	}
	else
	{
		int i = 0;
		for (i = ret; i < ps->size - 1; i++)
		{
			ps->data[i] = ps->data[i + 1];
		}
		ps->size--;
		system("cls");
		printf("删除成功\n");
	}
}



void Search(struct Contact* ps)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找的联系人的姓名:>");
	scanf("%s", name);
	int ret = Findbyname(ps, name);
	if (ret == -1)
	{
		system("cls");
		printf("此联系人不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-15s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-20s\t", ps->data[ret].name);
		printf("%-4d\t", ps->data[ret].age);
		printf("%-5s\t", ps->data[ret].sex);
		printf("%-15s\t", ps->data[ret].tele);
		printf("%-30s\t", ps->data[ret].addr);
		printf("\n");
	}
}



void Modify(struct Contact* ps)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改的联系人的姓名:>");
	scanf("%s", name);
	int ret = Findbyname(ps, name);
	if (ret == -1)
	{
		system("cls");
		printf("此联系人不存在\n");
	}
	else
	{
		printf("请输入要修改的姓名:>");
		scanf("%s", ps->data[ret].name);
		printf("请输入要修改的年龄:>");
		scanf("%d", &ps->data[ret].age);
		printf("请输入要修改的性别:>");
		scanf("%s", ps->data[ret].sex);
		printf("请输入要修改的电话:>");
		scanf("%s", ps->data[ret].tele);
		printf("请输入要修改的地址:>");
		scanf("%s", ps->data[ret].addr);
		system("cls");
		printf("修改成功\n");
	}
}



void Show(struct Contact* ps)
{
	int i = 0;
	if (ps->size == 0)
	{
		system("cls");
		printf("通讯录中无内容\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-15s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t", ps->data[i].name);
			printf("%-4d\t", ps->data[i].age);
			printf("%-5s\t", ps->data[i].sex);
			printf("%-15s\t", ps->data[i].tele);
			printf("%-30s\t", ps->data[i].addr);
			printf("\n");
		}
	}
}



void Sort(struct Contact* ps)
{
	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		int j = 0;
		for (j = 0; j < ps->size - 1 - i; j++)
		{
			if (cmp((ps->data) + j, (ps->data) + j + 1) > 0)
			{
				swap((ps->data) + j, (ps->data) + j + 1);
			}
		}
	}
	system("cls");
	printf("排序成功\n");
}



void DestroyContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}


void SaveContact(struct Contact* ps)
{
	int i = 0;
	FILE* pfWrite = fopen("data.txt", "wb");
	if (pfWrite == NULL)
	{
		perror("SaveContact::");
		return;
	}
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(struct PeoInfo), 1, pfWrite);	
	}
	fclose(pfWrite);
	pfWrite = NULL;
}




void LoadContact(struct Contact* ps)
{
	struct PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("data.txt", "rb");
	if (pfRead == NULL)
	{
		perror("LoadContact::");
		return;
	}
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pfRead))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}
	fclose(pfRead);
	pfRead = NULL;
}