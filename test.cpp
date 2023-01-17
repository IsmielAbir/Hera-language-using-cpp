

#include "LinkedList.h"
#include "baseFunction.h"
int main()
{
    LinkedList a;
    Node *head=NULL;
    a.insertAtHead(head,50);
    a.insertAtTail(head,55);
    a.insertAtAnyPosition(head,3,60);
    a.insertAtHead(head,70);
    a.insertAtTail(head,80);
    a.insertAtAnyPosition(head,4,90);

    a.searchByValue(head,50);

    a.display(head);

    hera(a.countLength(head));
    return 0;
}