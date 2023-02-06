// program to find largest and smallest elemtn from user input array....
#include <iostream>
using namespace std;

int array[20];
int size=0;

void displayArray(int arr[], int sizeOfArray)
{
    cout<<"displying input array: \n";
    for(int j=0; j < sizeOfArray; j++)
    {
        cout<<array[j]<<" ";
    }
    cout<<endl<<endl;
}

void inputArray(int size)
{
    cout<<"Enter elements of array:";
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
}

int displayLargest(int arr[], int size)
{
    int largestElement= -200000; // INT_MIN;

    for (int k = 0; k < size; k++)
    {
        if(arr[k] >= largestElement )
        {
            largestElement = arr[k];
        }
    }
    return largestElement;
}

int displaySmallest(int arr[], int size)
{
    int smallestElement= 200000; // todo: INT_MAX;
    for (int i = 0; i < size; i++) {
        if (arr[i] < smallestElement ) {
            smallestElement = arr[i];
        }
    }
    return smallestElement;
}

int displaySum(int arr[], int size)
{
    int sum=0;
    for (size_t i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}


int main(int argc, char const *argv[])
{
    cin>>size;

    // input array
    inputArray(size);

    // display original array
    displayArray(array, size);

    // give largest value from array
    cout<<"largest element in input array is: "<<displayLargest(array, size)<<endl;

    // print smalleset element
    cout<<"smallest element in input array is: "<<displaySmallest(array, size)<<endl;

    // print sum of elements
    cout<<"sum of elements is : "<<displaySum(array, size)<<endl;

    return 0;
}
