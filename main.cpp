#include <iostream>
#include <vector>
#include "Person.h"
#include "Student.h"
using namespace std;

int main() {
    vector<Person> people; //only specific object type
    vector<Person *> room; //Persons and Students

    Person one("Carl", 42);
    Student two("Sue",21,3.5);

    room.push_back(&one);
    room.push_back(&two);


    for (int i = 0; i < room.size(); ++i) {
        //cout<<room[i]->getName()<< " "<< room[i]->getAge()<<endl;
        //cout<<room[i]->getGPA()<<endl;
        room[i]->print(); // Resolves on what is pointed to
        cout<<endl;
    }

    return 0;
}
