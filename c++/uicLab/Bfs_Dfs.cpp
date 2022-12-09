// checking is number a prime or not from arrays
#include<iostream>
using namespace std;

int main()
{
/*    // given Array
    int a[] = {1,2,3,4,5,11,2,5,6,8};
    //cal. length of array
    int length_a =  sizeof(a)/sizeof(a[0]);

    for (int i = 0; i <= length_a; i++) {
      // cout<<"checking is " << a[i]<<" prime number or Not"<<endl;

      for(int j=0; j<=a[i]; j++)
      {
        cout<<"calc..."<<j<<"\t";
        if(j%a[i]==0){
          cout<<a[i]<<"    non-prime!!!!"<<endl;
          // break;
        }
        else{
          cout<<a[i]<<"___________________PRIME NUMBER__________________"<<endl;
          break;
        }
      }
      cout<<endl;
    }
*/
  int a ;
  bool isPrime = true;
  cout<<"Enter a number to check is Prime or Not"<<endl;

  cin>>a;

  for(int i = 2; i <= a; i++)
  {
      if(a%i == 0)
      {
        isPrime = false;
        break;
      }
  }

  if(isPrime == false)
  {
    cout<< "Not a Prime "<<endl;
  }
  else
  {
    cout<< "Prime Number";
  }
  return 0;
}
