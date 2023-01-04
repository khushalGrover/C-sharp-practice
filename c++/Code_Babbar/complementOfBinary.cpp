#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int n=0,m=0,mask=0;

  cin>> n;
  m=n;
  if(n==0)
  {
      cout<<1;
  }
  else{
      while(m!=0)
      {
        mask = (mask << 1) | 1;
        m = m >> 1;
      }

      int ans = (~n) & mask;

      cout<<ans;
  }


  return 0;
}
