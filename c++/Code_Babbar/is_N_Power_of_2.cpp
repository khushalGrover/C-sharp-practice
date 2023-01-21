// program to find user input number is power of  2 or not..

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[]) {

    int n=0,ans=0,ans2=1;
    cin>>n;

    // // method one using pow Function______________________________
    // for (int i = 0; i <= 30; i++) {
    //     /* code */
    //     int ans = pow(2, i);
    //     if(ans == n )
    //     {
    //
    //         cout<<"Yes its power of 2";
    //         return 0;
    //     }
    // }
    // cout<<"no!!!";


    // method two using right shift________________________________
    for(int i=0; i<=30; i++)
    {

        if(n == ans2)
        {
            cout<<"Yes its power of 2";
            return 0;
        }
        ans2 = ans2 << 1;
    }
    cout<<"no!!!";

}
