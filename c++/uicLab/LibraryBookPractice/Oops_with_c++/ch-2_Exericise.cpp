/******************************************************************************

Chapter 2 Exercises

*******************************************************************************/
#include <iostream>

using namespace std;


class temp
{
	float f,c;
	public:
		void inputF(void);
		void outputC(void);

};

void temp :: inputF(void)
{
	cout<<"enter fahrenheit to convert into Celsius:  ";
	cin>>f;

}

void temp :: outputC(void)
{
	// converting fahrenheit into Cesius
    c = (f - 32) * 5/9;

    cout<<"Output is:\nCelsius is temp is:  "<<c;
}




int main()
{

/*
    // to check greater number
    cout<<"Enter To Number to check greater number"<<endl;
    int a,b;
    cin>>a>>b;
    if(a>b)
    {
        cout<<"big is a: "<<a;
    }
    else
    {
        cout<<"big is b: "<<b;
    }

    // to Convert fahrenheit to Cesius
    cout<<"\n\n\nEnter fahrenheit to Convert into Cesius";

    float f,c;
    cin>>f;

    // converting fahrenheit into Cesius
    c = (f - 32) * 5/9;

    cout<<"Output is:\nCesius is temp is: "<<c;

*/


	temp t;

	t.inputF();
	t.outputC();

    return 0;
}
