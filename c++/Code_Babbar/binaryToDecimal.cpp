#include<iostream>
#include<math.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int ans =0, digit=0, n=0,i=0;
  cin>>n;

  while(n != 0)
  {
    // to get ones digit of n
    digit = n % 10;

    if(digit == 1){
      ans = ans + pow(2,i);
    }

    n = n / 10;
    i++;
  }


  cout<< ans;
  return 0;
}
