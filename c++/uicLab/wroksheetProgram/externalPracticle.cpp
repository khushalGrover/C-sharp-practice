//  program to implement
#include <iostream>
using namespace std;

void inputAdjust(int v, int u)
{
    int adjMatrix[v+1][u+1];
    for(int i=0; i<u; i++)
    {
        cin>>v>>u;
        adjMatrix[v][u]=1;
        adjMatrix[u][v]=1;

    }
}


// void displayMatrix(int displayArray[10][10])
// {
//     for (size_t i = 0; i < count; i++) {
//         /* code */
//     }
// }


int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;
    inputAdjust(n,m);

    // displayMatrix(  )

    // display Matrix
    // for (size_t i = 0; i < m; i++)
    // {
    //     for (size_t i = 0; i < count; i++)
    //     {
    //         cout<<displayArray[i][j];
    //     }
    //
    // }


    return 0;
}
