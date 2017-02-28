#include "Test.h"

int** _initGraph(int size)
{
    int **answer = new int* [size];
    for(int i=0;i<size;i++)
    {
        answer[i]=new int[size];
        for(int j=0;j<size;j++)
        {
            answer[i][j]=-1;
        }
    }
    return answer;
}

void test()
{
    int** g1 = _initGraph(5);
    g1[0][1]=99;
    g1[0][2]=50;
    g1[1][2]=50;
    g1[1][3]=50;
    g1[2][3]=99;
    g1[3][4]=75;

    int** g2 = _initGraph(3);
    g2[0][1]=5;
    g2[1][2]=10;
    g2[2][0]=6;

    int** g3 = _initGraph(4);
    g3[0][1]=7;
    g3[0][2]=10;
    g3[1][2]=6;
    g3[2][3]=6;

    int** g4 = _initGraph(5);
    g4[0][1]=7;
    g4[0][4]=8;
    g4[1][2]=10;
    g4[2][3]=6;
    g4[3][0]=2;
    g4[1][3]=7;

    if(!hasCycle(g1, 5)
        && hasCycle(g2, 3)
        && !hasCycle(g3, 4)
        && hasCycle(g4, 5)
       )
    {
        cout<<"Test: Pass"<<endl;
    }else
    {
        cout<<"Test: Fail"<<endl;
    }

}
