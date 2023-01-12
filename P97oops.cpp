// linked list

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }

};

void insertAthead(node* &head,int val){
    node* n=new node(val);
    n->next=head;      // head stores address of 1st node of linked list
    head=n;            // now n becomes 1st node
}

void insertAtTail(node* &head,int val){      // here head is taken by reference (&head) v r taking 2 modify our list later

    node* n=new node(val);

    if (head==NULL)       // condition where ntg is added in the linked list
    {
       head=n;            // n will be the 1st node where head is pointing towards it
       return;
    }
    

    node* temp=head;   // to traverse to the end of the list we start with HEAD.
    while (temp-> next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n; 
}

    // to print linked list
    void display(node* head){      // here head is taken by value becaz no need to modify later
        node* temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data<<"-> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

    // searching

    bool search(node* head,int key){
        node* temp=head;
        while (temp != NULL)
        {
            if(temp->data==key){
                return true;
            }
            temp=temp->next;    // we moved temp frwd otherwise the loop goes on
        }
        return false;
    }


int main(){

    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);

    insertAthead(head,4);
    display(head);

    cout<<search(head,5)<<endl;
    
    return 0;
}