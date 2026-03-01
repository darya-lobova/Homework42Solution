#include "logic.h"

bool is_vector_ordered(int array[DEFAULT_SIZE], int length) {
	bool is_ascending = true;
	bool is_descending = true;

    for (size_t i = 1; i < length; ++i) {
        if (array[i] < array[i - 1]) {
            is_ascending = false;  
        }
        if (array[i] > array[i - 1]) {
            is_descending = false; 
        }
    }
    return is_ascending || is_descending;

}

	void print(string s) {
		cout << s;
	}