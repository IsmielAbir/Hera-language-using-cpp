#include "baseFunction.h"
#include "dataStructure.h"

int main()
{
    LinkedList a;
    Node *head=NULL;
    a.insertAtHead(head,50);
        a.insertAtHead(head,51);

    a.display(head);
    return 0;
}