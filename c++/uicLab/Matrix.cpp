/*

Name: Khushal Grover
UID: 22MCC20040



1. Addtin of matrix
2. print diagnal elemensts
3 sum of internal square

2 3 4 5
6 7 8 9
0 9 3 2
2 3 1 5
*/

#include<iostream>
using namespace std;

int main()
{
    // variables
    int r,c,a[10][10], b[10][10], sum1=0;
    int n;
    char choice;
    bool flag=true;
    // number of rows and columns
    cout<<"Enter rows and columns: \n ";
    // cin >> r>>c ;
    cin>>n;

/*

    // while (flag) {
    //   cout<< "Enter a choice to choose operations:\nB. Addtion of diagnal elemensts\nC. Sum of internal square elemensts"<<endl;
    //
    //   cin>>choice;
    //   switch (choice) {
    //     case 'A':
    //           // addtion of matric
    //           cout<<"trying  ot add";
    //           break;
    //     case 'B':
    //     cout<<"trying  ot add";
    //           // Sum diagnal
    //       break;
    //     case 'C':
    //     cout<<"trying  ot add";
    //       break;
    //
    //     case 'Q':
    //       cout<<"Program Ended";
    //       flag=false;
    //
    //     default:
    //     cout<<"Invliad choice\n Enter only Captial"<<endl;
    //         flag=false;
    //       break;
    //   }
    // }
    //

*/



    cout<<"Enter elemensts:\n";
    // Input matrix
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {

        cin>>a[i][j];

      }
    }
    // OutPut matrix
    cout<<"Original matrix is: \n";
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {

        cout<<a[i][j]<<" ";

      }
      cout<<endl;
    }
/*
    // OutPut adddtions of matrix by its self
    // cout<<"\n\nSum of Matrix is:\n";
    // for (int i = 0; i < r; i++) {
    //   for (int j = 0; j < c; j++) {
    //
    //     a[i][j] += a[i][j];
    //     cout<<a[i][j]<<" ";
    //   }
    //   cout<<endl;
    // }
    //
    //
    //
    //
    //
    // cout<<"diagnal elemensts are: ";
    // // addtion of diag. elemensts
    // for (int i = 0; i < r; i++) {
    //   for (int j = 0; j < c; j++) {
    //     if(i==j)
    //     {
    //       sum1 += a[i][j];
    //       cout<<a[i][j]<<" ";
    //     }
    //
    //
    //   }
    // }
    //
    // cout<<"Anti-diagnal elemensts are: ";
    // // addtion of anti-diagnal elemensts
    // for (int i = 0; i < r; i++) {
    //   for (int j = 0; j < c; j++) {
    //     if(i+j == c-1 && i!=j)
    //     {
    //       sum1 += a[i][j];
    //       cout<<a[i][j]<<" ";
    //     }
    //
    //
    //   }
    // }
    // cout<<"\n\n ------ ssum of both diagnal are:  "<< sum1;
    //
    // //
    */

    // find shorting
    // floywd war shell algoro
    for(int k=1; k<=n; k++)
    {
      for (int i = 0; i <= n; i++)
      {
        for (size_t j = 0; j <= n; j++)
        {
            a[i,j] = min'/-
        }
      }
    }



    return 0;
}


void addMatrix(int arr[20][20]){

}
