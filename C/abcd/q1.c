#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node *node;
struct node *head = NULL;

node reverse(node head)
{
    node current = head;
    node previous = NULL;
    node nxt = NULL;

    while (current != NULL)
    {
        nxt = current->next;
        current->next = previous;

        previous = current;
        current = nxt;
    }
    return previous;
}
void printlinkedlist(node head)
{
    node temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
void push(int n)
{
    node newnode = newNode(n);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}
node newNode(int n)
{
    struct node *p = (node)malloc(sizeof(node));
    p->data = n;
    p->next = NULL;
    p->prev = NULL;
    return p;
}
int main()
{
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        push(x);
    }

    head = reverse(head);
    printlinkedlist(head);
    return 0;
}