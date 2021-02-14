
#include <iostream>
#include <vector>
#include "Snack.h"

// constructor
Snack::Snack() {
	Food::SetName("Snack");
	SetNames();
	SetPrices();
} // constructor

string Snack::GetDesc() {
	return desc;
} // GetDesc()

void Snack::SetDesc(string d) {
	desc = d;
} // SetDesc()

void Snack::SetNames() {
	names.push_back("Cakes");
	names.push_back("Cookies");
	names.push_back("nuts");
	names.push_back("Pastries");
	names.push_back("Seeds");
}
void Snack::SetPrices() {
	prices.push_back(1.0);
	prices.push_back(4.0);
	prices.push_back(5.0);
	prices.push_back(20.0);
	prices.push_back(31.0);
}

vector<double> Snack::GetPrices() {
	return prices;
}

vector<string> Snack::GetNames() {
	return names;
}

string Snack::GetItem(int idx) {
	return names.at(idx);
}

double Snack::GetItemPrice(int idx) {
	return prices.at(idx);
}

int Snack::GetNumItems() {
	return names.size();
}