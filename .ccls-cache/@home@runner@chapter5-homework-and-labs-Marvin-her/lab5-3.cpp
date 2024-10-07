//lab5-3.cpp - displays the total amount due
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// declaring variables
	const double Discount_rate=0.1;
	const double Discount_rate2=0.05;
	const double Shipping_chg1=0.99;
	const double Shipping_chg2=4.99;
	double amount_owed=0.0;
	char member = 'N';
	// Inputs
	cout << "Enter amount owed before discounts";
	cin >> amount_owed;
	cout << "Premier club member (Y/N)";
	cin >> member;
	//check for and apply relevant discounts
	if (member == 'Y')
		amount_owed=amount_owed - (amount_owed * Discount_rate);
	else
		amount_owed=amount_owed - (amount_owed * Discount_rate2);

	//add shipping
	if (amount_owed >= 100)
		amount_owed = amount_owed + Shipping_chg1;
	else
		amount_owed = amount_owed + Shipping_chg2;

	//Displaying results
	cout << fixed << setprecision(2);
	cout << "Amount owed after any discount and shipping: $" << amount_owed << endl;

	return 0;
}	//end of main function