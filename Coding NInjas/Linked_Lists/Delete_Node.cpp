#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin >> data;
    }
    return head;
};

Node *deletenode(Node *head, int pos)
{
    int current = 0;
    Node *previous = NULL;
    Node *temp = head;
    if (pos == 1)
    {
        temp = temp->next;
        head = temp;
        return head;
    }
    while (current < pos - 1)
    {
        previous = temp;
        temp = temp->next;
        current++;
    }
    temp = temp->next;
    previous->next = temp;
    return head;
}

void print(Node *head)
{

    Node *temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = takeinput();
    cout << "Linked List before deletion" << endl;
    print(head);
    int pos;
    cout << "Enter node position to delete" << endl;
    cin >> pos;
    head = deletenode(head, pos);
    cout << "Linked List after deletion" << endl;
    print(head);
    return 0;
}
