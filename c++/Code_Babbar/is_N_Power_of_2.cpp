#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[]) {

    int n=0,ans=0;
    cin>>n;

    for (int i = 0; i <= 30; i++) {
        /* code */
        int ans = pow(2, i);
        if(ans == n )
        {

            cout<<"Yes its power of 2";
            return 0;
        }
    }
    cout<<"no!!!";


}
