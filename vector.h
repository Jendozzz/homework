#pragma once
double COEF_CAPACITY = 1.6;
template <typename T>
class vector {
	T* data;
	size_t size;
	size_t capacity;
	

	void allocation_memory() {
		capacity = size * COEF_CAPACITY;
		T* tmp = nullptr;
		if (size == 1) {
			tmp = new T[size + 1];
			capacity = 2;
		}
		else
			tmp = new T[capacity];
		for (size_t i = 0; i < size; ++i) {
			tmp[i] = data[i];
		}
		delete[] data;
		data = tmp;

	}
public:
	vector(size_t size) : size(0), capacity(size* COEF_CAPACITY) {
		data = new T[capacity];
		for (size_t i =0 ; i < size; ++i) {
			data[i] = T();
		}
	}

	void push_back(const T& item) {
		if (size == capacity) {
			allocation_memory();
		}
		data[size ] = item;
		++size;
	}

	T* insert(T* place , const T& item) {
		if (place!=nullptr && place >= begin() && place < end()) {
			size_t new_index = place - data;
			if (size == capacity) {
				allocation_memory();
			}
			
			for (size_t i = size + 1; i != new_index; --i) {
				data[i] = data[i - 1];
			}
			data[new_index] = item;
			++size;
			return place;
		}
		else {
			throw "wrong";
		}


	}

	T& operator[](size_t index) {
		if (index > size) {
			throw "wrong";
		}
		return data[index];
	}
	T* begin() {
		return data;
	}
	T* end() {
		return data + size;
	}
};

