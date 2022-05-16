#include <iostream>

#include "DynamicArray.h"
#include "Employee.h"
#include "Triangle.h"

using namespace std;

int main()
{
   auto triangles = new dynamic_array<Triangle*>(3);
   const auto employees = new dynamic_array<Employee*>(3);

   triangles->add(new Triangle(5, 5, 5));
   triangles->add(new Triangle(50, 50, 50));

   cout << triangles->to_string() << endl << endl;

   cout << triangles[1].to_string() << endl;
}

