
#include<iostream>

template<typename T>int bin_search(T* array, T element, int size) {

	int begin, middle, end, flag = 1;
	begin = 0;
	end = size;

	while (flag) {
		middle = (begin + end) / 2;

		if (array[middle] > element)
			end = (end + begin) / 2;
		else if (array[middle] < element)
			begin = (end + begin) / 2;
		else return middle;

		if (end - begin == 1 or end - begin == 0) {
			if (array[begin] < element)
				return end;
			else return begin;
		}
	}
}



template<typename T> void BinaryInsertionSort(T *array, int size) {

	T temp;
	int index;

	for (int key = 1; key < size; key++) {

		index = bin_search(array, array[key], key);

		if (index != key) {
			temp = array[key];
			for (int t = key; t > index; t--) {
				array[t] = array[t - 1];
			}
			array[index] = temp;
		}
	}
}
