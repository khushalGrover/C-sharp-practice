/*  
    Program to Draw a square with a user-specified size
    Draw both fill and emty(border only).
    Inspire by a question from sololearn 


    Sample output : 
      
      Hi, please write the size you want for your square: 5
----------------------------------

Full cube:
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 

Empty cube:
* * * * * 
*       * 
*       * 
*       * 
* * * * * 

*/


using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace kg
{
    class drawSquare
    {
        static void Main(string[] args)
        {
            
            int size=0;
            Console.Write("Hi, please write the size you want for your square: ");

            // check is user input is int or not
            bool wrongImput = true;
            while(wrongImput)
            {
                try
                {
                    size = Convert.ToInt32(Console.ReadLine());
                    wrongImput=false;
                }
                catch 
                {
                    Console.WriteLine("Error - Please enter only integer "); 
                }
            } 
            Console.WriteLine("----------------------------------");
            Console.WriteLine("");

            // draw fill square //
            Console.WriteLine("Full cube:");
            for(int i = 0; i < size; i++)
            {
               for(int j = 0; j < size; j++)
               {
                  Console.Write("* "); 
               } 
               Console.WriteLine("");
            }
            Console.WriteLine("");


                // draw emty square //
            Console.WriteLine("Empty cube:");
            for(int i = 0; i < size; i++)
            {
                if(i==0 || i==(size-1))
                {
                    for(int j = 0; j < size; j++)
                    {
                        Console.Write("* "); 
                    }
                }
                else
                    for(int j=0; j<=(size-1);j++)
                    {
                        if(j==0 || j==(size-1))
                            Console.Write("* ");
                        else
                            Console.Write("  ");  
                    }
               Console.WriteLine("");
            } 

        }
    }
}
