#include <iostream>
#include <vector>
#include "Veggie.h"

// constructor
Veggie::Veggie() {
	Food::SetName("Veggie");
	SetNames();
	SetPrices();
} // constructor

string Veggie::GetDesc() {
	return desc;
} // GetDesc()

void Veggie::SetDesc(string d) {
	desc = d;
} // SetDesc()

void Veggie::SetNames() {
	names.push_back("Eggplant");
	names.push_back("Cabbege");
	names.push_back("Celery");
}

void Veggie::SetPrices() {
	prices.push_back(10.0);
	prices.push_back(40.0);
	prices.push_back(50.0);
}

vector<double> Veggie::GetPrices() {
	return prices;
}

vector<string> Veggie::GetNames() {
	return names;
}

string Veggie::GetItem(int idx) {
	return names.at(idx);
}

double Veggie::GetItemPrice(int idx) {
	return prices.at(idx);
}

int Veggie::GetNumItems() {
	return names.size();
}