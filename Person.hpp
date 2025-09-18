#pragma once
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    bool isValidAge(int age);
public:
    void setName(string name);
    string getName();
    void setAge(int age);
    int getAge();
    Person();
    Person(string name,int age);
    void hasBirthday();
    void print();

};