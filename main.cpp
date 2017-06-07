#include "Test.h"
#include <iostream>

using namespace std;

bool nodeHasBeenVisited(bool* visitedNodes, int currentNodeIndex)
{
	return visitedNodes[currentNodeIndex];
}

void initVisitedArray(bool* visited, int size)
{
	for(int i = 0; i < size; ++i)
	{
		visited[i] = false;
	}
}

bool hasCycle(int** graph, int size)
{
	//graph[fromNode][toNode] = cost
	int currentNode = -1;
	int cost = -1;
	bool visitedNodes[size];
	initVisitedArray(visitedNodes, size);
	for(int i = 0; i < size; ++i)
	{
		visitedNodes[i] = true;
		for(int k = 0; k < size; ++k)
		{
			cost = graph[i][k];
			if(cost != -1)
			{
				if(nodeHasBeenVisited(visitedNodes, k))
				{
					return true;
				}
			}
		}
	}
    return false;
}

int main ()
{
    test();
    return 0;
}
