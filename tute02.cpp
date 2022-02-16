/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/
/*
#include <stdio.h>
int main()
{
   double salary, netSalary;
   int etype, otHrs, otRate;
   printf("Enter Employee Type : ");
   scanf("%d", &etype);
   printf("Enter Salary  : ");
   scanf("%f", &salary);
   printf("Enter OtHrs : ");
   scanf("%d", &otHrs); 
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + otHrs* otRate;
   printf("Net Salary is %f ", netSalary);
  
   return 0;
}*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double salary, netSalary;
   int etype, otHrs, otRate;

   cout << "Enter Employee Type : " << endl;
   cin >> etype;
   cout << "Enter Salary  : " << endl;
   cin >> salary;
   cout << "Enter OtHrs : " << endl;
   cin >> otHrs;

  switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }

   netSalary = salary + otHrs* otRate; //calculate net salary
  
   cout << setw(12) //specifies number of spaces used to display the number.
    
   //determines the number of decimal places to be printed in a floating point number.
   << setiosflags(ios::fixed) 

   //determines the number of digits to be printed in a floating point number. 
   << setprecision(2) << "Net Salary is  " << netSalary << endl;
  
   return 0;

}
