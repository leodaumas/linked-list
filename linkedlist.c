#include <stdio.h>
#include <stdlib.h>

struct node {
		int value;
		struct node* next;
};
typedef struct node node_t;

void printlist(node_t *head) {
	node_t *temporary = head;

	while (temporary != NULL) {
		printf("%d - ", temporary ->value);
		temporary = temporary->next;
	}
	printf("\n");
}


int main() {
	node_t n1, n2, n3;
	node_t *head;

	n1.value = 1;
	n2.value = 2;
	n3.value = 3;

	head = &n1;
	n3.next = NULL;
	n2.next = &n3;
	n1.next = &n2;

	node_t n4;
	n4.value = 4;
	n4.next = &n3;
	n2.next = &n4;

	//head = head->next;

	printlist(head);

	return 0;
}