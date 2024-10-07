#include <iostream>

using namespace std;

int main()
{
	double USDollar;
	double Peso;
	
	//Get the amount of US$
	cout <<"Enter US$ amount and return"<<endl;
	cin >> USDollar;
	
	//Calculate the Peso amount
	Peso = 53.20 * USDollar;
	
	//Display the results
	cout << "US$" << USDollar
		 << " =Php" << Peso <<endl;

	return 0;

}
	