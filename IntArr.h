#pragma once

template <typename T> class IntArr {
private:
	T m_length = 0;
	T* m_data = 0;

public:
	IntArr() = default;
	IntArr(int length);
	IntArr(const IntArr& a);

	~IntArr() {
		delete[] m_data;
	}

	IntArr& operator = (const IntArr& a);

	void erase();

	T& operator[](int index);

	T getLength() const;

	void reallocate(int newLength);

	void resize(int newLength);

	void insertBefore(int value, int index);

	void remove(int index);

	void insertAtBeginning(int value);

	void insertAtEnd(int value);

};