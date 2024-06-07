#include <iostream>

template<typename T>
T sum(T num1, T num2) {
	return num1 + num2;
}

template<typename T>
T minus(T num1, T num2) {
	return num1 - num2;
}

template<typename T>
T multy(T num1, T num2) {
	return num1 * num2;
}

template<typename T>
T divide(T num1, T num2) {
	return num1 / num2;
}


int main() {
	double num1;
	double num2;
	char user_operand;
	do
	{
		std::cout << "Welcome to calculator" << std::endl;
		std::cout << "Input first operand: ";
		std::cin >> num1;
		std::cout << "Input second operand: ";
		std::cin >> num2;
		std::cout << "Press + to do sum \n Press - to do minus \n Press * to do multy \n Press / to do divide" << std::endl;
		std::cin >> user_operand;
		if (user_operand == '+')
		{
			std::cout << "Result is " << sum(num1, num2) << std::endl;
		}
		else if (user_operand == '-') {
			std::cout << "Result is " << minus(num1, num2) << std::endl;
		}
		else if (user_operand == '*') {
			std::cout << "Result is " << multy(num1, num2) << std::endl;
		}
		else if (user_operand == '/') {
			std::cout << "Result is " << divide(num1, num2) << std::endl;
		}
		else {
			std::cout << "Error!" << std::endl;
		}
	} while (user_operand != '0');
}