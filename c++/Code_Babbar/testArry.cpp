//  program to find is target key is present in array or not??
#include <bits/stdc++.h>
using namespace std;
bool flag=false;

void isPresent(int arr[], int size, int keys)
{
    for(int i=0; i < size; i++)
    {
        if(!(keys^arr[i]))
        {
            flag = true;
        }

    }

    if(flag)
    {

        cout<<"yes found"<<endl;
    }
    else
    {
        cout<<"not found";

    }

}


int main(int argc, char const *argv[])
{
    int size = 10;
    int array[10] = {-9, 2, 5, 6, 12, 17, 22, 4, 55, 32};
    int targetElement = 55;

    // if(isPresent(array, size, targetElement))
    // {
    //     cout<<"we found: "<< targetElement<< endl;
    // }
    // else
    // {
    //     cout<<"we NOT found!!! "<< targetElement<< endl;
    // }

    isPresent(array, size, targetElement);
    return 0;
}
