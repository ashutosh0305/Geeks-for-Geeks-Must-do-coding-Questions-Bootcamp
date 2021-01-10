#include <iostream>

using namespace std;
#define r 3
#define c 4


void modifymatrix(bool mat[r][c])
{
    bool row[r];
    bool col[c];
    for(int i=0;i<r;i++)
    {
        row[i]=0;
    }
    for(int i=0;i<c;i++)
    {
        col[i]=0;

    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(mat[i][j]==1)
            {
                row[i]=1;
                col[j]=1;
            }
        }

    }
    for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if((row[i]=1)||(col[j]==1))
                    {
                        mat[i][j]=1;
                    }
            }


        }

}
void printmatrix(bool mat[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<mat[i][j];

        }
        cout<<endl;
    }
}

int main()
{
    bool mat[r][c]={{1,0,0,1},
                    {0,0,1,0},
                    {0,0,0,0}};

    cout<<"input matrix\n";
    printmatrix(mat);
    modifymatrix(mat);
    cout<<"matrix after modification \n";

    printmatrix(mat);
    return 0;
}
