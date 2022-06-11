#include<iostream>
using namespace std;

int main()
{
    int r,c=1;
    cout<<"enter num1 and num2 for print shape"<< endl;
    cin>> r;

    // fill rect
    /*
    // print fill rectangle   
     for (int i = 0; i < r; i++)
    {
        for (int i = 0; i < c; i++)
        {
            cout<< "# ";
        }
        cout<<endl;b
    } */
    // holo rext
    /* 
    // print holo rectangle
     for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == 0 || i == r-1)
            {
                code 
                cout<<"# ";
            }
            else if (j == 0 || j == c-1)
            {
                cout<< "# ";
            }
            else 
            {
                cout << "  "; 
            }            
        }
        cout<<endl;
    } 
    */
    // pyramid
    /* 
   // print pyramid
   for(int i=r; i>=1; i--)
   {
       for(int j=1; j<=i; j++)
       {
           cout<<"#";
       }
       cout<<endl;
   }
 */
    // half pyramid after 180 rotation
    /* for(int i=1; i<=r;i++)
    {
        for(int j=1; j<=r; j++)
        {
            if(j<=r-i)
            {
                cout<<"  "; 
                
            }
            else
            {
                cout<<" *";
                

            }
        }
        cout<<endl;
    } */
    // half pyramid using nums
    /* for (int i=1; i<=r; i++)
    {
        for(int j=1; j<=i; j++)
            cout<< " "<<i;

        cout<<endl;
    } */

    // for (int i=1; i<=r; i++)
    // {
    //     for(int j=1; j<=i; j++){
    //         cout<< " "<<c;
    //         c++;

    //     }
            

    //     cout<<endl;
    // }

    //ButterFly
    /*
        Rows : 1 to n
        #    : Row no.
        Space: 2*n-2*Row No.
    */
/*
   for (int i = 1; i <=r; i++)
   {
       for (int j = 1; j <=i; j++)
       {
           cout<<"*";
       }
       int space= 2*r - 2*i;
       for (int j = 1; j <= space; j++)
       {
           cout<<" ";
       }
       for (int j = 1; j <=i; j++)
       {
           cout<<"&";
       }
       cout<<endl;
       
   }
   for (int i = r; i <=1; i--)
   {
       for (int j = 1; j <=i; j++)
       {
           cout<<"*";
       }
       int space= 2*r - 2*i;
       for (int j = 1; j <= space; j++)
       {
           cout<<" ";
       }
       for (int j = 1; j <=i; j++)
       {
           cout<<"#";
       }
       cout<<endl;
       
   }

*/
    
    for(int i=0;i<2*r;i++){
        for(int j=0;j<2*r;j++){
            if(i+j>=(2*r - 1)&&(j-i)>=0)
                cout<<"*";
            else if (j-i<=0 && i+j <= (2*r - 1))
                cout<<"*";
            else 
                cout<<" ";
        }cout<<endl;
    }
   




    return 0;
}