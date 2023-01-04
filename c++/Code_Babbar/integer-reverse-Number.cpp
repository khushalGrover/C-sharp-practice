// program to find reverse number
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int rev=0,n=0,i=0,digit=0;

  cout<<"Enter a number to find reverse of it. ";
  cin>>n;

  while(n != 0)
  {
    // to get ones digit of number
    digit = n%10;

    // to prevent excepation case
    if( (rev > INT_MAX/10) || (rev < INT_MIN/10) )
    {
      cout<<"0";
      break;
    }

    // rev = (rev * 10) + digit
    rev = (rev * 10) + digit;

    // to remove ones digit from number
    n = n/10;

  }
  cout<<rev;
  return 0;
}
