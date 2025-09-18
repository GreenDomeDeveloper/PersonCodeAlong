#include "Person.hpp"
#include <iostream>
using namespace std;

bool Person::isValidAge(int age)
{
    if (age>=0){
        return true;
    } else {
        return false;
    }
}

void Person::setName(string name)
{
    this -> name = name;
}

string Person::getName()
{
    return this -> name;
}

void Person::setAge(int age)
{
    if (isValidAge(age)){
         this -> age = age;
    }
   
}

int Person::getAge()
{
    return this -> age;
}

Person::Person()
{
    this -> name = "John Doe";
    this -> age = 42;
}

Person::Person(string name, int age)
{
    this -> name = name;
    if (isValidAge(age)){
        this -> age = age;
    } else {
        this -> age = 42;
    }
}
    

void Person::hasBirthday()
{
    this -> age++;
}

void Person::print()
{
    cout<< "Person {\n\tName: "<< this->name<<"\n\tAge: "<<this->age<<endl<<"}"<<endl;
}
