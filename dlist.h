#include <iostream>

template <typename T>
class list {
	struct node {
		node* next;
		node* prev;
		T data;
		node(T data, node* next, node* prev) : data(data), next(next), prev(prev){}
	};
	node* head;
	node* tail;

	friend class list_iterator;
public:
	class list_iterator {
		node* current_node;
		list_iterator(node* current_node) : current_node(current_node) {}
		friend class list;
	public:
		list_iterator& operator++() {
			current_node = current_node->next;
			return *this;
		}

		list_iterator& operator--() {
			current_node = current_node->prev;
			return *this;
		}

		bool operator==(const list_iterator& rhs) {

			return current_node == rhs.current_node;
		}
		bool operator!=(const list_iterator& rhs) {
			return current_node != rhs.current_node;
		}
		T& operator*() {
			return current_node->data;
		}
	};

	list() :head(nullptr), tail(nullptr){}
	void insert(const T& data) {
		head = new node(data, head, tail);
	}
	list_iterator begin() {
		return  list_iterator(head);
	} 

	list_iterator end() {
		return  list_iterator(tail);
	}
};


