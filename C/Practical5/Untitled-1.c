#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node* node;

node printLL(node head)
{
    node temp = head;
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
}
node insertatbeginning(node node1, int element)
{
    node newnode = (node)malloc(sizeof(node));
    newnode->next = node1;
    newnode->data = element;
    return newnode;
}
int main()
{
    node node1 = (node)malloc(sizeof(node));
    node node2 = (node)malloc(sizeof(node));
    node node3 = (node)malloc(sizeof(node));
    node node4 = (node)malloc(sizeof(node));
    node node5 = (node)malloc(sizeof(node));

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    //take input
    scanf("%d", &node1->data);
    scanf("%d", &node2->data);
    scanf("%d", &node3->data);
    scanf("%d", &node4->data);
    scanf("%d", &node5->data);

    //insert element in beginning
    int element;
    scanf("%d", &element);
    /* int pos;
    scanf("%d", &pos); */
    node1 = insertatbeginning(node1, element);
    printLL(node1);
return 0;
}