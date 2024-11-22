#include <iostream>

using namespace std;

int main ()
{
	double temp;
	cout << "Enter the temperature in fahrenheit: ";
	cin >> temp;
	
	if(temp< 32){
		cout << "Bring a heavy jacket. ";
	}
	else if(temp >= 32 && temp <= 50) {
		cout << "Bring a light jacket. ";
	}
	else if(temp > 50) {
		cout << "No need to bring a jacket. ";
	}
	
	return 0;	
}
