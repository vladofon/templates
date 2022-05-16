#pragma once
#include<math.h>
#include<iostream>
#include<string>

using namespace std;

class Triangle {
public:

   Triangle() {

      this->a = -1;
      this->b = -1;
      this->c = -1;
   }

   Triangle(int a, int b, int c) {

      this->a = a;
      this->b = b;
      this->c = c;
   }

   Triangle(Triangle& triangle) {

      this->a = triangle.getA();
      this->b = triangle.getB();
      this->c = triangle.getC();
   }

   bool isExist() {
      if (a + b > c || a + c > b || c + b > a) {
         return true;
      }

      return false;
   }

   int getPerimeter() {
      return isExist() ? a + b + c : -1;
   }

   int getArea() {
      int p = getPerimeter();

      return isExist() ? sqrt(p * (p - a) * (p - b) * (p - c)) : -1;
   }

   void setA(int a) {
      cout << "  - Call the [A] field setter" << endl;

      this->a = a;
   }

   int getA() {
      cout << "  - Call the [A] field getter" << endl;

      return this->a;
   }

   void setB(int b) {
      cout << "  - Call the [B] field setter" << endl;

      this->b = b;
   }

   int getB() {
      cout << "  - Call the [B] field getter" << endl;

      return this->b;
   }

   void setC(int c) {
      cout << "  - Call the [C] field setter" << endl;

      this->c = c;
   }

   int getC() {
      cout << "  - Call the [C] field getter" << endl;

      return this->c;
   }

   string to_string() {
      string dump =
         "Triangle: {\n";
      dump += "  side A: " + std::to_string(a) + ",\n";
      dump += "  side B: " + std::to_string(b) + ",\n";
      dump += "  side C: " + std::to_string(c) + ",\n";
      dump += "  is exist: " + std::to_string(isExist()) + ",\n";
      dump += "  perimeter: " + std::to_string(getPerimeter()) + ",\n";
      dump += "  area: " + std::to_string(getArea()) + ",\n";
      dump += "}";

      return dump;
   }

private:
   int a;
   int b;
   int c;
};