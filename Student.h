//
// Created by William Smith on 10/15/24.
//

#ifndef INHERITCPPTR_STUDENT_H
#define INHERITCPPTR_STUDENT_H
#include "Person.h"

class Student: public Person {
private:
    double gpa;
public:
    Student();
    Student(const string &name, int age, double gpa);
    void setGPA(double);
    double getGPA();
    virtual void print();
};


#endif //INHERITCPPTR_STUDENT_H
