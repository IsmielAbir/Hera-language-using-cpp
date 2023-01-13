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
    position = searchValue(head, searching);
    insertAtSpecificPosition(head, position+1, value);
}


    void insertBeforeSpecificValue(Node *&head, int searching, int value){
    int position;
    position = searchValue(head, searching);
    insertAtSpecificPosition(head, position-1, value);
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