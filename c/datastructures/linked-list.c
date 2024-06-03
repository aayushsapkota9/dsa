#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *link;
};

// Function prototypes
int count_nodes(struct node *head);
void print_nodes(struct node *head);
void add_at_end(struct node *head, int number);
int insert_node_at_index(struct node *head, int value, int position);
struct node* add_at_front(struct node *head, int number);

int main() {
  struct node *head = NULL;
  head = (struct node *)malloc(sizeof(struct node));
  if (head == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }
  head->data = 45;
  head->link = NULL;

  struct node *current = (struct node *)malloc(sizeof(struct node));
  if (current == NULL) {
    printf("Memory allocation failed\n");
    free(head);
    return 1;
  }
  current->data = 98;
  current->link = NULL;
  head->link = current;

  current = (struct node *)malloc(sizeof(struct node));
  if (current == NULL) {
    printf("Memory allocation failed\n");
    free(head->link);
    free(head);
    return 1;
  }
  current->data = 3;
  current->link = NULL;
  head->link->link = current;

  add_at_end(head, 10);
  head = add_at_front(head, 99);

  insert_node_at_index(head, 6969, 2);
  count_nodes(head);
  print_nodes(head);

  // Free allocated memory
  struct node *temp;
  while (head != NULL) {
    temp = head;
    head = head->link;
    free(temp);
  }

  return 0;
}

int count_nodes(struct node *head) {
  int count = 0;
  struct node *ptr = head; // Initialize ptr to head
  while (ptr != NULL) {
    count++;
    ptr = ptr->link;
  }
  printf("The count is %d\n", count);
  return count; // Return count for potential further use
}
int insert_node_at_index(struct node *head, int value, int position){
  
  struct node *ptr=head;
  struct node *newNode=(struct node *)malloc(sizeof(struct node));
  newNode->data=value;
  newNode->link=NULL;
  position--;
  while(position!=1)
  {
    ptr=ptr->link;
    position--;
  }
  newNode->link=ptr->link;
  ptr->link=newNode;

  return 0;
}

void print_nodes(struct node *head) {
  struct node *ptr = head; // Initialize ptr to head
  while (ptr != NULL) {
    printf("%d\n", ptr->data);
    ptr = ptr->link;
  }
}

void add_at_end(struct node *head, int number) {
  struct node *newNode = (struct node *)malloc(sizeof(struct node));
  if (newNode == NULL) {
    printf("Failed to allocate memory\n");
    return;
  }
  newNode->data = number;
  newNode->link = NULL;

  struct node *ptr = head;
  while (ptr->link != NULL) {
    ptr = ptr->link;
  }
  ptr->link = newNode;
}

struct node* add_at_front(struct node *head, int number) {
  struct node *newHead = (struct node *)malloc(sizeof(struct node));
  if (newHead == NULL) {
    printf("Memory allocation failed at add_at_front\n");
    return head;
  }
  newHead->data = number;
  newHead->link = head;
  return newHead;
}

