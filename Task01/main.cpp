#include "logic.h"

int main() {

	int array[DEFAULT_SIZE];
	int length;

	do {
		cout << "Input size of array: ";
		cin >> length;
	} while (length <= 0);


	cout << "Input array elements: ";
	for (int index = 0; index < length; index++)
	{
		cin >> array[index];
	}

	int count_positive = find_positive_elements(array, length);
	int count_negative = find_negative_elements(array, length);
	int count_zero = find_zero_elements(array, length);

	print("Positive elements: " + to_string(count_positive));
	print("\nNegative elements: " + to_string(count_negative));
	print("\nZero elements: " + to_string(count_zero));

	return 0;
}