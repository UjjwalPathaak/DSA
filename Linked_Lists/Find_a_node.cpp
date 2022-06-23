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
        this->next = NULL;
    }
};

void findLL(node *head, int find)
{
    node *temp = head;
    int output = 1;

    while (temp->data != find)
    {
        output++;
        temp = temp->next;
    }

    cout << output;
}
node *takeinput()
{
    int data;
    cin >> data;
    node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}
int main()
{
    node *head = takeinput();
    int find;
    cin >> find;
    findLL(head, find);
    return 0;
}