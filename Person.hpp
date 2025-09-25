#pragma once
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    static int population;
    bool isValidAge(int age);
public:
    void setName(string name);
    string getName();
    void setAge(int age);
    int getAge();
    static int getPopulation();
    Person();
    Person(string name,int age);
    ~Person();
    void hasBirthday();
    void print();

    friend ostream& operator<<(ostream& os, const Person& person);

};