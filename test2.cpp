#include "dataStructure.h"


int main()
{
    LinkedList a;
    Node *head=NULL;
    a.insertAtHead(head, 50);
    a.insertAtHead(head, 60);

    a.insertAtAnyPosition(head, 2, 55);
    a.display(head);
    return 0;
}