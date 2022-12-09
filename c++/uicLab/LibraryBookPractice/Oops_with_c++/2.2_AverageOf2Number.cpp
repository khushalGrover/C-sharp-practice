/******************************************************************************

Average of Two Number

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    float num1,num2,sum,Average;

    cout<<"Enter 2 number : ";
    cin>>num1>>num2;

    sum=num1+num2;
    Average=sum/2;

    cout<<"Sum of number is: "<<sum<<endl;
    cout<<"Average of number is: "<<Average<<endl;

    return 0;
}
