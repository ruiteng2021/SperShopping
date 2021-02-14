
#ifndef SNACK_H
#define SNACK_H

#include <string>
#include <vector>
using namespace std;

#include "Food.h"

class Snack : public Food {
public:
	Snack();
	void SetDesc(string d);
	string GetDesc();
	void SetNames();
	vector<string> GetNames();
	void SetPrices();
	vector<double> GetPrices();
	string GetItem(int idx);
	double GetItemPrice(int idx);
	int GetNumItems();
private:
	string desc;
	vector<string> names;
	vector<double> prices;
};

#endif // !SNACK_H #pragma once

