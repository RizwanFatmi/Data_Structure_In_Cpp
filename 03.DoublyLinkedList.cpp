/**********************************************************************DOUBLY LINKED LIST DATA STRUCTURE********************************************************************/

#include <iostream>

using namespace std;

// CREATING LINKED LIST :

struct Node
{
    int data;
    struct Node *previous;
    struct Node *next;
};



/*****************************OPERATIONS*************************************/




// FUNCTION FOR TRAVERSAL:

void LinkedListTraversal(struct Node *ptr)
{

    while (ptr != NULL)
    {

        cout << " Node Value = " << ptr->data << endl;
        ptr = ptr->next;
    }
}

/*-------------------------------------------------*/

// FUNCTION FOR INSERTION AT FIRST NODE OF LIST :

struct Node *InsertionAtFirstNode(struct Node *first, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->previous = NULL;
    ptr->next = first;
    return ptr;
}

/*-------------------------------------------------*/


// FUNCTION FOR INSERTION AT LAST NODE OF LIST :

struct Node *InsertionAtLastNode(struct Node *first, int data)
{   
    struct Node *p = first;
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    while (p->next != NULL)
    {

    
        p = p->next;
    }

    ptr->data = data;
    ptr->next = NULL;
    ptr->previous = p;
    p->next = ptr;


    return ptr;
}

/*-------------------------------------------------*/

// FUNCTION FOR INSERTION AFTER NODE OF LIST :

struct Node *InsertionAfterNode(struct Node *PreviouseNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = PreviouseNode->next;
    ptr->previous = PreviouseNode;
    PreviouseNode->next = ptr;
    return ptr;
}

/*-------------------------------------------------*/

// FUNCTION FOR INSERTION IN BETWEEN NODE OF LIST :

struct Node *InsertionInBetween(struct Node *first, int data, int index)
{

    struct Node *p = first;
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    int i = 0;

    while (i != index - 2)
    {

        p = p->next;
        i++;
    }

    ptr->data = data;
    ptr->next = p->next;
    ptr->previous  = p;
    p->next = ptr;

    return ptr;
}

/*-------------------------------------------------*/

// FUNCTION FOR DELETION AT FIRST NODE OF LIST :

struct Node *DeletionAtFirstNode(struct Node *first)
{
   struct Node *p = first;
   first= first->next;
    free(p);
    return first;
}

/*-------------------------------------------------*/

// FUNCTION FOR DELETATION IN BETWEEN NODE OF LIST :

struct Node *DeletationInBetween(struct Node *first,int index)
{

    struct Node *p = first;
    struct Node *q= p->next;

    int i = 1;

    while (i != index - 1)
    {
        p = p-> next;
        q = q-> next;
        i++;
    }

    p ->next= q->next;
    free(q);

    return first;
}

/*-------------------------------------------------*/

// FUNCTION FOR DELETATION AFTER NODE OF LIST :

struct Node *DeletationAfterNode(struct Node *PreviouseNode)
{
   struct Node * ptr = PreviouseNode->next;
    PreviouseNode->next = ptr -> next;
  free(ptr);
    return PreviouseNode;
}

/*-------------------------------------------------*/

// FUNCTION FOR DELETATION AT LAST NODE OF LIST :

struct Node *DeletationAtLastNode(struct Node *first)
{   
    struct Node *p = first;
    struct Node *q = p->next;


    while (q->next != NULL)
    {

    
        p = p->next;
        q = q->next;
    }

    p->next= NULL;
    free(q);


    return first;
}

/*-------------------------------------------------*/

main()
{

    system("cls");

    // ALLOCATING DINAMIC MEMORY FOR NODES:

    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *forth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node));

    // CONTECTING THE NODES AND ASSIGNING THE DATA :

    first->data = 10;
    first->next = second;
    first->previous = NULL;


    second->data = 20;
    second->next = third;
    second->previous = first;

    third->data = 30;
    third->next = forth;
    third->previous = second;

    forth->data = 40;
    forth->next = fifth;
    forth->previous = third;

    fifth->data = 50;
    fifth->next = NULL;
    fifth->previous = forth;

    // FUNCTION CALLING..........

    // LinkedListTraversal(first);

    // cout << "\n\n"<< endl;

    // first = InsertionAtFirstNode(first, 5);

    // InsertionInBetween(first, 12, 4);

    // InsertionAtLastNode(first,60);

    // InsertionAfterNode(second,25);

    // first = DeletionAtFirstNode(first);

    // DeletationInBetween(first,3);

    // DeletationAfterNode(second);

    // DeletationAtLastNode(first);
       
    // LinkedListTraversal(first);
}
