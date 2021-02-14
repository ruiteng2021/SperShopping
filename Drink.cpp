
#include <iostream>
#include <vector>
#include "Drink.h"

// constructor
Drink::Drink() {
	Food::SetName("Drink");
	SetNames();
	SetPrices();
} // constructor

string Drink::GetDesc() {
	return desc;
} // GetDesc()

void Drink::SetDesc(string d) {
	desc = d;
} // SetDesc()

void Drink::SetNames() {
	names.push_back("Rum");
	names.push_back("Rye");
	names.push_back("Coke");
}

void Drink::SetPrices() {
	prices.push_back(13.0);
	prices.push_back(14.0);
	prices.push_back(3.0);
}

vector<double> Drink::GetPrices() {
	return prices;
}

vector<string> Drink::GetNames() {
	return names;
}

string Drink::GetItem(int idx) {
	return names.at(idx);
}

double Drink::GetItemPrice(int idx) {
	return prices.at(idx);
}

int Drink::GetNumItems() {
	return names.size();
}