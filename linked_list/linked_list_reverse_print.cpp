#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int val;
    node* next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void insert_at_tail(node* &head,node* &tail,int val)
{
    node* newnode=new node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
    }
    tail->next=newnode;
    tail=newnode;
}

void print_reverse(node* head)
{
    node* temp=head;
    if(temp== NULL)
    {
        return;
    }
    print_reverse(temp->next);
    cout<<temp->val<<" ";

}
int main()
{
    node* head=NULL;
    node* tail=NULL;

    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }

        insert_at_tail(head,tail,val);

    }

    print_reverse(head);

}

