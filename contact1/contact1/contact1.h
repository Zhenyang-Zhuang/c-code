#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 15
#define MAX_ADDR 30
#define DEFAULT_SZ 3




struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];	
};



struct Contact
{
	int size;
	int capacity;
	struct PeoInfo *data;
};


void InitContact(struct Contact* ps);
void Add(struct Contact* ps);
void Del(struct Contact* ps);
void Search(struct Contact* ps);
void Modify(struct Contact* ps);
void Show(struct Contact* ps);
void Sort(struct Contact* ps);
void DestroyContact(struct Contact* ps);
void SaveContact(struct Contact* ps);
void LoadContact(struct Contact* ps);