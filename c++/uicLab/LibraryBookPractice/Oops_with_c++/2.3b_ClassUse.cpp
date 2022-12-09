/*
  Simple use of class

Summarry:
  The Program defines person as a new data of type class. The class person include two basic data type
  items and two functions to operate on that data. These functions are called member functions. the main
  program uses person to declare vaibles of its  type. As pointer out earlier, class varibles are known as
  objects. Here A is an object of type person. Class object are used to invoke the funtions defined in that
  Class.

*/


#include<iostream>
using namespace std;

class person
{
  int age;
  char name[30];
  public:
    void myInput(void);
    void myOutput(void);

};

void person :: myInput(void)
{
  cout<<"Enter Name:";
  cin>>name;

  cout<<"Enter Age:";
  cin>>age;

}

void person :: myOutput()
{

  cout<<"\nName is: "<<name<< endl;
  cout<<"\nAge is: "<<age << endl;
}

int main(int argc, char const *argv[])
{
  person p;

  p.myInput();
  p.myOutput();

  return 0;
}
