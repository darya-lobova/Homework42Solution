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

	return 0;
}