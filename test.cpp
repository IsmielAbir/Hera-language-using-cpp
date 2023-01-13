#include "dataStructure.h"

int main()
{
    LinkedList a;
    Node *head=NULL;
    a.insertAtTail(head,50);
    a.insertAtTail(head,51);
    a.display(head);
    return 0;
}