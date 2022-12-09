/*
  Simple use of class
*/



#include<iostream>
using namespace std;


class kg
{
  int a, b;
public:
  void myInput()
  {
    cout<<"Enter Two Number"<<endl;
    cin>>a>>b;

  }

  void myOutput()
  {
    cout<<"Number is: "<< a<<endl;
    cout<<"Number2 is: "<<b << endl;
  }
};



int main(int argc, char const *argv[])
{
  kg x,y;
  x.myInput();
  y.myInput();

  x.myOutput();
  y.myOutput();

  return 0;
}
