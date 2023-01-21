//  program to find is target key is present in array or not??
#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[], int size, int keys)
{
    // for(int i=0; i < size; i++)
    // {
    //     // cout<<"checking is "<< arr[i]<< " = = " << keys<<endl;
    //     if(arr[i] == keys)
    //     {
    //         flag = true;
    //         // return;
    //     }
    // }
    // if(flag)
    // {
    //
    //     cout<<"yes found"<<endl;
    // }
    // else
    // {
    //     cout<<"not found";
    //
    // }
    for(auto element : arr)
        if(element == keys)
            return true;

    return false;

}


int main()
{
    int size = 10;
    int array[] = {-9, 2, 5, 6, 12, 17, 22, 4, 55, 32};
    int targetElement = 55;

    if(isPresent(array, size, targetElement))
    {
        cout<<"we found: "<< targetElement<< endl;
        return 0;
    }
    cout<<"we NOT found!!! "<< targetElement<< endl;
    // if(isPresent(array, size, targetElement))

    return 0;
}
