#pragma once
#include <iostream>
#include <string>
#include "Person.h"

using namespace std ;

class Employee : public Person {
protected :
    double balance ;
public :
    //con
    Employee () {
    this ->balance = 0 ;
    }
    Employee (double bala ,string pass,int id, string name ) :Person (pass , id , name) {
        this ->balance = bala ;
        this -> password=pass;
        this ->id = id ;
        this ->name = name ;
    }

    //setter
    void set_Balance (double bala) {
    this ->balance = bala ;
    }
    //geter
    double get_Balance () {
    return balance ;
    }

    //method
    void display () {
        cout << "Name : " << name << endl;
        pass_protect();
        cout << "ID : " << id << endl;
        cout << "Balance : " << balance << endl;
    }



};
