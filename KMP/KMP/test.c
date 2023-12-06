#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>


void GetNextVal(char* sub, int* nextval, int lenSub)
{

	nextval[0] = -1;
	if (lenSub == 1)
	{
		return;
	}
	nextval[1] = 0;
	int i = 2;
	int k = 0;
	while (i < lenSub)
	{
		if (k == -1 || sub[i - 1] == sub[k])
		{
			if (sub[i] != sub[k + 1])
			{
				nextval[i] = k + 1;
			}
			else
			{
				nextval[i] = nextval[k + 1];;
			}
			i++;
			k = nextval[i];
		}
		else
		{
			k = nextval[k];
		}
	}
}



void GetNext(char* sub, int* next,int lenSub)
{
	
	next[0] = -1;
	if (lenSub == 1)
	{
		return;
	}
	next[1] = 0;
	int i = 2;
	int k = 0;
	while (i < lenSub)
	{
		if (k == -1 || sub[i - 1] == sub[k])
		{
			next[i] = k + 1;
			i++;
			k++;
		}
		else
		{
			k = next[k];
		}
	}
}



int KMP(char* str, char* sub, int pos)
{
	assert(str != NULL && sub != NULL);
	int lenStr = strlen(str);
	int lenSub = strlen(sub);
	if (lenStr == 0 || lenSub == 0)
		return -1;
	if (pos < 0 || pos >= lenStr)
		return -1;
	int* nextval = (int*)malloc(sizeof(int) * lenSub);
	assert(nextval != NULL);
	GetNext(sub, nextval,lenSub);
	int i = pos;
	int j = 0;
	while (i < lenStr && j < lenSub)
	{
		if (j == -1 || str[i] == sub[j])
		{
			i++;
			j++;
		}
		else
		{
			j = nextval[j];
		}
	}
	free(nextval);
	if (j >= lenSub)
		return i - lenSub;
	else
		return -1;
}



int main()
{
	int ret = KMP("abcd", "bc", 0);
	printf("%d\n", ret);
	return 0;
}