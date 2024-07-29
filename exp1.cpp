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


	add(+) Calculator
Enter first number
5
Enter second number
20
Addition is 25
Sub(-) Calculator
Enter first number
2
Enter second number
3
Subtration is -1
Product(x) Calculator
Enter first number
8
Enter second number
9
Multiplication is 72
Divide(/) Calculator
Enter first number
8
Enter second number
2
Product is 4

--------------------------------
Process exited after 20.25 seconds with return value 0
Press any key to continue . . .

    return 0;
}
