#include <iostream>

class doubleList {
	struct node {
		node* next;
		node* prev;
		int data;
		node(node* next, node* prev, int data) : next(next), prev(prev), data(data) {}
	};
	node* head;
	node* tail;
	int size;
public:




	void MoveToBegin(node* ptr) {
		ptr->prev->next = ptr->next;
		ptr->next->prev = ptr->prev;
		ptr->next = head;
		ptr->prev = nullptr;
		head = ptr;
		std::cout << head << std::endl;
		std::cout << tail << std::endl;
	}

	void Move_(node* ptr, int k) {
		for (int i = 0; i < k; ++i) {
			ptr->prev->next = ptr->next;
			ptr->next->prev = ptr->prev;
			ptr->next = ptr->next->next;
			ptr->prev = ptr->next;
		}
		int i = 0;
		while (tail->prev != ptr) {
			tail = tail->prev;
			++i;
		}
		if (i < k) {
			ptr->prev->next = ptr->next;
			ptr->next->prev = ptr->prev;
			ptr->prev = tail;
			tail = ptr;
			ptr->next = nullptr;
		}
		std::cout << head << std::endl;
		std::cout << tail << std::endl;
	}

	void _Move(node* ptr, int k) {
		for (int i = 0; i < k; ++i) {
			ptr->prev->next = ptr->next;
			ptr->next->prev = ptr->prev;
			ptr->next = ptr->prev;
			ptr->prev = ptr->prev->prev;
		}
		int i = 0;
		while (head->next != ptr) {
			head = head->next;
			++i;
		}
		if (i < k) {
			ptr->prev->next = ptr->next;
			ptr->next->prev = ptr->prev;
			ptr->next = head;
			head = ptr;
			ptr->prev = nullptr;
		}
		std::cout << head << std::endl;
		std::cout << tail << std::endl;
	}
};



