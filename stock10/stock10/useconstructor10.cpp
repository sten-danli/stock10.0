
#include"constructor10.h"
int main()

{
	cout << "Using Default constructor\n";
	Stock hot_tip = { "Hot tips! ", 21,1.28 };
	hot_tip.show();



	cout << "Using constructors to create(new object\n";
	Stock stock1("NanoSmart", 6, 20.0);
	stock1.show();
	cout << "\n";
	Stock stock2 = Stock("Boffo Objects", 2, 2.0);
	stock2.show();
	cout << "\n\n";

	cout << "Assiging stock1 to stock2: \n";
	stock2 = stock1;
	cout << "Listing stock1 and stock2:\n";
	stock1.show();
	stock2.show();
	cout << "\n\n";

	cout << "Using a constructor to reset an object\n";
	stock1 = Stock("Nefty Foods", 10, 50.0);
	cout << "Revised stock1:\n";
	stock1.show();
	cout << "Done\n";

	return 0;
}