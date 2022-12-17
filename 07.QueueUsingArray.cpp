/**********************************************************************QUEUE DATA STRUCTURE USING ARRAY********************************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Queue
{
    int size;
    int front;
    int back;
    int *arr;
};

// FUNCTION FOR CHECKING IF THE QUEUE IS EMPTY :

int IsEmpty(struct Queue queue)
{

  if ( queue.back == -1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

/*-------------------------------------------------*/

// FUNCTION FOR CHECKING IF THE QUEUE IS FULL :

int IsFull(struct Queue queue)
{

  if ( queue.back == queue.size-1)
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






// FUNCTION FOR TRAVERSING THE QUEUE :

void Traversal(struct Queue queue)
{
 cout<<""<<endl;
  if (queue.back == -1)
  {
    cout<<"Queue is Empty !!"<<endl;
  }
  
 else
  {
    for (int i =0; i <= queue.back; i++)
    {
      cout<<queue.arr[i]<<" | ";
    }
    
  }

  cout<<"\n\n\n"<<endl;
}

/*-------------------------------------------------*/

// FUNCTION FOR GETING VALUE OF FIRST ELEMENT OF THE QUEUE :

void FirstValue(struct Queue queue)
{

  if (queue.back == -1)
  {
    cout<<"Queue is Empty !!"<<endl;
  }
  
 else
  {
      cout<<"Fist Element Value = "<<queue.arr[0]<<endl;
    }
    
}

/*-------------------------------------------------*/

// FUNCTION FOR GETING VALUE OF LAST ELEMENT OF THE QUEUE :

void LastValue(struct Queue queue)
{
 if (queue.back == -1)
  {
    cout<<"Queue is Empty !!"<<endl;
  }
  
 else
  {
 
      cout<<"Last Element Value = "<<queue.arr[queue.back]<<endl;
    }
}
 

/*-------------------------------------------------*/

// FUNCTION FOR PEEKING THE ELEMENT IN THE QUEUE :

void Peek(struct Queue queue,int position)
{

  if (position > queue.back+1)
{
    cout<<"Invalid Position Given By The User!!\n"<<endl;
}
else{
   
  cout<<"Array Index : "<<position-1<<"  Queue Postion : "<<position<<"  Value : "<<queue.arr[position-1]<<endl;
 

}

}

/*-------------------------------------------------*/

// FUNCTION FOR PUSHING THE ELEMENT IN THE QUEUE :

void Enqueue(struct Queue queue, int value)
{

  if (IsFull(queue))
{
    cout<<"Queue is full!!\n"<<endl;
}
else{

  queue.back++;
  queue.arr[queue.back]=value;
  
cout<<value<<" is Pushed in the Queue!!\n\n"<<endl;
Traversal(queue);
}

}

/*-------------------------------------------------*/

// FUNCTION FOR REMOVING THE ELEMENT IN THE QUEUE :

void Dequeue(struct Queue queue)
{

  if (IsEmpty(queue))
{
    cout<<"Queue is Empty!!\n"<<endl;
}
else{
   for (int i = 0; i < queue.back; i++)
   {
    queue.arr[i] = queue.arr[i+1];
   }
   
  queue.back--;
 
  
cout<<"Element Removed!!\n\n"<<endl;
Traversal(queue);
}

}

/*-------------------------------------------------*/
int main()
{
system("cls");


// CREATING QUEUE!!

struct Queue q;

q.size = 5;
q.front = -1;
q.back = -1;
q.arr = (int *)malloc(q.size * sizeof(int));

//PUSHING ELEMENT MANUALY :

q.arr[0] = 10;
q.back++;
q.arr[1] = 15;
q.back++;
q.arr[2] = 20;
q.back++;
q.arr[3] = 25;
q.back++;
q.arr[4] = 30;
q.back++;


/*

//CHECKING THE "IsEmpty" FUCNTION :

if (IsEmpty(q))
{
    cout<<"Queue is empty!!\n\n"<<endl;
}
else{
cout<<"Queue is not empty!!\n\n"<<endl;

}


//CHECKING THE "IsFull" FUCNTION :

if (IsFull(q))
{
    cout<<"Queue is full!!\n\n"<<endl;
}
else{
cout<<"Queue is not full!!\n\n"<<endl;

}

*/

// GETTING THE VALUE OF FIRST AND LAST ELEMENT:

//FirstValue(q);

//LastValue(q);


// PEEK FUNCTION :

//Peek(q,4);

// ENQUEUE FUNCION 

//Enqueue(q,30);

// DEQUEUE FUNCION 

//Dequeue(q);

//QUEUE TRAVERSAL:

Traversal(q);


}