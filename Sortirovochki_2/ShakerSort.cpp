template<typename T>void ShakerSort(T * array, int size) {

	T temp;
	int flag = 1, begin = 0, end = size - 1;
	while (begin < end) {
		if (begin < end) {
			for (int time_begin = begin; time_begin < end; time_begin++) {
				if (array[time_begin] > array[time_begin + 1]) {
					temp = array[time_begin];
					array[time_begin] = array[time_begin + 1];
					array[time_begin + 1] = temp;
				}
			}
			for (int time_end = end; time_end > begin; time_end--) {
				if (array[time_end] < array[time_end - 1]) {
					temp = array[time_end];
					array[time_end] = array[time_end - 1];
					array[time_end - 1] = temp;
				}
			}
			begin++;
			end--;
		}
	}
}

