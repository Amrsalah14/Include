#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>
#include "People headers/Admin.h"
#include "People headers/Client.h"
#include "People headers/Employee.h"
#include "Main fundctions/Welcome.h"
#include "Main fundctions/Login.h"
//================================================
// Client method
//================================================
void login();
void client(int& n) {
	//login page
	if (n == 1) {
		Client a;
		string c, p;
		a.set_Name(c);
		a.set_Password(p);

		//Return back
		cout << "\nBack to menu enter B \n";
		cout << "To continue enter any key...\n";
		char i{};
		cin >> i;
		system("cls");
		switch (i)
		{
		case 'b':
		case 'B': login();
			break;
		}
	}
}