
#include <iostream>
#include <vector>
#include "Meat.h"

// constructor
Meat::Meat() {
	Food::SetName("Meat");
	SetNames();
	SetPrices();
} // constructor

string Meat::GetDesc() {
	return desc;
} // GetDesc()

void Meat::SetDesc(string d) {
	desc = d;
} // SetDesc()

void Meat::SetNames() {
	names.push_back("Bacon");
	names.push_back("Steak");
	names.push_back("Chicken");
	names.push_back("Turkey");
	names.push_back("Beef");
}

void Meat::SetPrices() {
	prices.push_back(5.0);
	prices.push_back(6.0);
	prices.push_back(3.0);
	prices.push_back(10.0);
	prices.push_back(11.0);
}

vector<double> Meat::GetPrices() {
	return prices;
}

vector<string> Meat::GetNames() {
	return names;
}

string Meat::GetItem(int idx) {
	return names.at(idx);
}

double Meat::GetItemPrice(int idx) {
	return prices.at(idx);
}

int Meat::GetNumItems() {
	return names.size();
}