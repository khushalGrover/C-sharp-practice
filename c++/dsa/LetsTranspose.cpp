#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // variables...
    int row=0,column=0;
    int a[10][10], b[10][10];

    // Input Row and Columns Matrix
    cout<<"Enter rows and columns you want in matrix :"<<endl;
    cin>>row >> column;

    // Draw Empty Matrix
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++) {
          cout<<"_ ";
        }
        cout<<endl;
    }

    // Input Matrix
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++) {
          cin>>a[i][j];
        }
        cout<<endl;
    }

    //  Show Input Matrix
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++) {
          cout<<"\t\t a["<<i<<"]["<<j<<"]: "<<a[i][j];
        }
        cout<<endl;
    }
    cout<<endl<<endl<<endl;

    // Transposing...
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++) {
          cout<<" a["<<i<<"]["<<j<<"]: "<<a[j][i];
        }
        cout<<endl;
    }

    return 0;
}
