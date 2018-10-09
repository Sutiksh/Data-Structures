#include<iostream>
#include<stdlib.h>

using namespace std;

struct node

{
    int info;

    node *next;

}*head=NULL, *tail=NULL;

class Link
{

public:
void insert_last(int value)
{

    struct node *temp, *h;
    temp=new node;
    temp->info=value;
    temp->next=NULL;
    if(head==NULL)           //underflow

    {
        head=temp;
        tail=temp;
    }
    else

    {
        tail->next=temp;
        tail=temp;
    }
    temp=NULL;
}

void insert_first(int value)
{
    node *temp=new node;
    temp->info=value;
    temp->next=NULL;
    if(head==NULL)           //underflow
    {
        head=temp;
        tail=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
    temp=NULL;
}

void insert_middle(int value, int x)
{
    struct node *temp=new node;
    struct node *trav=new node;
    temp->info=value;
    temp->next=NULL;
    if(head==NULL)           //underflow
    {
        head=temp;
        tail=temp;
    }
    else
    {
        for(trav=head;trav!=NULL;trav=trav->next)
        {
            if(trav->info==x)
            {
                break;
            }
        }
        temp->next=trav->next;
        trav->next=temp;
    }
}

void display()
{
    struct node *temp = new node;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->info<<"-->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
};

int main()
{
    Link l;
    int v,p,n;
    while(n!=5)
    {
        cout<<"1.Insert First 2.Insert Middle 3.Insert Last 4.Display 5.Exit"<<endl;
        cin>>n;
        switch(n)
        {
           case 1:
                cout<<"Insert a number:"<<endl;
                cin>>v;
                l.insert_first(v);
                break;
            case 2:
                cout<<"Insert a number: "<<"Insert the position: "<<endl;
                cin>>v>>p;
                l.insert_middle(v,p);
                break;
            case 3:
                cout<<"Insert a number: "<<endl;
                cin>>v;
                l.insert_last(v);
                break;
            case 4:
                l.display();
                break;
            case 5:
                exit(0);
        }
    }
        return 0;
}

