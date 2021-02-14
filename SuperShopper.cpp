
#include <iostream>
#include <array>
#include <vector>
using namespace std;

#include "Drink.h"
#include "Meat.h"
#include "Order.h"
#include "Veggie.h"
#include "Snack.h"

int main() {
	string menu[] = { "Drink", "Meat", "Snack", "Veggie" };
	bool isDone = false;
	bool goBack = false;
	Order order;
	Drink drink;
	Meat meat;
	Veggie veggie;
	Snack snack;
	//=============================================>>
	// todo: add Snack and Veggie classes

	// main loop
	while (!isDone) {
		int menuChoice = 0;
		int itemChoice = 0;

		// prints menu
		cout << "Select a category: (99) to exit!" << endl;
		for (int i = 1; i < menu->length(); i++) {
			cout << i << ") " << menu[i - 1] << endl;
		}

		cin >> menuChoice;

		switch (menuChoice) {
			case 1: { // add drink
				while (!goBack) {
					drink.PrintMenu(drink.GetNames(), drink.GetPrices());
					cin >> itemChoice;
					if ((itemChoice != 99) && (itemChoice <= drink.GetNumItems())) {
						order.AddItem(drink.GetItem(itemChoice - 1), drink.GetItemPrice(itemChoice - 1));
						order.SubTotal();
					}
					else if ((itemChoice != 99) && (itemChoice > drink.GetNumItems()))
						cout << "No such item! Try again\n";
					else
						goBack = true;
				}
				break;
			}
			case 2: { // add meat
				while (!goBack) {
					meat.PrintMenu(meat.GetNames(), meat.GetPrices());
					cin >> itemChoice;
					if ((itemChoice != 99) && (itemChoice <= meat.GetNumItems())) {
						order.AddItem(meat.GetItem(itemChoice - 1), meat.GetItemPrice(itemChoice - 1));
						order.SubTotal();
					}
					else if ((itemChoice != 99) && (itemChoice > meat.GetNumItems()))
						cout << "No such item! Try again\n";
					else
						goBack = true;
				}
				break;
			}
			case 3: { // add snack
				while (!goBack) {
					snack.PrintMenu(snack.GetNames(), snack.GetPrices());
					cin >> itemChoice;
					if ((itemChoice != 99) && (itemChoice <= snack.GetNumItems())) {
						order.AddItem(snack.GetItem(itemChoice - 1), snack.GetItemPrice(itemChoice - 1));
						order.SubTotal();
					}
					else if ((itemChoice != 99) && (itemChoice > snack.GetNumItems()))
						cout << "No such item! Try again\n";
					else
						goBack = true;
				}
				break;
			}
			case 4: { // add veggie
				while (!goBack) {
					veggie.PrintMenu(veggie.GetNames(), veggie.GetPrices());
					cin >> itemChoice;
					if ((itemChoice != 99) && (itemChoice <= veggie.GetNumItems())) {
						order.AddItem(veggie.GetItem(itemChoice - 1), veggie.GetItemPrice(itemChoice - 1));
						order.SubTotal();
					}
					else if ((itemChoice != 99) && (itemChoice > veggie.GetNumItems()))
						cout << "No such item! Try again\n";
					else
						goBack = true;
				}
				break;
			}
			case 99: { // exit
				isDone = true;
				break;
			}
			default: { // default
				cout << "opps" << " you entered " << menuChoice << endl;
				break;
			}
		} // switch
		goBack = false;
		itemChoice = 0;
	} // while


	order.PrintItems(); // prints our shopping list
	int itemToRemove = 0;
	for (;;) {
		cin >> itemToRemove;
		if (itemToRemove != 42 && itemToRemove <= order.GetNumItems()) {
			order.RemoveItem(itemToRemove);
			order.PrintItems();
			break;
		}
		else if (itemToRemove != 42 && itemToRemove > order.GetNumItems()) {
			cout << "No such item! Try again: ";
		}
		else {
			cout << "Your order has been placed!" << endl;
			break;
		}
	}
} // main()