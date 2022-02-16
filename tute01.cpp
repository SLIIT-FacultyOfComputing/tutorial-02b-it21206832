
/*Exercise 1 - Calculations

Convert the C program given below which converts a length given in cm to inches to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.

e.g.

float data1;
int data2;
scanf("%f", &data1); --> std::cin >> data1;
scanf("%d", &data2); --> std::cin >> data2; 
You already know that printf() in C is std::cout in C++ e.g.

printf("Hello World") --> std::cout << "Hello World";
2.54cm = 1 inch
*/

/*
#include <stdio.h>
int main() 
{
    float cm, inches;
    printf("Enter a length in cm : ");
    scanf("%f",&cm);
    inches = cm / 2.54;
    printf("Length in inches is %f \n", inches);
    return 0;
}*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  float cm, inches;

  cout << "Enter a length in cm : " << endl;
  cin >> cm; //

  inches = cm / 2.54; //calculate inches.

  cout << setw(12) //specifies number of spaces used to display the number.
    
      //determines the number of decimal places to be printed in a floating point number.
       << setiosflags(ios::fixed) 

      //determines the number of digits to be printed in a floating point number. 
       << setprecision(2) 
    
       << "Length in inches is  " << inches << endl; //display the length.
  
  return 0;
}//end of function main.
