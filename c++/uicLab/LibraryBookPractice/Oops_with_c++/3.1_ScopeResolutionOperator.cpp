#include<iostream>
using namespace std;
// Summarry:    It is to be noted ::m will always refer to the global m. Inthe inner block, ::m refers to the value of 10 and not 20.

int m  = 10;        // global m
int main(int argc, char const *argv[])
{

    int m = 20;     // m redeclared local to main
    {
        int k = m;
        int m = 30; // m declare again local to inner block
        cout<<"We are in inner block \n";
        cout<<"k = "<< k <<"\n"; // 20
        cout<<"m = "<< m <<"\n"; // 30
        cout<<"::m = "<< ::m <<"\n"; // 10
    }
    cout<<"\nWe are in Outer block \n";
    cout<<"m = "<< m <<"\n"; // 10
    return 0;
}
