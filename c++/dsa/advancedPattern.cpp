#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

// inverted pattern
    /*

    for(int i=1; i<=n; i++)
    {
        for (int j = 1; j <= n+1-i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    */
// 0-1 pattern
   /*

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<(i+j)%2<<" ";
        }
        cout<<endl;
    }

    */
// rhombus Pattern
  /*   for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=n; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
 */

// number Pattern
    /* for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<j<<" ";

        }

        cout<<endl;
    }
 */

// Palindromic Pattern

    for(int i=1; i<=n; i++)
    {
        int j;
        for(j=1; j<=n-i; j++)
        {
            cout<<"  ";
        }

        for(; j<=n+i-1;j++)
        {
            cout<<"*"<<" ";
        }

        cout<<endl;
    }
    cout<<"first part runned";
    if(true)
{
    cout<<"enter in if condition";
    for(int i=n; i<=1; i--)
    {
        int j;
        for(j=1; j<=n-i; j++)
        {
            cout<<"  ";
        }

        for(; j<=n+i-1;j++)
        {
            cout<<"*"<<" ";
        }

        cout<<endl;
    }
}
    return 0;
}
