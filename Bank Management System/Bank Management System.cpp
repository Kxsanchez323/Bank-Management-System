// Bank Management System

#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <stdio.h>

using namespace std;

class Bank {
	string name, address;
	char acc_type;
	float balance;

public:
	void open_account();
	void deposit_money();
	void withdraw_money();
	void display_account();
};

void Bank::open_account()
{
	name = "John Doe";
	cout << "Enter your full name: "
		<< name << endl;
	address = "North America";
	cout << "Enter your address: "
		<< address << endl;
	acc_type = 'S';
	cout << "What type of account do you want"
		<< " to open savings(S) or Current(C)?: "
		<< acc_type << endl;
	balance = 10000;
	cout << "Enter how much money you want to deposit: "
		<< balance << endl;
	cout << "Account created Successfully";
}

void Bank::deposit_money()
{
	int Amount;
	Amount = 9500;
	cout << "Enter how much money"
		<< " you want to deposit: "
		<< Amount << endl;
	balance += Amount;
	cout << "\n Available Balance: "
		<< balance;
}

void Bank::display_account()
{
	cout << "Name: " << name << endl
		<< "Address: " << address << endl
		<< "Type: " << acc_type << endl
		<< "Balance: " << balance << endl
		<< endl;
}

void Bank::withdraw_money()
{
	float amount;
		amount = 3200;
	cout << " Enter how much money "
		<< "you want to withdraw: "
		<< amount << endl;
	balance -= amount;
	cout << "\n Available balance: "
		<< balance;
}

int main()
{
	int choice;

	Bank customer;

	cout << "\n1) Open account \n\n";

	customer.open_account();
	cout << "\n-------------------"
		<< "---------------------\n";

	cout << "\n2) Deposit account \n\n";

	customer.deposit_money();
	cout << "\n--------------------"
		<< "----------------------\n";

	cout << "\n2) Withdraw money \n\n";
	
	customer.withdraw_money();
	cout << "\n-------------------"
		<< "---------------------\n";

	cout << "/n4) Display Account \n\n";


	customer.display_account();
	cout << "\n-------------------"
		<< "---------------------\n";

		return 0;



}