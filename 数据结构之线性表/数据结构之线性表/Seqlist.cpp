#include "common.h"

#define LISTSIZE 100

typedef struct{
	ElemType list[LISTSIZE];
	int length;
}SeqList;

Status InitList(SeqList &L)
{
	L.length = 0;
}

Status ListEmpty(SeqList L)
{
	if (L.length == 0)
	{
		return 1;
	}
	else
		return 0;
}

Status GetElem(SeqList L, ElemType &e)
{
	if (i<1 || i>L.length)
	{
		return -1;
	}

	e = L.list[i-1];

	return 1;
}

Status LocateElem(SeqList L, ElemType e)
{
	for (int i = 0; i<L.length; i++)
	{
		if (L.list[i] == e)
		{
			return 1;
		}
		else 
			return 0;
	}
}

Status InsertList(SeqList &L, int i, ElemType e)
{
	if (i<1 || i>L.length+1)
	{
		printf("插入位置不合法！\n");
	} 
	else if(L.length >= LISTSIZE)
	{
		printf("顺序表已满，无法插入元素\n");
		return 0;
	}
	else 
	{
		for (int j = L.length; j>=i; j--)
		{
			L.list[j] = L.list[j-1];
		}

		L.list[i-1] = e; // 插入元素到第i个位置

		L.length = L.length +1;  //表长加1
		return 1;
	}
}