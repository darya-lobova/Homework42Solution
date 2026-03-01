#include "logic.h"

bool is_vector_a_palindrome(int array[DEFAULT_SIZE], int length) {
	for (int i = 0; i < length / 2; i++)
	{
		if (array[i] != array[length - 1 - i]) {
			return false;
		}
		return true;
	}
}

void print(string s) {
	cout << s;
}