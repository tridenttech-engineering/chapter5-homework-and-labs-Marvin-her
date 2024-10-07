//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//initialize variables
	double price_one=0.0;
	double price_two=0.0;
	double final_price =0.0;
	//inputs
	cout << "Enter price of item 1: ";
	cin >> price_one;
	cout << "Enter price of item 2: ";
	cin >> price_two;
	//calculations
	if (price_one > price_two)
		price_two = price_two / 2;
	else if (price_one < price_two)
		price_one = price_one / 2;
	else
		price_two = price_two / 2;
	//end if
	final_price = price_one + price_two;

	//display results
	cout << fixed << setprecision(2);
	cout << "Your final total is: $" << final_price << endl;
	
	return 0;
}	//end of main function