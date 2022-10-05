#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int row=0,column=0;
    // Input a matrix
    cout<<"Enter rows and columns you want in matrix :"<<endl;
    cin>>row >> column;


    // draw matrix
    /*

 __         __
|             |
|  *  *  *  * |
|  *  *  *  * |
|__         __|




    */
    for (int i = 0; i < row; i++)
    {
        cout<<"*";
    }
    
    // transpose

    // Output final matrix

    return 0;
}
