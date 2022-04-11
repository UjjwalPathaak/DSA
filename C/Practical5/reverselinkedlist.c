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
    printf("\n");
    node temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
//reverse
node reverse(node head)
{
    node current = head;
    node prev = NULL;
    node nxt = NULL;
     while (current != NULL) {
        nxt = current->next;
        current->next = prev;

        prev = current;
        current = nxt;
    }
    return prev;
}

int main()
{

    node head = (node)malloc(sizeof(node));
    node secound = (node)malloc(sizeof(node));
    node third = (node)malloc(sizeof(node));
    node fourth = (node)malloc(sizeof(node));
    node fifth = (node)malloc(sizeof(node));
    node sixth = (node)malloc(sizeof(node));

    printf("Enter First node's data ");
    scanf("%d", &head->data);
    printf("Enter Secound node's data ");
    scanf("%d", &secound->data);
    printf("Enter Third node's data ");
    scanf("%d", &third->data);
    printf("Enter Fourth node's data ");
    scanf("%d", &fourth->data);
    printf("Enter Fifth node's data ");
    scanf("%d", &fifth->data);
    printf("Enter Sixth node's data ");
    scanf("%d", &sixth->data);

    head->next = secound;
    secound->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    printf("Orignal Linked List: ");
    printLL(head);

    head = reverse(head);

     printf("Reversed Linked List: ");
    printLL(head);

    return 0;
}