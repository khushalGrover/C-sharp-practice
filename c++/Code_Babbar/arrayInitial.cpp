//  Initialize array.....
#include <iostream>
using namespace std;

void printArray(int arr[], int sizeOfArray)
{
    cout<<"\n\nValues is: ";
    for(int i =0; i< sizeOfArray; i++)
    {
        cout<<"\t"<<arr[i];
    }
}


int main(int argc, char const *argv[])
{
    int array[5];           // garbge values in all elements
    int array2[5] = {0};    // only 0 values in all elements
    int array3[5] = {1};    // first value is 1 and all other values is 0
    int array4[5];          // garbge values in all elements`
    int array5[5];          // garbge values in all elements`

    // calling fill to initialize first five values to 1
    fill_n(array4, 5, 1);   // Initialize five elements to 1
    fill_n(array5, 3, 7);   // Initialize three elements again to 7 And other elements conatins garbage values....

    // for (int i = 0; i < 5; i++)
    // {
    //
    //     cout<<"array: "<< array[i] << "\t\tarray2: " << array2[i] << "\tarray3: " << array3[i] << "\tarray4: " << array4[i] << "\tarray5: " << array5[i];
    //
    //
    //     cout<<endl;
    // }

    printArray(array, 5);
    printArray(array2, 5);


    return 0;
}
