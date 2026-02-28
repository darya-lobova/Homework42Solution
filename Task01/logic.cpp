#include "logic.h"

int find_positive_elements(int array[], int length) {
	int count_positive = 0;

	for (int index = 0; index < length; index++) {
		count_positive += (array[index] > 0 ? 1 : 0);
	}

	return count_positive;
}

int find_negative_elements(int array[], int length) {
	int count_negative = 0;

	for (int index = 0; index < length; index++) {
		count_negative += (array[index] < 0 ? 1 : 0);
	}

	return count_negative;
}

int find_zero_elements(int array[], int length) {
	int count_zero = 0;

	for (int index = 0; index < length; index++) {
		count_zero += (array[index] == 0 ? 1 : 0);
	}

	return count_zero;
}

void print(string s) {
	cout << s;
}
