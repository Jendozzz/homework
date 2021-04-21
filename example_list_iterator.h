#pragma once 
//list
//eque
//stack
//array
//vector

template <typename T>
class list {
	struct node {
		node* next;
		T data;
		node(T data, node* next) : data(data), next(next) {}
	};
	node* head;


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

	list() :head(nullptr) {}
	void insert(const T& data) {
		head = new node(data, head);
	}
	list_iterator begin() {
		return  list_iterator(head);
	}

	list_iterator end() {
		return  list_iterator(nullptr);
	}
};



