#include "Person.hpp"
#include <string>
#include <iostream>
using namespace std;

int main(){

    cout<<"Person population: "<<Person::getPopulation()<<endl;

    Person one;
    Person two("Sue Jones", 27);
    Person* three = new Person("Billy Bob",25);
    Person* four = new Person();

    cout<<"Person population: "<<Person::getPopulation()<<endl;

    //one.print();
    //two.print();
    //three -> print();

    one.setName("Tom Turner");
    two.setAge(57);
    one.hasBirthday();
    three -> hasBirthday();
    four -> setAge(35);
    
    //one.print();
    //two.print();
    cout<<one<<endl;
    cout<<two<<endl;
    cout<<*three<<endl;
    cout<<*four<<endl;

    delete three;
    cout<<"Person population: "<<Person::getPopulation()<<endl;
    delete four;
    cout<<"Person population: "<<Person::getPopulation()<<endl;



}