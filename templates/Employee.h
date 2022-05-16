#pragma once
#include<iostream>
#include<string>

using namespace std;

class Employee {

public:

   Employee() {

      this->name = "undefined";
      this->age = -1;
      this->experience = -1;
   }

   Employee(const char* name, int age, int experience) {

      this->name = name;
      this->age = age;
      this->experience = experience;
   }

   Employee(Employee& employee) {

      this->name = employee.getName();
      this->age = employee.getAge();
      this->experience = employee.getExperience();
   }

   ~Employee() {
      delete[] name;

      cout << "+ Call the destructor" << endl;
   }

   void setName(const char* name) {
      this->name = name;

      cout << "  - Call the [name] field setter" << endl;
   }

   const char* getName() {
      cout << "  - Call the [name] field getter" << endl;

      return this->name;
   }

   void setAge(int age) {
      this->age = age;

      cout << "  - Call the [age] field setter" << endl;
   }

   int getAge() {
      cout << "  - Call the [age] field getter" << endl;

      return this->age;
   }

   void setExperience(int experience) {
      this->experience = experience;

      cout << "  - Call the [experience] field setter" << endl;
   }

   int getExperience() {
      cout << "  - Call the [experience] field getter" << endl;

      return this->experience;
   }

   string to_string() {
      string dump =
         "Employee: {\n";
      dump += "  name: " + (string)this->name + ",\n";
      dump += "  age: " + std::to_string(this->age) + ",\n";
      dump += "  experience: " + std::to_string(this->experience) + ",\n";
      dump += "}";

      return dump;
   }

private:

   const char* name;
   int age;
   int experience;

};
