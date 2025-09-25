#include "Person.hpp"
#include <string>
#include <iostream>
using namespace std;

int main(){

    cout<<"Person population: "<<Person::getPopulation()<<endl;

    Person one;
    Person two("Sue Jones", 27);
    Person* three = new Person("Billy Bob",25);

    cout<<"Person population: "<<Person::getPopulation()<<endl;

    one.print();
    two.print();
    three -> print();

    one.setName("Tom Turner");
    two.setAge(57);
    one.hasBirthday();
    three -> hasBirthday();
    
    //one.print();
    //two.print();
    cout<<one<<endl;
    cout<<two<<endl;
    cout<<*three<<endl;

    delete three;

}