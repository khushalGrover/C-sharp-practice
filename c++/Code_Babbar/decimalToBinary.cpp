// program to convert decimal number to binary
#include<iostream>
#include<math.h>
using namespace std;

int main(int argc, char const *argv[])
{
  long int i=0, n=0,ans=0;
  cin>>n; // 5
  while(n>0)
  {
    int bit = n & 1;  // 5 & 1 -> 101 & 001 = 001 // 1 // EVEN OR ODD // BIT == 2 % N
    ans = ans + (bit * pow(10, i)); // 0 + (1 * 1) // 1
    n = n >> 1; // similar to n = n / 2; // 5 >> 10100 10 // 110 >> 1 = 11
    i++;
  }

  cout<<ans;
  cin>>n;
  return 0;
}
