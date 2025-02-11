#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout<<endl;
}

void printMiddle(node * head){
    if (head==NULL)
    {
        return;
    }
    node*slow=head;
    node*fast=head;
    while (fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    print(head);
    printMiddle(head);
    return 0;
}