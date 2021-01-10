#include <iostream>

using namespace std;
#define M 8
#define N 8
void floodfillutil(int screen[M][N],int x,int y,int prevC,int newC)
{
    if(x<0||x>=M||y<0||y>=N)
        return ;
    if(screen[x][y]!=prevC)
        return ;
    if(screen[x][y]==newC)
        return ;
    screen[x][y]=newC;
    floodfillutil(screen,x+1,y,prevC,newC);
    floodfillutil(screen,x-1,y,prevC,newC);
    floodfillutil(screen,x,y+1,prevC,newC);
    floodfillutil(screen,x,y+1,prevC,newC);

}
void floodfill(int screen[][N],int x,int y,int newC)
{
    int prevC=screen[x][y];
    floodfillutil(screen,x,y,prevC,newC);

}

int main()
{
  int screen[M][N]={{1,1,1,1,1,1,1,1},
                {1,1,1,1,1,1,0,0},
                {1,0,0,1,1,0,1,1},
                {1,2,2,2,2,0,1,0},
                {1,1,1,2,2,2,2,0},
                {1,1,1,1,1,2,1,1},
                {1,1,1,1,1,2,2,1},
                };
 int x=4,y=4,newC=3;
 floodfill(screen,x,y,newC);
 cout<<"updated screen after call to floodfill:n";
 for(int i=0;i<M;i++)
 {
     for(int j=0;j<N;j++)
     {
         cout<<screen[i][j]<<" ";

     }
     cout<<endl;
 }
 return 0;
}
