#include <iostream> 
 
#include "inherit2.h" 
#include "partTimeEmployee.h" 
 
using namespace std; 
 
int main() 
{ 
 personType newPerson; 
 partTimeEmployee newEmployee("John","Smith",7.50,56); 
 partTimeEmployee employee; 
       newEmployee.print(); 
 employee.setNameRateHours("Rachel", "Moore",9.75, 45); 
 employee.print(); 
 
 return 0; 
} 
 
/*
* Description: The part 2 for the lab will output the wages for two employees. This part of the lab should also
* show a graph made by graphiz and using doxygen for any documentations
* Output:
John Smith wages are : 420
Rachel Moore wages are : 438.75
*/