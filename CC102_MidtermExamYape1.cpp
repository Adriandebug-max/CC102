#include <iostream>

using namespace std;

int main ()
{
	double sugarPriceUSD, ricePricePound, sardinesPricePound, coffePriceUSD, milkPriceUSD;
	double usdToPhp, poundToPhp;
	double totalCostPhp, sugarCostPhp, riceCostPhp, sardinesCostPhp, coffeCostPhp, milkCostPhp;
	int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	
	//get the quantity of each product
	cout << "Enter the Quantity of sugar: ";
	cin >> sugarQty;
	cout << "Enter the Quantity of rice: ";
	cin >> riceQty;
	cout << "Enter the Quantity of sardines: ";
	cin >> sardinesQty;
	cout << "Enter the Quantity of coffee: ";
	cin >> coffeeQty;
	cout << "Enter the Quantity of milk: ";
	cin >> milkQty;
	cout << "-----------------------------------------------------------------------------\n";
	//get price of each product
	cout << "Enter the Price of sugar: ";
	cin >> sugarPriceUSD;
	cout << "Enter the Pound of rice: ";
	cin >> ricePricePound;
	cout << "Enter the Pound of sardines: ";
	cin >> sardinesPricePound;
	cout << "Enter the Price of coffee: ";
	cin >> coffePriceUSD;
	cout << "Enter the Price of milk: ";
	cin >> milkPriceUSD;
	cout << "-----------------------------------------------------------------------------\n";
	
	//Conversion Rate
	usdToPhp = 1 * 57.75;
	poundToPhp = 1 * 75.17;
	
	//Calculate
	sugarCostPhp = sugarPriceUSD * sugarQty;
	riceCostPhp = ricePricePound * riceQty;
	sardinesCostPhp = sardinesPricePound * sardinesQty;
	coffeCostPhp = coffePriceUSD * coffeeQty;
	milkCostPhp = milkPriceUSD * milkQty;
	totalCostPhp = sugarCostPhp + riceCostPhp + sardinesCostPhp + coffeCostPhp + milkCostPhp;

	//Display the total cost in PHP
	cout << "Enter the total cost PHP" <<totalCostPhp<< endl;
	

	return 0;
	
}
	