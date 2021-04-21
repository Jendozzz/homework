#include <iostream>

class queue {
	struct node {
		int data;
		node* next;
	};
	node* head;
	node* tail;
	int size;
public:
	void pop(int N, node* head, node* tail) {
		if (size != 0) {
			if (N < size) {
				for (int i = 0; i < N; ++i) {
					std::cout << head->data << std::endl;
					node* tmp = head;
					tmp = tmp->next;
					delete head;
					head = tmp;
				}
			}
			else {
				for (int i = 0; i < size; ++i) {
					std::cout << head->data << std::endl;
					node* tmp = head;
					tmp = tmp->next;
					delete head;
					head = tmp;
				}
			}
			std::cout << head << std::endl;
			std::cout << tail << std::endl;
		}
		else {
			std::cout << 'nil' << std::endl;
			std::cout << 'nil' << std::endl;
		}
	}

	void popElem(node* head, node* tail) {
		while (head!= nullptr && head->data % 2 != 0) {
			std::cout << head->data << std::endl;
			node* tmp = head;
			tmp = tmp->next;
			delete head;
			head = tmp;
		}
		if (head != nullptr) {
			std::cout << head << std::endl;
			std::cout << tail << std::endl;
		}
		else {
			std::cout << 'nil' << std::endl;
			std::cout << 'nil' << std::endl;
		}
	}
};



