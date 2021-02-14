
#ifndef MEAT_H
#define MEAT_H

#include <string>
#include <vector>
using namespace std;

#include "Food.h"

class Meat : public Food {
public:
	Meat();
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

#endif // !MEAT_H