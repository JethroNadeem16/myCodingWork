#ifndef G_QUEUE_H
#define G_QUEUE_H

#include <iostream>
#include <list>

template <typename T>
class Queue {
	private:
		std::list<T> _data;
		size_t _size;
	public:
		//Default constructor
		Queue() : _data{std::list<T>()}, _size{0} {};

		//Copy constructor
		Queue(const Queue &q) : _data{q._data}, _size{q._size} {};

		//Getters
		size_t size() const {
			return _size;
		}

		T front() const{
			return _data.front();
		}

		T back() const{
			return _data.back();
		}

		//Push to queue
		void enqueue(T value) {
			_data.push_back(value);
			_size = _size + 1;
		}
			
		//Pop from queue
		void dequeue() {
			_data.pop_back();
			_size = _size - 1;
		}

		void print() const {
			for (const auto &x : _data) {
				std::cout << x << ' ';
			}
			std::cout << '\n';
		}

		bool empty() const {
			if (_size == 0){
				return true;
			}
			return false;
		}

		Queue &operator=(const Queue &q){
			if (this == &q) {
				return *this;
			}
			_data = q._data;
			_size = q._size;
			return *this;
		}

		template <typename Q>
		friend std::ostream &operator<<(std::ostream &out, const Queue<Q> &q);
		
};
template <typename Q>
std::ostream &operator<<(std::ostream &out, const Queue<Q> &q) {
	for (const auto &x : q._data){
		out << x << ' ';
	}
	return out;
}
		

#endif
