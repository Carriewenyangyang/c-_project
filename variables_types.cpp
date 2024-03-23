#include <iostream>
using namespace std;

/*
// Declaration of variables
int main ()
{
  // declaring variables:
  int a, b;
  int result;

  // process:
  a = 5;
  b = 2;
  a = a + 1;
  result = a - b;

  // print out the result:
  cout << result;

  // terminate the program:
  return 0;
}*/

/*
// Initialization of variables

int main ()
{
  int a=5;               // initial value: 5
  int b(3);              // initial value: 3
  int c{2};              // initial value: 2
  int result;            // initial value undetermined

  a = a + b;
  result = a - c;
  cout << result;

  return 0;

}
*/


//Introduction to strings

// my first string
#include <iostream>
#include <string>
using namespace std;

/*
int main ()
{
  string mystring;
  mystring = "This is a string";
  cout << mystring;
  return 0;
}*/


/*
// my first string
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string mystring;
  mystring = "This is the initial string content";
  cout << mystring << endl;
  mystring = "This is a different string content";
  cout << mystring << endl;
  return 0;
}
*/

//C. Constant

/* 
//Method 1
const double pi = 3.14159;
const char newline = '\n';

int main()
{
  double r = 5.0;
  double circle;
 
  circle = 2*pi*r;
  cout<<circle;
  cout<<newline;
    
}

*/


//Method 2
#define PI 3.14159
#define NEWLINE '\n'

int main()
{
  double r = 5.0;
  double circle;
 
  circle = 2*PI*r;
  cout<<circle;
  cout<<NEWLINE;

}