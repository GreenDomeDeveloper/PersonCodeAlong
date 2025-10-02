#pragma once
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    double* weight;
    static int population;
    bool isValidAge(int age);
public:
    void setName(string name);
    string getName();
    void setAge(int age);
    int getAge();
    void setWeight(double weight);
    double getWeight();
    static int getPopulation();
    Person();
    Person(string name,int age,double weight);
    Person(const Person& person);
    ~Person();
    void hasBirthday();
    void print();

    friend ostream& operator<<(ostream& os, const Person& person);
    void operator=(const Person& person);

};