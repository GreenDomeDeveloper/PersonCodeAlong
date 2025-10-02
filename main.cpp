#include "Person.hpp"
#include <string>
#include <iostream>
using namespace std;

void doSomething(Person person){
    cout<<"Inside doSomething()"<<endl;
    person.setAge(person.getAge()+5); // Add 5 to age
    person.setWeight(person.getWeight()-20); // Loose 20 pounds
    cout<<person<<endl;
    cout<<"Leave doSomething()"<<endl;
}
int main(){

    cout<<"Person population: "<<Person::getPopulation()<<endl;

    Person one;
    Person two("Sue Jones", 27,150);
    Person* three = new Person("Billy Bob",25,250);
    Person* four = new Person();

    cout<<"Person population: "<<Person::getPopulation()<<endl;

    /* cout<<"Before calling doSomething()"<<endl;
    cout<<two<<endl;
    doSomething(two);
    cout<<"After returning to main()"<<endl;
    cout<<two<<endl; */

    cout<<one<<endl;
    cout<<two<<endl;
    one = one;
    one.setName("Will Smith");
    two.setWeight(100);
    cout<<one<<endl;
    cout<<two<<endl;

    //one.print();
    //two.print();
    //three -> print();

  /* one.setName("Tom Turner");
    two.setAge(57);
    one.hasBirthday();
    three -> hasBirthday();
    four -> setAge(35);
    */
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