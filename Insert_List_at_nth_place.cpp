#include <iostream>

struct Node {
	int data;
	Node* next;

};
Node* insertNode(int x,Node* head) {
	struct Node* temp = new Node();
	temp->data = x;
	temp->next = NULL;

	if (head != NULL) {
		Node* ptr = head;
		while (ptr->next !=NULL) {
			ptr = ptr->next;
		}
		ptr->next = temp;

	}
	else{
		head = temp;
	}
	return head;
}

void printNode(Node* head) {
	while (head != NULL) {
		std::cout << "Value :";
		std::cout << head->data;
		head = head->next;
	}
}
void insertNodeAtn(int value,int pos,Node * head) {
	int inc = 1;
	Node* temp = new Node();
	temp->data = value;
	temp->next = NULL;

	if (head != NULL) {
		Node* ptr = head;
		while(pos-1 > inc) {
			ptr = ptr->next;
			inc++;
		}
		temp->next = ptr->next;
		ptr->next = temp;
	}
	else {
		std::cout << "please create a Linked List first" << std::endl;
	}
}
int main() {
	struct Node* ptr =NULL;
	int n, x;
	std::cout << "how many no" << std:: endl;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cout << "enter No:" << std::endl;
		std::cin >> x;
		ptr = insertNode(x,ptr);
	}
	

	std::cout << "enter No" << std::endl;
	std::cin >> x;
	std::cout << "enter position" << std::endl;
	std::cin >> n;
	insertNodeAtn(x,n,ptr);
	printNode(ptr);
}