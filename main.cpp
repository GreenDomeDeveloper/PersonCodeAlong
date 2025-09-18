#include "Person.hpp"
#include <string>
#include <iostream>
using namespace std;

int main(){
    Person one;
    Person two("Sue Jones", 27);

    one.print();
    two.print();

    one.setName("Tom Turner");
    two.setAge(57);
    one.hasBirthday();
    
    one.print();
    two.print();

}