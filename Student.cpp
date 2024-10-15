//
// Created by William Smith on 10/15/24.
//

#include "Student.h"
#include <iostream>

using namespace std;

void Student::setGPA(double gpa) {
    this->gpa = gpa;
}

double Student::getGPA() {
    return  gpa;
}

 void Student::print() {
   cout<<getName()<<" is "<< getAge() << " and has a gpa of "<< gpa<<endl;
   //  cout<<name<<" is "<< age << " and has a gpa of "<< gpa<<endl;
  /*  Person::print();
   cout<<  " and has a gpa of "<< gpa<<endl; */

 }

Student::Student() {
    gpa = 0.0;
}

Student::Student(const string &name, int age, double gpa) : Person(name, age), gpa(gpa) {}
