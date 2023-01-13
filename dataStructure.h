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




