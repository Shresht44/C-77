#shresht23070123077
#include <iostream>
using namespace std;

int main() {
    int num1 , num2 , total;
    cout << "Add(+) Calculator" << endl;
	cout << "Enter first number" << endl;
	cin >> num1;
	cout << "Enter second number " << endl;
	cin >> num2;
	total = num1 + num2;
	cout << "Addition is " << total << endl;

	cout << "Sub(-) Calculator" << endl;
	cout << "Enter first number " << endl;
	cin >> num1;
	cout << "Enter second number " << endl ;
	cin >> num2;
	total = num1 - num2;
	cout << "Subtration is " << total << endl;


	cout << "Product(x) Calculator" << endl;
	cout << "Enter first number " << endl;
	cin >> num1;
	cout << "Enter second number " << endl;
	cin >> num2;
	total = num1 * num2;
	cout << "Multiplication is " << total << endl;

	cout << "Divide(/) Calculator" << endl;
	cout << "Enter first number " << endl;
	cin >> num1;
	cout << "Enter second number " << endl;
	cin >> num2;
	float divide = num1 / num2;
	cout << "Product is " << divide << endl;

    return 0;
}
