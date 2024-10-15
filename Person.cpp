//
// Created by William Smith on 10/15/24.
//

#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() {
    name = "unknown";
    age = 0;
}

Person::Person(const string &name, int age) : name(name), age(age) {}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

void Person::print() {
    cout << name << " is " << age << " years old ";
}
