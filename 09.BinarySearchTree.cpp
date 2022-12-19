/**********************************************************************BINARY SEARCH TREE ********************************************************************/

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

    if (root != NULL)
    {

        cout << root->data << " ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

/******************************************************/

// FUNCTION FOR POST-ORDER TRAVERSAL :

void PostOrder(struct Node *root)
{

    if (root != NULL)
    {

        PostOrder(root->left);
        PostOrder(root->right);
        cout << root->data << " ";
    }
}

/******************************************************/

// FUNCTION FOR IN-ORDER TRAVERSAL :

void InOrder(struct Node *root)
{

    if (root != NULL)
    {

        InOrder(root->left);
        cout << root->data << " ";
        InOrder(root->right);
    }
}

/******************************************************/

// FUNCTION FOR SEARCH :

void Search(struct Node *root, int data)
{

    if (root != NULL)
    {

        if (root->data == data)
        {

            cout << data << " found!" << endl;
        }

        else if (root->data < data)
        {

            Search(root->right, data);
        }

        else if (root->data > data)
        {
            Search(root->left, data);
        }
    }
}

/******************************************************/

// FUNCTION FOR INSERTION :

void Insert(struct Node *root, int data)
{
    struct Node *prev = NULL;

    while (root != NULL)
    {

        prev = root;

        if (root->data == data)
        {

            cout << data << " is alredy available in tree." << endl;
            return;
        }

        else if (root->data > data)
        {

            root = root->left;
        }

        else
        {
            root = root->right;
        }
    }
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));

    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;

    if (data < prev->data)
    {

        prev->left = newnode;
    }

    else
    {

        prev->right = newnode;
    }
}

/******************************************************/

struct Node *inOrderPredecessor(struct Node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

// FUNCTION FOR DELETION :

struct Node *deleteNode(struct Node *root, int data)
{
    // base case
    if (root == NULL)
    {
        return root;
    }
    // If the key to be deleted is
    // smaller than the root's
    // key, then it lies in left subtree
    if (data < root->data)
    {
        root->left = deleteNode(root->left, data);
    }
    // If the key to be deleted is
    // greater than the root's
    // key, then it lies in right subtree
    else if (data > root->data)
    {
        root->right = deleteNode(root->right, data);
    }
    // if key is same as root's key, then This is the node
    // to be deleted
    else
    {
        // node has no child
        if (root->left == NULL and root->right == NULL)
        {
            return NULL;
        }

        // node with only one child or no child
        else if (root->left == NULL)
        {
            struct Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct Node *temp = root->left;
            free(root);
            return temp;
        }
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

    n1->data = 3;
    n1->left = n2;
    n1->right = n4;

    n2->data = 2;
    n2->left = n3;
    n2->right = NULL;

    n3->data = 1;
    n3->left = NULL;
    n3->right = NULL;

    n4->data = 5;
    n4->left = NULL;
    n4->right = n5;

    n5->data = 7;
    n5->left = n6;
    n5->right = n7;

    n6->data = 6;
    n6->left = NULL;
    n6->right = NULL;

    n7->data = 8;
    n7->left = NULL;
    n7->right = NULL;

    Insert(n1, 4);

    deleteNode(n1, 5);

    PreOrder(n1);
    cout << endl;
    PostOrder(n1);
    cout << endl;
    InOrder(n1);
    cout << endl;

    Search(n1, 4);
}