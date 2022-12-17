/**********************************************************************STACK DATA STRUCTURE USING LINKEDLIST*******************************************************************/

#include <iostream>

using namespace std;


// CREATING STACK LIST :

struct stack
{
    int size;
    int top1;
    struct Node;
};


// CREATING STACK USING LINKEDLIST :

struct Node
{
   
    int data;
    struct Node *next;
};



// FUNCTION FOR CHECKING IF THE STACK IS EMPTY :

int IsEmpty(struct stack stk)
{

  if ( stk.top1 == -1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

/*-------------------------------------------------*/

/*****************************OPERATIONS*************************************/




// FUNCTION FOR TRAVERSAL:

    void Traversal(struct stack stk, struct Node * ptr)
{

  if ( stk.top1 == -1)
  {
    cout<<"Stack is Empty !!"<<endl;
  }
  
 else
  {
    int a=1;

     while (ptr != NULL)
    {
        cout << " Stack Position = " <<a<<"     Value = "<<ptr->data << endl;
        ptr = ptr->next;
        a++;
    }

    }
    
  }
  


/*-------------------------------------------------*/

// FUNCTION FOR PUSHING THE ELEMENT :

struct Node *Push(struct Node *top, int data)
{
     struct Node*t = (struct Node *)malloc(sizeof(struct Node));
    t->data = data;
    t->next = top;

    return t;
}

/*-------------------------------------------------*/


// FUNCTION FOR POPING THE ELEMENT :

struct Node *Pop(struct stack stk, struct Node *top)
{
    if(IsEmpty(stk))
    {

      cout<<"Stack is Empty!!\n"<<endl;

    }

    else
    {
    struct Node *p = top;
    top = top -> next;
    free(p);
    return top;

    }
}

/*-------------------------------------------------*/


// FUNCTION FOR PEEKING THE ELEMENT IN THE STACK :

void Peek(struct stack stk,struct Node *ptr,int position)
{

  if (position > stk.top1+1)
{
    cout<<"Invalid Position Given By The User!!\n"<<endl;
}

else if( position == 1){

cout << " Stack Position = " <<1<<"     Value = "<<ptr->data << endl;

}
else
  {
    int a=1;

     while (ptr != NULL)
    {
        
        ptr = ptr->next;
        a++;
        if (a==position)
        {
         break;
        }
        
    }
      cout << " Stack Position = " <<position<<"     Value = "<<ptr->data << endl;
    }

 

}

/*-------------------------------------------------*/



main()
{

    system("cls");

// CREATING STACK!!
    struct  stack s;

    s.top1 = -1;
    // ALLOCATING DINAMIC MEMORY FOR NODES:

    struct Node *top = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *forth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node));


    //PUSHING ELEMENT MANUALY :
    // CONTECTING THE NODES AND ASSIGNING THE DATA :

    top->data = 10;
    top->next = second;
    s.top1++;
    

    second->data = 20;
    second->next = third;
    s.top1++;
    

    third->data = 30;
    third->next = forth;
    s.top1++;
    

    forth->data = 40;
    forth->next = fifth;
    s.top1++;
    

    fifth->data = 50;
    fifth->next = NULL;
    s.top1++;
    

    // FUNCTION CALLING..........

    //PUSHING ELEMENT

   // top = Push(top,5);


    //PUSHING ELEMENT

   //   top = Pop(s,top);


    //CHECKING THE "IsEmpty" FUCNTION :
/*
      if(IsEmpty(s))
      {

        cout<<"Stack is Empty"<<endl;
      } 

      else
      {

         cout<<"Stack is not Empty"<<endl;
      }
    */
  // Peek(s,top,5);
/*
  for (int i = 1; i <= s.top1+1; i++)
  {
    Peek(s,top,i);
  }
  
*/
 // Traversal(s,top);
}
