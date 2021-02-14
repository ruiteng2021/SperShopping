
#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>
#include<tuple>

using namespace std;

class Order {
	public:
		Order();
		void AddItem(string item, double price);
		void RemoveItem(int idx);
		void PrintItems();
		void SubTotal();
		int GetNumItems();
	private:
		vector<tuple<string, double, int>> items;
};

#endif // !ORDER_H
