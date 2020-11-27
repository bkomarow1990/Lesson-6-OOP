#include <iostream>
#include "Room.h"
using namespace std;
int main() {
	Room kitchen(3, 3, 4, "Kitchen");
	kitchen.print();
	Room dinner(3, 3, 4, "Dinner room");
	// cout << boolalpha << "Same size rooms:" << (kitchen == dinner) << endl;
	dinner["height"] = 4;
	dinner.print();
	kitchen(2, 3, 4, "Summer kitchen");
	kitchen.print();
	return 0;
}