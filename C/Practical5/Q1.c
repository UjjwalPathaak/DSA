#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};


/* 


struct node* addition(struct node* head, int pos)
{
    int output = 0;
    int i = 1;
    struct node *temp = head;
    while (i <= pos)
    {
        output = temp->data + output;
        temp = temp->next;
        i++;
    }
        printf("%d", output);
    return head;
}


 */

struct node* sub(struct node* head, int digit)
{
    struct node *tail = head;
    struct node *temp = head;
    struct node *nxt = head;
    int pos = 0;
    while (temp != NULL)
    {
        pos++;
        if (temp->data == digit)
        {
            break;
        }

        temp = temp->next;
    }
    int i = 0;
    int j = 0;
    while (i <= pos - 1)
    {
        tail = tail->next;
    }
    while (j <= pos + 1)
    {
        nxt = nxt->next;
    }
    temp->next = NULL;
    tail->next = nxt;
    return head;
}

/* struct node* countLL(struct node* head)
{
    struct node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("\n %d ", count+4);
    return head;
}
 */
void printLL(struct node* head)
{
    printf("\n");
    struct node *temp = head;
    while (temp != NULL)
    { 
        printf("\n%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{

    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *secound = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));
    struct node *fourth = (struct node*)malloc(sizeof(struct node));
    
    printf("Enter First node's data ");
    scanf("%d", &head->data);
    printf("Enter Secound node's data ");
    scanf("%d", &secound->data);
    printf("Enter Third node's data ");
    scanf("%d", &third->data);
    printf("Enter Fourth node's data ");
    scanf("%d", &fourth->data);

    head->next = secound;
    secound->next = third;
    third->next = fourth;
    fourth->next = NULL;
    
    int digit;
    printf("Enter Digit to delete ");
    scanf("%d", &digit);
    head = sub(head, digit);
    
    printLL(head);

    return 0;
}