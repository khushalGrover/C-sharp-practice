// program to find AP with using funtions
/*
    eg. input 3
    output 16
*/
// #include <iostream>
// using namespace std;
//
// int ap(int n)
// {
//     return 3*n + 7;
// }
//
// int main(int argc, char const *argv[])
// {
//     int num=0;
//     cin>>num;
//     cout<<ap(num);
//     return 0;
// }



//  program to find the number of set bit in a and b
/*
#include <iostream>
using namespace std;
int checkNumberOfBit(int n)
{
    int numberOfBits=0;
    while(n != 0)
    {
        int bit = n & 1;
        if(bit != 0)
        {
            numberOfBits++;
            n = n >> 1;
        }
        else
        {
            n = n >> 1;
        }
    }
    return numberOfBits;
}
int main(int argc, char const *argv[])
{
    int num1,num2;
    cin>> num1>>num2;
    cout<<"Number of bit is: "<< checkNumberOfBit(num1)+checkNumberOfBit(num2);

    return 0;
}
*/



//  program to find Fibonacci series to n th term

#include <iostream>
using namespace std;

int Fibonacci(int n){
    int a=0,b=1,result=0,count;
    count = 0;
    cout<<count;
    while(n == count)
    {
        result = a + b;
    }
    count++;

    return Fibonacci(result);

}


int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    Fibonacci(n);

    return 0;
}
