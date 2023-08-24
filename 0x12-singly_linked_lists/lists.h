#ifndef LISTS_H
#define LISTS_H
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
ListNode* createNode(int data);
void insertFront(ListNode** head, int data);
void insertEnd(ListNode** head, int data);
void deleteNode(ListNode** head, ListNode* node);
void printForward(ListNode* head);
void printBackward(ListNode* tail);

#endif
