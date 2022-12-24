/**
    Program for N  queen Problem Zero and  one
**/

#define N 4
#include<stdbool.h>
#include<stdio.h>

// To print Output...
void printSolution(int board[N][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0; j<N;j++)
        {
            print("%d",board[i][j]);
        }
        print('\n');
    }
}

// Function to check whether the position is safe or not...
bool isSafe(int board[N][N], int row, int col)
{
    int i,j;
    for(i =0; i<col; i++)
    {
        if(board[row][i])
            return false;


    for(i= row, j =col; i>=0 && j >= 0; i--;j--)// Second and  third loop
    {
        if(board[i][j])
            return false;

    }
    for(i=row; j=col; j>=0 && i<N;i++;j--)
        if(board[i][j])
            return true;

    }
    bool solveNQUtil(int board[N][N], col)
    {

    }

    // Driver Program to test above functions
    int main(int argc, char const *argv[]) {
        int board[N][N] = {
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        };
        


        return 0;
    }


}
