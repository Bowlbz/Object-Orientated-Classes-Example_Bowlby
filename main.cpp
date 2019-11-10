/*
	Input Validation with Ref Functions 
	A cleaner way to do input validation
	Validating input, an essential process.
	Source: http://stackoverflow.com/questions/514420/how-to-validate-numeric-input-c
	Keeping Dr. McMillan from breaking my code, defend against "dark side of the force",
	and/or legitimate user error. 
	//Try and Catch blocks are used in error checking
	Teacher: Dr. Tyson McMillan 
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std;

//class Definitions : "class" is used for security measures!!!!!!!!
class Rectangle //"class" is the BLUEPRINT ***************
{
  private:
    double width;
    double length;
  public:    //function Prototypes for the member functions***********************
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

//Function Definitions for each of our "member" functions
// Data Hiding, sets values to "private" using "public" functions
void Rectangle :: setWidth(double w)
{
  width = w; //setting value to double width;
}

void Rectangle :: setLength( double l)
{
  length = l; //setting value to double length; 
}

double Rectangle :: getWidth() const
{
  return width;   //return the data that lives in the "private" attribute "width"
}

double Rectangle :: getLength() const
{
  return length;  //return the data that lives in the "private" attribute "length"
}

double Rectangle :: getArea() const
{
  return (length * width);  //return the data of the 
}



int main()
{
  Rectangle r; // "r" is a instance of the class "Rectangle", an object
  r.setWidth(5.2); // set the private member "width" to 5.2 via the public setter
  cout << r.getWidth() << endl;//"get" print to screen the current value of the private width
  r.setLength(7.8);
  cout << r.getLength() << endl;
  cout << r.getArea() << endl;

  cout << "\n" << endl;
  cout << "A rectangle with width w = " << r.getWidth() << " and length = ";
  cout << "has an area of " << r.getArea() << endl;

 
   
    
    
    
    
    
    
    
    return 0;
}
