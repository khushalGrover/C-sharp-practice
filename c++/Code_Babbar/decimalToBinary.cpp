// program to convert decimal number to binary
#include<iostream>
#include<math.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int i=0, n=0, ans=0;
  cin>>n;
  while(n!=0)
  {
    int bit = n & 1;
    ans = ans + (bit * pow(10, i));
    n = n >> 1; // similar to n = n / 2;
    i++;
  }

  cout<<ans;
  return 0;


}
