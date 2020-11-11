#include<stdio.h>
#include <iostream>
#include<math.h>
#include<time.h>
using namespace std;

// structure for the first function
struct strct
{
double area;
double circ;
};
// first function that returns the area and the circumference of a circle, the input is the radius
strct function1(double r)
{

    system("CLS");
    strct circle;
    circle.area = M_PI * r *r;
    circle.circ = 2*r*M_PI;
    return circle;
}

void function2()
{
    int N;
    cout << "enter the lenght of the table to generate random values" << endl;
    cin >> N ;
    int table[N];

    for(int i=0;i<N;i++)
        table[i] = rand()%100; /* generating values from 0 to 99*/
    cout << "Values of the generated table : " << endl;
    for(int i=0;i<N;i++)
        cout << table[i] << endl;

    int maxVal ;
    int minVal ;
    maxVal = minVal = table[0];

    for(int i=1;i<N;i++)
    {


        if(maxVal<table[i])
    {
        maxVal = table[i];

    }
      if(minVal>table[i])
    {
        minVal = table[i];

    }
    }


    cout << " the minimum : "  << minVal << endl;
    cout << " the maximum : "  << maxVal << endl;


}


// function that return the fibonacci sequence for a chosen rank, the input is the rank :
int function3(int r)
{

    int table[r+1];
    table[0] = 0;
    table[1] = 1;
    for(int i=2;i<r+1;i++)
        table[i] = table[i-1]+table[i-2];

    /*cout << "values of the Fibonacci sequence :" << endl;  //if we want to print the whole fibonacci sequence from 0 till the rank chosen.
    for(int i=0;i<rank;i++)
        cout << "\n" << table[i]<<endl;*/

    return table[r];  // returning only the result of the rank chosen.

}



void function4()
{
    cout << "choose an integer to display multiplication table" << endl;
    int value;
    cin >> value;
    system("CLS");
    cout << "the multiplication table of " << value << ":\n" << endl;
    for (int i=0;i<10;i++)
        cout << value << " x " << i+1 << " =" << value*(i+1) << endl;
}

void function5(void)
{
    bool a,b,c = false;
    bool val;

    cout << " table of truth OR :" << endl;
    cout << "\n" << "a"  << "\t" << "b" <<"\t" << "c" << "\t" << "OR" << endl ;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
          for(int k=0;k<2;k++)
          {
              val = ((a || b )|| c);
              cout << "\n" << c  << "\t" << b <<"\t" << a << "\t" << val << endl ;
              a = !a;

          }
          b = !b;
        }
        c = !c;
    }

    a,b,c = false;
    cout << "\n"<< " table of truth AND :" << endl;
    cout << "\n" << "a"  << "\t" << "b" <<"\t" << "c" << "\t" << "AND" << endl ;
        for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
          for(int k=0;k<2;k++)
          {
              val = ((a && b )&& c);
              cout << "\n" << c  << "\t" << b <<"\t" << a << "\t" << val << endl ;
              a = !a;

          }
          b = !b;
        }
        c = !c;
    }


}




int main()
{
   int i = 0;
   int choice;
   // the main offers to test any of the 5 functions
   while (i==0)
   {
      cout << "choose a function from 1 to 5 \n" << endl;
      cout << "1 : area and circumference\n2 : max_min values of a table\n3 : Fibonacci sequence\n4 : multiplication table\n5 : Truth table\n" << endl;
      cin >> choice;
      system("CLS");
      switch(choice)
      {
      case 1 :
        srand(time(NULL)); // initializing random.
        strct circle;
        double radius;
        cout << "enter a radius\n" << endl;
        cin >> radius;
        circle = function1(radius);
        cout << "area : " << circle.area << endl;
        cout << "\ncircumference : "<< circle.circ << endl;
        break;

      case 2 :
        function2();
        break;

      case 3 :
        cout << "Enter the rank of the sequence" << endl;
        int r;
        int result;
        cin >> r;
        result = function3(r);
        cout << " fibonacci (" << r <<" ) : "<< result << endl;
        break;

      case 4 :
        function4();
        break;

      case 5 :
        function5();
        break;

      }

      cout << "\nto continue press 0\nto leave press any other number" << endl;
      cin >> i;
      system("CLS");
   }



   return 0;
}

