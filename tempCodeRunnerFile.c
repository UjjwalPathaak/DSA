#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node* node;

node deletefromend(node head)
{
    int size = 0;
    node temp = head;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    printf("%d", size);
}
node printlinkedlist(node head)
{
    printf("\n");
    node temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    node first = (node)malloc(sizeof(node));
    node second = (node)malloc(sizeof(node));
    node third = (node)malloc(sizeof(node));

    first->next = second;
    second->next = third;
    third->next = NULL;

    scanf("%d", &first->data);
    scanf("%d", &second->data);
    scanf("%d", &third->data);

    first = deletefromend(first);
    printlinkedlist(first);
return 0;
}