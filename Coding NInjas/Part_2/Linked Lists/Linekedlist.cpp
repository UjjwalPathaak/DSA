#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

/* node *takeinput() // node* type as we need head in return
{
    int data;

    cin >> data;
    node *head = NULL;
    while (data != -1)
    {
        node *newNode = new node(data);

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newNode;
        }

        cin >> data;
    }
    return head;
} */
node *takeinput2() // node* type as we need head in return
{
    int data;

    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    while (data != -1)
    {
        node *newNode = new node(data);

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

        cin >> data;
    }
    return head;
}

void print(node *head)
{
    node *temp = head;

    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    /* node *head3 = takeinput();
    print(head3); */
    node *head3 = takeinput2();
    print(head3);
    
    // Statically
        node n1(1);
        node *head = &n1;
        node n2(2);
        node n3(3);
        node n4(4);
        node n5(5);

        n1.next = &n2;
        n2.next = &n3;
        n3.next = &n4;
        n4.next = &n5;
    // Dynamically
    node *n6 = new node(10);
    node *head2 = n6;
    node *n7 = new node(20);
    node *n8 = new node(30);
    node *n9 = new node(40);
    node *n10 = new node(50);

        n6 -> next = n7;
        n7 -> next = n8;
        n8 -> next = n9;
        n9 -> next = n10;

    print(head);
    print(head2);
   

    return 0;
}