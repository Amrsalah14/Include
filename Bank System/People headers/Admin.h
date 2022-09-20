#pragma once
#include <iostream>
#include "Employee.h"
#include "../Validation/Validation.h"

using namespace std;

//======================================
// Admin class inherted from Employee
//======================================

class Admin : public Employee
{
private:
    

public:
   Admin(){}
   Admin(double bala, string pass, int id, string name) :Employee(bala,pass, id, name) {
     
    }


    //methods
    void display() {
        cout << "Name : " << name << endl;
        pass_protect();
        cout << "ID : " << id << endl;
        cout << "Balance : " << balance << endl;
    }
    
};

