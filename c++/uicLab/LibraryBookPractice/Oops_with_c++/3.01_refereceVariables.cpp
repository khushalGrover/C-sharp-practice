#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    float total = 100;
    float & t = total;        // here & is not an address operator. The notation float & means referece to float.

    cout<<"total is: "<< total<<endl;
    cout<<"t is: "<< t << endl;

    total = 900;

    cout<<"total is: "<< total<<endl;
    cout<<"t is: "<< t << endl;
    return 0;
}
