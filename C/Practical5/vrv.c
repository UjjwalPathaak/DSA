#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node *node;

void printLL(node head)
{
    node temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

node takeinput2() // node* type as we need head in return
{
    int data;
    scanf("%d", &data);
    node head = NULL;
    node tail = NULL;
    while (data != -1)
    {
        node newNode = (node)malloc(sizeof(node));
        newNode->data = data;
        
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail -> next = newNode;
            tail = tail -> next;
        }
scanf("%d", &data);
    }
    return head;
}
int main()
{
    node head = (node)malloc(sizeof(node));
    head = takeinput2();

    printLL(head);
return 0;
}