#include <bits/stdc++.h>
using namespace std;

//Stack part

template <typename N> class Node{
public:
    N value;
    Node *next;
    Node *prev;

    Node(N val){
        value = val;
        next = NULL;
        prev = NULL;
    }
};
// Stack <float> st;
template <typename S> class Stack{
    Node <S> *head;
    Node <S> *top;
    int count = 0;
public:
    Stack(){
        head = NULL;
        top = NULL;
    }

// PUSH
void push(S val){
    Node <S> *newNode = new Node <S> (val);
    if (head == NULL){
        head = top = newNode;
        count++;
        return;
    }
    top->next = newNode;
    newNode->prev = top;
    top = newNode;
    count++;
}
// POP
S pop(){
    Node <S> *delNode;
    delNode = top;
    S chk;
    if (head == NULL){ 
        // There is No Element in the Stack
        cout << "Stack Underflow " << endl;
        return chk;
        }

    if (top == head){ 
    // There is only 1 element
        head = top = NULL;
    }
    else{ 
    // There is More than 1 element
    top = delNode->prev;
    top->next = NULL;
    }
        chk = delNode->value;
        delete delNode;
        count--;
        return chk;
    }
// EMPTY
bool empty(){
        if (head == NULL)
            return true;
        else
            return false;
    }
// SIZE
int size(){
        return count;
    }
// TOP
S Top(){
        S chk;
        if (top == NULL){
            cout << "Stack Underflow | There is no Element in Top " << endl;
        }
        else
            chk = top->value;
        return chk;
    }
};

//Queue Part 

template <typename N> class NodeQueue{
public:
    N value;
    NodeQueue *next;

    NodeQueue(N val){
        value = val;
        next = NULL;
    }
};
template < typename Q> class Queue{
    NodeQueue <Q> *front;
    NodeQueue <Q> *rear;
public:
    Queue(){
        front = NULL;
        rear = NULL;
    }
// enqueue --> push (val)
void push(Q val){
    NodeQueue <Q> *newNode = new NodeQueue <Q> (val);
    if (front == NULL){
            front = newNode;
            rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = rear->next;
    }
// deque --> pop ()
Q pop(){
        Q chk;
        if (rear == NULL){
            cout << "Queue Underflow | There is no element in the Queue" << endl;
            return chk;
        }
        NodeQueue <Q> *delNode;
        delNode = front;
        front = front->next;
        if (front == NULL){
            rear = NULL;
        }
        chk = delNode->value;
        delete delNode;
        return chk;
    }
// peek ---> front() back()
Q Front(){
        Q chk;
        chk = front->value;
        return chk;
    }
Q Back(){
        Q chk;
        chk = rear->value;
        return chk;
    }
// empty ---> empty()
bool empty(){
        if (front == NULL && rear == NULL)
            return true;
        else
            return false;
    }
};

//Graph

typedef pair<int, int> edgeWeightPair;
class Graph
{
    int V;
    list<edgeWeightPair> *adj;
    public:
    Graph(int V){
        this->V = V;
        adj = new list<edgeWeightPair>[V];
    }

    void addEdge(int u, int v, int w){
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    void printNeighbour(int chk){
        cout << chk << ":";
        for (auto i = adj[chk].begin(); i != adj[chk].end(); i++){
            cout << " (" << (*i).first << ", " << (*i).second << ")";
        }
    }
};