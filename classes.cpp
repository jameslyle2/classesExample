#include <iostream>
using namespace std;

class Calculator {
	public:
		void setValues(int a, int b);
		int add();
		Calculator();
		Calculator(int c, int d);
		// int subtract();
		int divide(int a, int b);
		// int multiply(int a, int b);

	private:
		int a;
		int b;
		int result;
};

Calculator::Calculator(void) {
	cout << "Calculator object is being created" << endl;
}

Calculator::Calculator(int c, int d) {
	cout << "int c is: " << c << endl;
	cout << "int d is: " << d << endl;
}

void Calculator::setValues(int a, int b) {
	cout << "Values are set" << endl;
	this->a = a;
	this->b = b;
}

int Calculator::add() {
	result = a + b;
	return result;
}

int Calculator::divide(int a, int b) {
	result = a/b;
	return result;
}

int main () {
	Calculator calc;

	calc.setValues(3, 5);
	cout << "The result for addition is: " << calc.add() << endl;

	int a;
	int b;

	cout << "Value for a: ";
	cin >> a;
	cout << "Value for b: ";
	cin >> b;
	cout << "The result for division is: " << calc.divide(a, b) << endl;

	cout << endl;
	Calculator calc2(5, 2);


	return 0;
}