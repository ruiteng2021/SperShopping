
#include <iostream>
#include "Food.h"

// using namespace std;

// constructor
Food::Food() {
	// do nothing for now
} // constructor

string Food::GetName() {
	return name;
} // GetName()

double Food::GetPrice() {
	return price;
} // GetPrice()

void Food::SetName(string n) {
	name = n;
} // SetName()

void Food::SetPrice(double p) {
	price = p;
} // SetPrice()

void Food::PrintMenu(vector<string> items, vector<double> prices) {
	cout << "Select an item(99 to go back):" << endl;
	for (int i = 1; i <= items.size(); i++) {
		cout << i << ") " << items[i - 1] << ": "<< prices[i-1] << "$"<< endl;
	}
}