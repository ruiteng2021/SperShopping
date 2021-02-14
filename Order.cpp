
#include <iostream>
#include "Order.h"

Order::Order() {} // constructor

void Order::AddItem(string item, double price) {
	tuple <string, double, int> itemGroup;
	bool found = false;
	for (int i=0;i<items.size();i++) { // Update item count only if already exits;
		if (item == get<0>(items.at(i))) { 
			get<2>(items.at(i))++;
			found = true;
			break;
		}
	}
	if (!found) { // add new items
		itemGroup = make_tuple(item, price, 1);
		items.push_back(itemGroup);
	}
} // AddItem()

void Order::RemoveItem(int idx) {
	idx--;
	items.erase(items.begin() + idx);
} // RemoveItem()

void Order::SubTotal() {
	double total = 0;
	for (int i = 1; i <= items.size(); i++) {
		total = total + get<2>(items.at(i-1)) * get<1>(items.at(i - 1));
	}
	cout << "Subtotal Price: " << total << "$\n\n";
} 

void Order::PrintItems() {
	cout << "Your items are:\n(key in 42 to save or idx to remove)" << endl;
	if (items.size() == 0)
		cout << "Empty Oder!\n";
	double total = 0;
	for (int i = 1; i <= items.size(); i++) {
		cout << i << ")" << get<0>(items.at(i - 1)) << " price: " << get<1>(items.at(i - 1)) << " number: " << get<2>(items.at(i - 1)) << endl;
		total = total + get<2>(items.at(i - 1)) * get<1>(items.at(i - 1));
	}
	cout << "Total Price: " << total << "$" << endl;
} // PrintItems()

int Order::GetNumItems() {
	return items.size();
}
