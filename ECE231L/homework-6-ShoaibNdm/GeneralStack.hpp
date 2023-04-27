#ifndef G_STACK_H
#define G_STACK_H

#include <iostream>
#include <list>

template <typename T>
class Stack {
	private:
		std::list<T> _data;
		size_t _size;
		
	public:
		//Default constructor
		Stack() : _data{std::list<T>()}, _size{0} {};

		//Default copy constructor
		Stack(const Stack &s) : _data{s._data}, _size{s._size} {};

		//Getters
		T top() const{
			return _data.front();
		}

		size_t size() const {
			return _size;
		}

		//Adding data to the data structure
		void push(T value){
			_data.push_front(value);
			_size = _size + 1;
		}

		//Removing data from the data structure
		void pop(){
			_data.pop_front();
			_size = _size - 1;
		}

		bool empty() const {
			if (_size == 0){
				return true;
			}
			return false;
		}

		void print() const {
			for (const auto &x : _data) {
				std::cout << x << ' ';
			}
			std::cout << '\n';
		}

		Stack &operator=(const Stack &s){
			if (this == &s) {
				return *this;
			}
			_data = s._data;
			_size = s._size;
			return *this;
		}

		template <typename S>
		friend std::ostream &operator<<(std::ostream &out, const Stack<S> &s);

};
template <typename S>
std::ostream &operator<<(std::ostream &out, const Stack<S> &s) {
	for (const auto &x : s._data){
		out << x << ' ';
	}
	return out;
}


#endif
