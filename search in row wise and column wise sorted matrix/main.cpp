#include <iostream>

using namespace std;


int search(int mat[4][4],int n,int x)
{
    if(n==0)
        return-1;
    int smallest=mat[0][0];
    int largest=mat[n-1][n-1];

    if(x<smallest||x>largest)
        return -1;
    int i=0;
    int j=n-1;
    while(i<n&&j>=0)
    {
        if(x==mat[i][j])
        {
            cout<<"n found at"<<i<<" ,"<<j;
            return 1;

        }
        if(x<mat[i][j])
        {
            j--;
        }
        if(x>mat[i][j])
        {
            i++;
        }
    }
    cout<<"n element not found";
    return 0;


}
int main()
{
    int mat[4][4]={  {10,20,30,40},
                     {15,25,35,45},
                     {27,29,37,48},
                     {32,33,39,50}};
 search(mat,4,29);
 return 0;
}
