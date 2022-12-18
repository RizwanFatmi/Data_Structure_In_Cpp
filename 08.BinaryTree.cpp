/**********************************************************************BINARY TREE ********************************************************************/


#include <iostream>
using namespace std;

// CREATING BINARY TREE :

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
/******************************************************/

// FUNCTION FOR PRE-ORDER TRAVERSAL :

void PreOrder(struct Node *root)
{

if(root!=NULL){

    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}
}

/******************************************************/


// FUNCTION FOR POST-ORDER TRAVERSAL :

void PostOrder(struct Node *root)
{

if(root!=NULL){

    
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}
}

/******************************************************/


// FUNCTION FOR IN-ORDER TRAVERSAL :

void InOrder(struct Node *root)
{

if(root!=NULL){

    
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
    
}
}

/******************************************************/



// FUNCTION FOR SEARCH :

void Search(struct Node *root, int data)
{
    
    if(root!=NULL){

    if(root->data == data){

    cout<<data<<" found!"<<endl;
    }

    Search(root->left,data);
    Search(root->right,data);
    }
}

/******************************************************/

 int main()
{
system("cls");

    // ALLOCATING DINAMIC MEMORY FOR NODES:

    struct Node *n1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n4 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n5 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n6 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n7 = (struct Node *)malloc(sizeof(struct Node));


    // CONTECTING THE NODES AND ASSIGNING THE DATA :


    n1 -> data = 1;
    n1 -> left = n2;
    n1 -> right = n4;

    n2-> data = 3;
    n2-> left = n3;
    n2-> right = NULL;

    n3-> data = 16;
    n3-> left = NULL;
    n3-> right = NULL;

    n4-> data = 4;
    n4-> left = n5;
    n4-> right = n7;

    n5-> data = 5;
    n5-> left = NULL;
    n5-> right = n6;

    n6-> data = 11;
    n6-> left = NULL;
    n6-> right = NULL;

    n7-> data = 15;
    n7-> left = NULL;
    n7-> right = NULL;




 PreOrder(n1);
cout<<endl;
PostOrder(n1); 
cout<<endl;
InOrder(n1);
cout<<endl;

Search(n1,15);


}