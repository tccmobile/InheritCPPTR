//
// Created by William Smith on 10/15/24.
//

#ifndef INHERITCPPTR_PERSON_H
#define INHERITCPPTR_PERSON_H
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person();
    Person(const string &name, int age);

    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    virtual void print();
};


#endif //INHERITCPPTR_PERSON_H
