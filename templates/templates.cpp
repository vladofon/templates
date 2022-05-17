#include <iostream>

#include "DynamicArray.h"
#include "Employee.h"
#include "Triangle.h"

using namespace std;

int main()
{
   // Array initializing
   const auto triangles = new dynamic_array<Triangle*>(3);
   const auto employees = new dynamic_array<Employee*>(2);

   // Array filling
   triangles->add(new Triangle(5, 5, 5));
   triangles->add(new Triangle(50, 50, 50));
   triangles->add(new Triangle(555, 555, 555));

   employees->add(new Employee("Renie Cares", 20, 2));
   employees->add(new Employee("Vivienne Mort", 30, 10));

   // Array's string representation
   cout << triangles->to_string() << endl << endl;
   cout << employees->to_string() << endl << endl;

   // Sample of using overrided operators
   cout << endl << "[dynamic_array] Sample of using \"[]\" operator:\n" << (*triangles)[2]->to_string() << endl;
   cout << endl << "[dynamic_array] Sample of using \"[]\" operator:\n" << (*employees)[1]->to_string() << endl;

   cout << endl << "[dynamic_array] Sample of using \"()\" operator:\n triangle array size:" << (*triangles)() << endl;
   cout << endl << "[dynamic_array] Sample of using \"()\" operator:\n employee array size:" << (*employees)() << endl;
}

