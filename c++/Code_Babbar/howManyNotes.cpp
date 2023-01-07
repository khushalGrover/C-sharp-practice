#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int notes[] = {100, 20, 10, 5, 1};
    int lengthOfArray = sizeof(notes)/sizeof(int);
    // int n_100=0, n_20=0, n_10=0, n_5=0, n_1=0;
    int i=0, totalAmount = 133;

    while(totalAmount != 0)
    {
        if(totalAmount >= notes[i])
        {
            // this note is used
            totalAmount -= notes[i];
            cout<<notes[i]<<endl;
        }
        else
        {
            // change note
            i++;
        }

    }


}
