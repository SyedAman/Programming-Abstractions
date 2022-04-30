/*
 * File: PowersOf.cpp
 * ------------------
 * This program generates a list of powers of
 * a specified number up to an exponent limit
 * entered by the user.
*/

#include <iostream>

int raiseBaseToPower(int base, int power);

int main() {
	std::cout << "This program lists powers of a specified number." << std::endl;

	int baseNumber;
	std::cout << "Enter the base number: ";
	std::cin >> baseNumber;

	int limit;
	std::cout << "Enter the exponent limit: ";
	std::cin >> limit;

	for (int i = 0; i <= limit; i++) {
		std::cout << baseNumber << " to the " << i << " = " << raiseBaseToPower(baseNumber, i) << std::endl;
	}

	return 0;
}

/* Raises a number to a power
 * --------------------------
 * base: The number to raise to a 
 * power: The exponent to raise a number to.
 */

int raiseBaseToPower(int base, int power) {
	int result = 1;

	for (int i = 0; i < power; i++) {
		result = result * base;
	}
	return result;
}

