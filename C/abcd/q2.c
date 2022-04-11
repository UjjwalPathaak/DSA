#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;

struct node *getnewnode(int x)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = x;
    ptr->next = NULL;
    ptr->prev = NULL;
    return ptr;
}

void insertatlast(int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    if (head == NULL)
    {
        ptr->next = head;
        head = ptr;
    }
    else
    {
        struct node *p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }

        p->next = ptr;
        ptr->prev = p;
        ptr->next = NULL;
    }
}

void display(struct node *ptr)
{

    while (ptr != NULL)
    {

        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node* deletefromend(struct node* head)
{
    struct node*  tail = head;
    struct node*  first = head->next;
    while (first->next != NULL)
    {
        first = first->next;
        tail = tail->next;
    }
    tail->next = NULL;
    return head;
}
int main()
{

    int i, n, x;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        insertatlast(x);
    }
    head = deletefromend(head);
    display(head);
    return 0;
}