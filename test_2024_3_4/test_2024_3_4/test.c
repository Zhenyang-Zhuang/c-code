#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MaxVertexNum 100


typedef struct ArcNode
{
	int adjvex;
	struct ArcNode* next;
}ArcNode;

typedef struct VNode
{
	int data;
	ArcNode* first;
}VNode;


typedef struct ALGraph
{
	VNode vertices[MaxVertexNum];
	int vexnum;
	int arcnum;
}ALGraph;


typedef struct SqStack
{
	int data[MaxVertexNum];
	int top;
}SqStack;




int FirstNeighbor(ALGraph* G, int x)
{
	ArcNode* p = (G->vertices + x)->first;
	if (p != NULL)
		return p->adjvex;
	else
		return -1;
}


int NextNeighbor(ALGraph* G, int x, ArcNode* y)
{
	if (y->next == NULL)
		return -1;
	else
		return y->next->adjvex;
}


//bool IsTree(ALGraph* G)
//{
//	bool* visited = (bool*)malloc(sizeof(bool) * G->vexnum);
//	int i = 0;
//	int Vnum = 0;
//	int count = 0;
//	for (i = 0; i < G->vexnum; i++)
//	{
//		*(visited + i) = false;
//	}
//	DFS(G, visited, 1, &count,&Vnum);
//	free(visited);
//	visited = NULL;
//	if (Vnum == G->vexnum && count == 2 * (G->vexnum - 1))
//		return true;
//	else
//		return false;
//}
//
//
//
//void DFS(ALGraph* G, bool* visited,int v,int* count,int* Vnum)
//{
//	int p = 0;
//	*Vnum++;
//	visited[v] = true;
//	for (p = FirstNeighbor(G, v); p >= 0; p = NextNeighbor(G, v, p))
//	{
//		*count++;
//		if (!visited[p])
//			DFS(G, visited, p, count,Vnum);
//	}
//}


void visit(ALGraph* G, int x)
{
	int data = (G->vertices + x)->data;
	printf("%d\n", data);
}


//void DFS_Non_RC(ALGraph* G,SqStack* S)
//{
//	int i = 0;
//	InitStack(S);
//	bool* visited = (bool*)malloc(sizeof(bool) * G->vexnum);
//	for (i = 0; i < G->vexnum; i++)
//	{
//		*(visited + i) = false;
//	}
//	for (i = 0; i < G->vexnum; i++)
//	{
//		if (!visited[i])
//			DFS(G, i, visited,S);
//	}
//}
//
//
//void DFS(ALGraph* G, int v, bool* visited,SqStack* S)
//{
//	int p = 0;
//	push(S, v);
//	visited[v] = true;
//	while (!IsEmpty(S))
//	{
//		pop(S, &v);
//		visit(G,v);
//		for (p = FirstNeighbor(G, v); p >= 0; p = NextNeighbor(G, v, p))
//		{
//			if (!visited[p])
//			{
//				push(S, p);
//				visited[p] = true;
//			}
//		}
//	}
//}

//void Depth_first_search(ALGraph* G,int vi,int vj)
//{
//	bool visited2[MaxVertexNum] = { 0 };
//	int i = 0;
//	int flag = 0;
//	for (i = 1; i <= G->vexnum; i++)
//	{
//		visited2[i] = false;
//	}
//	/*for (i = 1; i <= G->vexnum; i++)
//	{
//		if (!visited2[i])
//		{
//			DFS(G, i, visited2);
//		}
//	}*/
//	DFS(G, vi, vj, visited2, &flag);
//	if (flag == 1)
//		return true;
//	else
//		return false;
//		
//}


//void DFS(ALGraph* G, int v,int vj, bool visited2[],int* flag)
//{
//	if (v == vj)
//	{
//		*flag = 1;
//		return;
//	}
//	visited2[v] = true;
//	int p = 0;
//	for (p = FirstNeighbor(G, v); p > 0; p = NextNeighbor(G, v, p))
//	{
//		if (!visited2[p] && !(*flag))
//		{
//			DFS(G, p, vj,visited2,flag);
//		}
//	}
//}


//void Depth_first_search(ALGraph* G)
//{
//	bool visited2[MaxVertexNum] = { 0 };
//	int i = 0;
//	for (i = 1; i <= G->vexnum; i++)
//	{
//		visited2[i] = false;
//	}
//	for (i = 1; i <= G->vexnum; i++)
//	{
//		if (!visited2[i])
//		{
//			DFS(G, i, visited2);
//		}
//	}
//}


//void DFS(ALGraph* G, int v, bool visited2[])
//{
//	visit(G, v);
//	visited2[v] = true;
//	int p = 0;
//	for (p = FirstNeighbor(G, v); p > 0; p = NextNeighbor(G, v, p))
//	{
//		if (!visited2[p])
//		{
//			DFS(G, p, visited2);
//		}
//	}
//}


void FindPathDFS(ALGraph* G, int vi, int vj, bool* visited,int* data,int d)
{
	int p = 0;
	d++;
	data[d] = vi;
	visited[vi] = true;
	if (vi == vj)
		print(data, d);
	for (p = FirstNeighbor(G, vi); p >= 0; p = NextNeighbor(G, vi, p))
	{
		if (!visited[p])
			FindPathDFS(G, p, vj, visited,data,d);
	}
	visited[vi] = false;
	/*visit(G, vi);
	if (vi == vj)
		return;
	visited[vi] = true;
	int p = 0;
	for (p = FirstNeighbor(G, vi); p >= 0; p = NextNeighbor(G, vi, p))
	{
		if (!visited[p])
			FindPath(G, p, vj, visited);
	}*/
}


void FindPath(ALGraph* G, int vi, int vj)
{
	bool* visited = (bool*)malloc(sizeof(bool) * G->vexnum);
	int* data = (int*)malloc(sizeof(int) * G->vexnum);
	int i = 0;
	int d = -1;
	for (i = 0; i < G->vexnum; i++)
	{
		visited[i] = false;
	}
	FindPathDFS(G, vi, vj, visited,data,d);
}



int main()
{

	return 0;
}