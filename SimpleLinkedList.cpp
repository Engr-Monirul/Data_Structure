#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    node *next;
};

int main()
{
    //Set Node
    node *first = new node();
    node *second = new node();
    node *last = new node();
    node *root;
    node *temp;

    first->data = 1;
    second->data = 2;
    last->data = 3;

    first->next = second;
    second->next = last;
    last->next = NULL;

    root = first;

    temp = root;

    cout<<"Main Linked List: "<<endl;
    int point = 1;
    while(temp!=NULL)
    {
        cout<<"Position "<<point<<" = "<<temp->data<<endl;
        temp = temp->next;
        point+=1;
    }

    //Insert Node At First
    node *fNode = new node();

    fNode->data = 0;
    fNode->next = root;
    root = fNode;

    temp = root;

    cout<<"\nAfter Insert At First: "<<endl;
    point = 1;
    while(temp!=NULL)
    {
        cout<<"Position "<<point<<" = "<<temp->data<<endl;
        temp = temp->next;
        point+=1;
    }

    //Insert At Last
    node *lNode = new node();
    lNode->data = 4;

    temp=root;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = lNode;
    lNode->next = NULL;

    temp = root;
    point = 1;
    cout<<"\nAfter Insert At Last: "<<endl;
    while(temp!=NULL)
    {
        cout<<"Position "<<point<<" = "<<temp->data<<endl;
        temp = temp->next;
        point+=1;
    }

    //Insert At Middle
    int pos,i,data;
    node *mNode = new node();
    cout<<"\nInsert New Position: ";
    cin>>pos;
    cout<<"Insert New Data: ";
    cin>>data;
    mNode->data = data;

    temp = root;
    for(i=2; i<pos; i++)
    {
        if(temp->next!=NULL)
        {
            temp = temp->next;
        }
    }
    mNode->next = temp->next;
    temp->next = mNode;

    temp = root;
    point = 1;
    cout<<"\nAfter Insert At Middle: "<<endl;
    while(temp!=NULL)
    {
        cout<<"Position "<<point<<" = "<<temp->data<<endl;
        temp = temp->next;
        point+=1;
    }

    //Delete First Node
    root = root->next;
    cout<<"\nAfter Delete First Node: "<<endl;
    temp = root;
    point = 1;
    while(temp!=NULL)
    {
        cout<<"Position "<<point<<" = "<<temp->data<<endl;
        temp = temp->next;
        point+=1;
    }

    //Delete Last Node
    temp = root;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next = NULL;

    point = 1;
    cout<<"\nAfter Delete Last Position: "<<endl;
    temp = root;
    while(temp!=NULL)
    {
        cout<<"Position "<<point<<" = "<<temp->data<<endl;
        temp = temp->next;
        point++;
    }

    //Delete Middle Position
    cout<<"\nDelete Position: ";
    cin>>pos;
    temp = root;
    for(i=2; i<pos; i++)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    cout<<"\nAfter Delete Middle Position: "<<endl;
    point = 1;
    temp = root;
    while(temp!=NULL)
    {
        cout<<"Position "<<point<<" = "<<temp->data<<endl;
        temp = temp->next;
        point++;
    }

    return 0;

}