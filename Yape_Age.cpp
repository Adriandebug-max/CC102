#include <iostream>

using namespace std;

int main() 
{
	int age;
	cout << "Enter your age: ";
	cin >> age;
	if(age<16) {
		cout << "too young to drive. ";
	}
	else if(age==16) {
		cout << "better clear the road. ";
	}
	else if(age>16) {
		cout << "you are getting pretty old. ";
	}
	return 0;
	
}
