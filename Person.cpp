#include "Person.hpp"
#include <iostream>
using namespace std;

int Person::population = 0;

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

int Person::getPopulation()
{
    return Person::population;
}

Person::Person(): name("John Doe"), age(42)
{
   // this -> name = "John Doe";
   // this -> age = 42;
   Person::population++;
}

Person::Person(string name, int age): name(name)
{
    //this -> name = name;
    if (isValidAge(age)){
        this -> age = age;
    } else {
        this -> age = 42;
    }
    Person::population++;
}

Person::~Person()
{
    cout<<"Destructor Called"<<endl;
}

void Person::hasBirthday()
{
    this -> age++;
}

void Person::print()
{
    cout<< "Person {\n\tName: "<< this->name<<"\n\tAge: "<<this->age<<endl<<"}"<<endl;
}

ostream &operator<<(ostream &os, const Person &person)
{
    os << "Person {\n\tName: "<< person.name<<"\n\tAge: "<<person.age<<endl<<"}"<<endl;
    return os;
}
