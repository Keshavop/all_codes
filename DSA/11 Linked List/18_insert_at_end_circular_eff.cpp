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
    if (head == NULL)
    {
        return;
    }
    node *p = head;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p!=head);
    cout<<endl;
}

node*insertEnd(node*head,int x){
    node*temp=new node(x);
    if (head==NULL)
    {
        temp->next=temp;
        return temp;
    }
    else{
        temp->next=head->next;
        head->next=temp;

        int t=temp->data;
        temp->data=head->data;
        head->data=t;
        return temp;
    }
}

int main()
{
    node*head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=head;

    print(head);
    head=insertEnd(head,5);
    print(head);
    return 0;
}