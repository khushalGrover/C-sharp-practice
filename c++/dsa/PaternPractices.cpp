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
    cout<<"Filled Rectangle";
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

    cout<<"Empty Rectangle";
}

void Draw_Triangle(int h)
{
    int count=0;
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
}


int main(int argc, char const *argv[]) 
{
    int rows=5, columns=10, height=5;

    Draw_Filled_Rect(rows, columns);
    cout<<"\n\n\n______________\n\n\n";
    Draw_Empty_Rect(rows, columns);
    cout<<"\n\n\n______________\n\n\n";
    Draw_Triangle(height);
    cout<<"\n\n\n______________\n\n\n";
    Draw_Rombus(height);

    /* code */
    return 0;
}


