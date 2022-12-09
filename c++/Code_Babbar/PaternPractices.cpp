#include<iostream>
using namespace std;

// simple filled Rectangle
void Draw_Filled_Rect(int r, int c)
{
    for(int i=0; i <= r; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            cout<<"# " ;
        }
        cout<<endl;
    }
    cout<<"  Filled Rectangle";
}

void Draw_Empty_Rect(int r, int c)
{
    for(int i=0; i <= r; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            if(j == 0 || i ==0 || i == r || j == c)
            {
                cout<<"# " ;
            }
            else
            {
                cout<<"  ";
            }


        }
        cout<<endl;
    }

    cout<<"  Empty Rectangle";
}

void Draw_Triangle(int h)
{

  /*

    *
    * *
    * * *
    * * * *

  */
    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=h; j++)
        {
            cout<<"# ";
            if(j == i)
            {
                break;
            }
        }
        cout<<endl;
    }
    cout<<" Triangle";
}


void Draw_Triangle2(int h)
{

  /*

          *
        * *
      * * *
    * * * *

  */
    for(int i=1; i<=h; i++)
    {

      for(int j=h; j>=1; j--)
      {
          cout<<j;

      }
      cout<<endl;

        for(int j=1; j<=h; j++)
        {
            cout<<j;
            if(j == i)
            {
                break;
            }
        }
        cout<<endl;
    }
    cout<<" Triangle * after space";
}


void Draw_Number_Triangle(int h)
{
    /*

    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5

    */

    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=h; j++)
        {
            cout<<i<<" ";
            if(j == i)
            {
                break;
            }
        }
        cout<<endl;
    }
    cout<<"  Number Triangle";
}


void Draw_Number_Triangle2(int h)
{
    /*

    1
    2 3
    4 5 6
    7 8 9 10

    */
    int n = 1;
    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=h; j++)
        {
            cout<<n<<" ";
            n++;
            if(j == i)
            {
                break;
            }
        }
        cout<<endl;
    }
    cout<<"  Number Triangle 2";
}

void Pascal_Triangle(int h)
{
    /*
           *
         * * *
       * * * * *
     * * * * * * *

(2*i ) - 1 --------> * (stars)
row - 1    --------> _ (space)


___1 .......3
__2 3 ......2
_4 5 6 .....1
7 8 9 10.....0

    */
    int n = 1;
    for(int i=1; i<=h; i++)
    {
        for (int k = h; k>=0; k--) {
          /* code */
          cout<<k;
        }
        for(int j=1; j<=(2*i - 1); j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"  Pascal's Triangle";
}



void Draw_Counting_Number_Triangle(int h)
{
    /*
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
6 7 8 9 10 11
7 8 9 10 11 12 13
8 9 10 11 12 13 14 15
9 10 11 12 13 14 15 16 17
10 11 12 13 14 15 16 17 18 19
11 12 13 14 15 16 17 18 19 20 21
12 13 14 15 16 17 18 19 20 21 22 23
    */

    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=h; j++)
        {
            cout<<i + j - 1<<" ";
            if(j == i)
            {
                break;
            }
        }
        cout<<endl;
    }
    cout<<"  Counting Number Triangle";
}

void Draw_Rombus(int h)
{
    int count=0;
    for(int i=h; i>=1; i--)
    {
        for(int j=1; j<=h; j++)
        {
            cout<<"  ";
            if(j == i)
            {
                for(int p=0; p<=h; p++)
                {
                    cout<<"* ";
                }
                break;
            }
        }
        cout<<endl;
    }
    cout<<"  Rombus";
}

int main(int argc, char const *argv[])
{
    // int rows=5, columns, height;
    // int a;
    // cout<<"trying to input";
    // cin>>a;
    // cin>>columns;
    // cin>>height;
    // cout<<"input is taken"<<height<<endl;
    //
    // Draw_Filled_Rect(rows, columns);
    // cout<<"\n\n\n______________\n\n\n";
    //
    // Draw_Empty_Rect(rows, columns);
    // cout<<"\n\n\n______________\n\n\n";
    //
    // Draw_Triangle(height);
    // cout<<"\n\n\n______________\n\n\n";
    //
    // Draw_Triangle2(height);
    // cout<<"\n\n\n______________\n\n\n";
    //
    // Draw_Number_Triangle(height);
    // cout<<"\n\n\n______________\n\n\n";
    //
    // Draw_Counting_Number_Triangle(height);
    // cout<<"\n\n\n______________\n\n\n";
    //
    // Draw_Number_Triangle2(height);
    // cout<<"\n\n\n______________\n\n\n";
    //
    // Pascal_Triangle(height);
    // cout<<"\n\n\n______________\n\n\n";
    //
    // Draw_Rombus(height);
    //



    int no_100=0, no_50=0, no_20=0, no_1=0, bankAmount = 1330;

    no_100 = bankAmount / 100;

    int cash_without_100 = bankAmount%100;
    no_50 = cash_without_100 / 50;

    int cash_in_hand = bankAmount - no_100*100 - no_50*50;
    no_20 = cash_in_hand / 20;
    cash_in_hand = cash_in_hand - no_20*20;

    // int cash_without_20 = cash_without_50%20;
    // no_1 = cash_without_20;


    /*
    cout << "Number of Hundred ruppes notes from total amount is "<<no_100<<"notes"<< endl<<
    " Remaining amount of cash without Hundred ruppes notes " <<cash_without_100<<" Cash"
    ""
     << endl;
     */

     cout<<"number of 100 is: "<< no_100 <<" and Remaining cash in hand is: "<<cash_without_100<<endl;
     cout<<"number of 50 is: "<< no_50 <<" and Remaining cash in hand is: "<<cash_in_hand<<endl;
     cout<<"number of 20 is: "<< no_20 <<" and Remaining cash in hand is: "<<cash_in_hand<<endl;
     cout<<"number of 1 is: "<< no_1 <<" and Remaining cash in hand is: "<<cash_in_hand<<endl;


    return 0;
}
