/**********************************************************************STACK DATA STRUCTURE USING ARRAY********************************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// CREATING STACK LIST :

struct stack
{
    int size;
    int top;
    int *arr;
};


// FUNCTION FOR CHECKING IF THE STACK IS EMPTY :

int IsEmpty(struct stack stk)
{

  if ( stk.top == -1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

/*-------------------------------------------------*/

// FUNCTION FOR CHECKING IF THE STACK IS FULL :

int IsFull(struct stack stk)
{

  if ( stk.top == stk.size-1)
  {
    return 1;
  }
  
 else
  {
    return 0;
  }
}

/*-------------------------------------------------*/






/*--------------------OPERATIONS-----------------------------*/






// FUNCTION FOR TRAVERSING THE STACK :

void Traversal(struct stack stk)
{

  if ( stk.top == -1)
  {
    cout<<"Stack is Empty !!"<<endl;
  }
  
 else
  {
    for (int i =stk.top; i >= 0; i--)
    {
      cout<<stk.arr[i]<<endl;
    }
    
  }
}

/*-------------------------------------------------*/

// FUNCTION FOR PUSHING THE ELEMENT IN THE STACK :

void Push(struct stack stk, int value)
{

  if (IsFull(stk))
{
    cout<<"Stack is full!!\n"<<endl;
}
else{

  stk.top++;
  stk.arr[stk.top]=value;
  
cout<<"Element Pushed!!\n\n"<<endl;
Traversal(stk);
}

}

/*-------------------------------------------------*/

// FUNCTION FOR POPING THE ELEMENT IN THE STACK :

void Pop(struct stack stk)
{

  if (IsEmpty(stk))
{
    cout<<"Stack is Empty!!\n"<<endl;
}
else{
   
  stk.top--;
 
  
cout<<"Element Removed!!\n\n"<<endl;
Traversal(stk);
}

}

/*-------------------------------------------------*/



// FUNCTION FOR PEEKING THE ELEMENT IN THE STACK :

void Peek(struct stack stk,int position)
{

  if (position > stk.top+1)
{
    cout<<"Invalid Position Given By The User!!\n"<<endl;
}
else{
   
  cout<<"Array Index : "<<position-1<<"  Stack Postion : "<<position<<"  Value : "<<stk.arr[position-1]<<endl;
 

}

}

/*-------------------------------------------------*/

 int main()
{
system("cls");

// CREATING STACK!!

struct  stack s;
s.size = 5;
s.top = -1;
s.arr = (int *)malloc(s.size * sizeof(int));

//PUSHING ELEMENT MANUALY :

s.arr[0] = 10;
s.top++;
s.arr[1] = 15;
s.top++;
s.arr[2] = 20;
s.top++;
s.arr[3] = 25;
s.top++;
s.arr[4] = 30;
s.top++;



/*

//CHECKING THE "IsEmpty" FUCNTION :

if (IsEmpty(s))
{
    cout<<"Stack is empty!!\n\n"<<endl;
}
else{
cout<<"Stack is not empty!!\n\n"<<endl;

}


//CHECKING THE "IsFull" FUCNTION :

if (IsFull(s))
{
    cout<<"Stack is full!!\n\n"<<endl;
}
else{
cout<<"Stack is not full!!\n\n"<<endl;

}*/

//PUSHING ELEMENT

//Push(s,30);


//POPING ELEMENT

//Pop(s);

//PEEKING ELEMENT
 //Peek(s,6);


//STACK TRAVERSAL:

//Traversal(s);

/*
for (int i = 1; i <= s.top+1; i++)
{
  Peek(s,i);
}
*/

return 0;
}