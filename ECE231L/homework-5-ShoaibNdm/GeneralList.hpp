#ifndef GENERAL_LIST_HPP
#define GENERAL_LIST_HPP

#include <cstddef>
#include <iostream>

template <typename T>
class DList {
	private:
		struct _list {
			T value;
			struct _list *next;
			struct _list *back;
		};
		typedef struct _list List;

		List *_front;
		List *_back;
		size_t _size;

		void reccopy(const List *ptr) {
			if (ptr) {
				reccopy(ptr->next);
				push_front(ptr->value);
			}
		}

	public:
		DList() : _front{nullptr}, _back{nullptr}, _size{0} {}
		DList(const DList &list) : _front{nullptr}, _back{nullptr}, _size{0} {
			reccopy(list._front);
		}
		~DList() {
			while(!empty()) {
				pop_front();
			}
		}

		T front() const {
			return _front->value;
		}

		T back() const {
			return _back->value;
		}

		size_t size() const {
			return _size;
		}

		void push_front(T value) {
			List *new_node = new List;
			new_node->value = value;
		
			if (!empty()) {
				new_node->next = _front;
				_front->back = new_node;
			}
			else {
				new_node->next = nullptr;
				_back = new_node;
			}
			_front = new_node;
			new_node->back = nullptr;
			_size += 1;
		}

		void push_back(T value) {
			List *new_node = new List;
			new_node->value = value;
			if (!empty()) {
				new_node->next = _back;
				_back->next = new_node;
			}
			else {
				new_node->next = nullptr;
				_front = new_node;
			}
			_back = new_node;
			new_node->next = nullptr;
			_size += 1;
		}

		void pop_front() {
			// Linked list is empty
			if (empty()) {
				return;
			}
			List *node_to_delete = _front;
			// Linked list has only one node
			if (_front->next == nullptr) {
				_front = nullptr;
				_back = nullptr;
			}
			else {
				_front = _front->next;
				_front->back = nullptr;
			}
			_size -= 1;
			delete node_to_delete;
		}

		void pop_back() {
			if (empty()) {
				return;
			}
			List *node_to_delete = _back;
			if (_back->back == nullptr) {
				_front = nullptr;
				_back = nullptr;
			}
			else {
				_back = _back->back;
				_back->next = nullptr;
			}
			_size -= 1;
			delete node_to_delete;
		}

		bool empty() const {
			return ( (_front == nullptr) && (_back == nullptr) );
		}

		void print() {
			List *temp;
			for (temp = _front; temp != nullptr; temp=temp->next) {
				std::cout << temp->value << ' ';
			}
			std::cout << '\n';
		}

		DList &operator=(const DList &l){
			if (this == &l) {
				return *this;
			}
			List(ptr);
			reccopy(l);
			return *this;
		}
		
		bool operator==(const DList &l){
			return (_front == l._front) && (_back == l._back) && (_size == l._size);
		}

		bool operator!=(const DList &l){
			return !(*this == l);
		}

		friend std::ostream &operator<<(std::ostream &out, const DList &l) {
			List *temp;
			for (temp = l._front; temp != nullptr; temp=temp->next) {
				out << temp->value << ' ';
			}
			return out;
		}
};

#endif // GENERAL_LIST_HPP
