#pragma once


template <typename T>
class array {

	T* data;
	size_t size;
public:
	array(size_t size): size(size) , data (new T[size]) {}

	T& operator[](size_t index) {
		if (index > size)
			throw ("whrong");
		return data[index];
	}

	T* begin() {
		return data;
	}

	T* end() {
		return data+size;
	}
	

};

