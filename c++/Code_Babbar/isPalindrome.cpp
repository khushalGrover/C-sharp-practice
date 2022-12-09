// program to fin number of notes
#include<iostream>
using namespace std;



bool isPalindrome(int x)
{
      int ans =0;
      while(x != 0)
      {
          int digit = x%10;
          ans = (ans * 10) + digit;
          x = x/ 10;
          if(x == ans)
          {
              return true;
              break;
          }
      }

      if(ans != x)
      {
          return false;
      }
      return false;
}


int main(int argc, char const *argv[])
{
  int ans =0,inp=0;

  cin>>inp;
  if(isPalindrome(inp))
  {
    cout<<"yes!!";

  }
  else
  {
    cout<<""
  }


  return 0;
}
