#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>
#include <math.h>


#define MaxVertexNum 100
#define ROW 50
#define COL 50
#define DATA_NUM 50
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

typedef struct SqQueue
{
	int front;
	int rear;
	int data[DATA_NUM];
}SqQueue;

//void Convert(ALGraph* G, int arcs[ROW][COL])
//{
//	int i = 0;
//	for (i = 0; i < G->vexnum; i++)
//	{
//		ArcNode* p = (G->vertices + i)->first;
//		while (p != NULL)
//		{
//			arcs[i][p->adjvex] = 1;
//			p = p->next;
//		}
//	}
//}



int FirstNeighbor(ALGraph* G, int x)
{
	ArcNode* p = (G->vertices + x - 1)->first;
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


void Breadth_First_Search(ALGraph* G,SqQueue* Q)
{
	bool visited[MaxVertexNum] = { 0 };
	int i = 0;
	for (i = 1; i <= G->vexnum; i++)
	{
		visited[i] = false;
	}
	for (i = 1; i <= G->vexnum; i++)
	{
		if (!visited[i])
			BFS(G, i,visited,Q);
	}
}


void visit(ALGraph* G, int x)
{
	int data = (G->vertices + x - 1)->data;
	printf("%d\n", data);
}



void BFS(ALGraph* G, int x,bool visited[MaxVertexNum], SqQueue* Q)
{
	int p = 0;
	InitQueue(Q);
	visit(G, x);
	EnQueue(Q, x);
	while (!IsEmpty(Q))
	{
		DeQueue(Q, &x);
		for (p = FirstNeighbor(G, x); p > 0; p = NextNeighbor(G, x, p))
		{
			if (!visited[p])
			{
				visit(G, p);
				visited[p] = true;
				EnQueue(Q, p);
			}

		}

	}
}


void BFS_MIN_Distance(ALGraph* G, int u, SqQueue* Q)
{
	bool visited1[MaxVertexNum] = { 0 };
	int d[MaxVertexNum] = { 0 };
	InitQueue(Q);
	int i = 0;
	int p = 0;
	for (i = 1; i <= G->vexnum; i++)
	{
		d[i] = INFINITY;
		visited1[i] = false;
	}
	visited1[u] = true;
	d[u] = 0;
	EnQueue(Q, u);
	while (!IsEmpty(Q))
	{
		DeQueue(Q, &u);
		for (p = FirstNeighbor(G, u); p > 0; p = NextNeighbor(G, u, p))
		{
			if (!visited1[p])
			{
				visited1[p] = true;
				d[p] = d[u] + 1;
				EnQueue(Q, p);
			}
		}
	}
}


void Depth_first_search(ALGraph* G)
{
	bool visited2[MaxVertexNum] = { 0 };
	int i = 0;
	for (i = 1; i <= G->vexnum; i++)
	{
		visited2[i] = false;
	}
	for (i = 1; i <= G->vexnum; i++)
	{
		if (!visited2[i])
		{
			DFS(G, i, visited2);
		}
	}
}


void DFS(ALGraph* G, int v, bool visited2[])
{
	visit(G, v);
	visited2[v] = true;
	int p = 0;
	for (p = FirstNeighbor(G, v); p > 0; p = NextNeighbor(G, v, p))
	{
		if (!visited2[p])
		{
			DFS(G, p, visited2);
		}
	}
}

int main()
{

	return 0;
}