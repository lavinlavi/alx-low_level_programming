0x13. C - More Singly Linked Lists
This project is an exercise in data structures and algorithms. It involves implementing different functions using the C programming language to manipulate singly linked lists.
Tasks
This project comprises several tasks which involve creating and manipulating singly linked lists.
Task 0: Print list
Write a function that prints all the elements of a listint_t list.
Task 1: List length
Write a function that returns the number of elements in a linked listint_t list.
Task 2: Add node
Write a function that adds a new node at the beginning of a listint_t list.
Task 3: Add node at the end
Write a function that adds a new node at the end of a listint_t list.
Task 4: Free list
Write a function that frees a listint_t list.
Task 5: Free
Write a function that frees a listint_t list and sets the head to NULL.
Task 6: Pop
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
Task 7: Get node at index
Write a function that returns the nth node of a listint_t linked list.
Task 8: Sum list
Write a function that returns the sum of all the data (n) of a listint_t linked list.
Prototype
int sum_listint(listint_t *head);
If the list is empty, the function will return 0.
Task 9: Insert
Write a function that inserts a new node at a given position.
Prototype
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
Where idx is the index of the list where the new node should be added. Index starts at 0. The function returns the address of the new node, or NULL if it failed. If it is not possible to add the new node at index idx, do not add the new node and return NULL.
Task 10: Delete at index
Write a function that deletes the node at index index of a listint_t linked list.
Prototype
int delete_nodeint_at_index(listint_t **head, unsigned int index);
Where index is the index of the node that should be deleted. Index starts at 0. The function returns 1 if it succeeded, -1 if it failed.


