#include <stdlib.h>
#include <stdio.h>	

typedef struct Node
{
	int data;
	struct Node* next;
} Node;

Node* insert(Node *head,int data)
{
	//Complete this function
	Node *tempNode, *tailNode = (Node*)malloc(sizeof(Node));
	tailNode->data = data;
	tailNode->next = NULL;

	if (head == NULL) {
		head = tailNode;
	} else {
		tempNode = head;

		while(tempNode->next != NULL) {
			tempNode = tempNode->next;
		}

		tempNode->next = tailNode;
	}

	return head;
}

void display(Node *head)
{
	Node *start = head;

	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}

void delete(Node *head, int linkedListLength)
{
	int i;
	Node* tempNode;

	for (i = linkedListLength; linkedListLength > 0; linkedListLength--) {
		int n = i;
		tempNode = head;

		while (n != 0) {
			tempNode = tempNode->next;
			n--;
		}

		free(tempNode);
	}
}

int main()
{
	int T,data;

	scanf("%d",&T);
	Node *head = NULL;	

	while(T-->0) {
        	scanf("%d",&data);
        	head = insert(head,data);
	}

	display(head);
	delete(head, T);

	return 0;	
}
