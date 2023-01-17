#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node *Next;

    Node(int val){
        value = val;
        Next=NULL;
    }
};

class LinkedList{
    public:

void insertAtHead(Node *&head, int val){
        Node *newNode = new Node(val);
        newNode->Next=head;
        head=newNode;
}

void insertAtTail(Node *&head, int val){
    Node *newNode = new Node(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node *temp=head;
    while(temp->Next!=NULL){
        temp=temp->Next;
    }
    temp->Next=newNode;
}

void insertAtAnyPosition(Node *&head, int pos, int val){
    int i=0;
    Node *temp=head;
    while(i<pos-2){
        temp=temp->Next;
        i++;
    }
    Node *newNode= new Node(val);
    newNode->Next=temp->Next;
    temp->Next=newNode;
}

int searchByValue(Node *&head, int key){
    Node *temp=head;
    int count = 1;
    if(temp==NULL){
        return -1;
    }
    while(temp->value!=key){
        if(temp->Next==NULL){
            return -1;
        }
        temp=temp->Next;
        count++;
    }
    return count;
}

void insertAfterSpecificValue(Node *&head, int searching, int value){
    int position;
    position = searchByValue(head, searching);
    insertAtAnyPosition(head, position+1, value);
}


void insertBeforeSpecificValue(Node *&head, int searching, int value){
    int position;
    position = searchByValue(head, searching);
    insertAtAnyPosition(head, position-1, value);
}

void deleteAtHead(Node *&head){
    Node *temp=head;
    if(temp!=NULL){
        head=temp->Next;
        delete temp;
    }
    else
    cout<<"Its underflow"<<endl;
}

void deleteAtTail(Node *&head){
    Node *temp=head;
    if(temp!=NULL  && temp->Next!=NULL){
        while(temp->Next->Next!=NULL){
            temp=temp->Next;
        }
        Node *delNode = temp->Next;
        temp->Next=NULL;
        delete delNode;
    }
    else{
    if(temp==NULL)
    cout<<"Its underflow"<<endl;
    else
        deleteAtHead(head);
    }
}

void deletionAtSpecificPosition(Node *&head, int position){
    Node *temp=head;
    if(position<countLength(head)){
    if(position==1)
    deleteAtHead(head);
    else if(position==countLength(head))
    deleteAtTail(head);
    else{
        int i=1;
        while(i<position-1){
            temp=temp->Next;
        }
        Node *delNode = temp->Next;
        temp->Next=delNode->Next;
        delete delNode;
    }
    }
    else
    cout<<"Position Out of Bound"<<endl;
}

void deleteByValue(Node *&head, int value){
    int position = searchByValue(head, value);
    if(position==-1)
    cout<<"Not found"<<endl;
    else
    deletionAtSpecificPosition(head, position);
}

Node *reverse(Node *&head){
    if(head==NULL || head->Next==NULL){
        if(head==NULL)
        cout<<"The linked list is empty"<<endl;
        return head;
    }
    Node *newHead = reverse(head->Next);
    head->Next->Next=head;
    head->Next=NULL;
    return newHead;
}

int countLength(Node *&head){
    int count = 0 ;
    Node *temp=head;
    while(temp!=NULL){
        temp=temp->Next;
        count++;
    }
    return count;
}

void display(Node *n){
        int count = 0;
        while(n!=NULL){
            cout<<n->value;
            if(n->Next!=NULL)
            cout<<" -> ";
            n=n->Next;
        }
        cout<<endl;
    }
};


// doubly linkedlist
class doublyNode{
    public:
    int value;
    doublyNode *next;
    doublyNode *prev;
    
    doublyNode(int val){
        value=val;
        prev = NULL;
        next =NULL;
    }
};

class DoublyLinkedList{
    public:

void insertAtTail(doublyNode *&head, int val){
    doublyNode *newNode = new doublyNode(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    doublyNode *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        
    }
    temp->next=newNode;
    newNode->prev=temp;
}

void insertAtHead(doublyNode *&head, int val){
    doublyNode *newNode = new doublyNode(val);
    head->prev=newNode;
    newNode->next=head;
    head=newNode;
}

void display(doublyNode *n){
    while(n!=NULL){
        cout<<n->value;
        if(n->next!=NULL)
        cout<<" -> ";
        n=n->next;
    }
    cout<<endl;
}

void displayReverse(doublyNode *&head){
    doublyNode *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    while(temp!=NULL){
        cout<<temp->value;
        if(temp->prev!=NULL)
        cout<<" -> ";
        temp=temp->prev;
    }
    cout<<endl;
}

int countLength(doublyNode *&head){
    int count = 0 ;
    doublyNode *temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}

};