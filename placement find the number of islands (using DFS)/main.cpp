#include <iostream>
#include <cstring>


using namespace std;
#define ROW 5
#define COL 5
int issafe(int M[][COL],int row,int col,bool visited[][COL])
{
    return (row>=0)&&(row<ROW)&&(col>=0)&&(col<COL)&&(M[row][col]&&!visited[row][col]);
}
void DFS(int M[][COL],int row,int col,bool visited[][COL])
{
    static int rowNbr[]={-1,-1,-1,0,0,1,1,1};
    static int colNbr[]={-1,0,1,-1,1,-1,0,1};
    visited[row][col]=true;
    for(int k=0;k<8;k++)
    {
        if(issafe(M,row+rowNbr[k],col+colNbr[k],visited))
           DFS(M,row+rowNbr[k],col+colNbr[k],visited);
    }
}
int countislands(int M[][COL])
{
    bool visited[ROW][COL];
    memset(visited,0,sizeof(visited));
    int count=0;
    for(int i=0;i<ROW;i++)
        for(int j=0;j<COL;j++)
    {
        if(M[i][j]&& !visited[i][j])
        {
            DFS(M,i,j,visited);

            count++;
        }
    }
    return count;
}
int main()
{
    int M[][COL]={{1,1,0,0,0},
                  {0,1,0,0,1},
                  {1,0,0,1,1},
                  {0,0,0,0,0},
                  {1,0,1,0,1}};

    cout<<"number of islands is: " <<countislands(M);
    return 0;


}
