/**********************************************************************ARRAY DATA STRUCTURE********************************************************************/

#include <iostream>

#include <stdlib.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

/************************************OPERATIONS***********************************/

// FUNCTION FOR TRAVERSAL:

void Traversal(int Arr[], int size, int us)
{
    for (int i = 0; i < us; i++)
    {
        cout << Arr[i] << " ";
    }
}

/*-------------------------------------------------*/

// FUNCTION FOR INSERTION :

void Insert(int Arr[], int size, int value, int place)
{
    for (int i = size; i >= place; i--)
    {
        Arr[i] = Arr[i - 1];
    }
    Arr[place - 1] = value;
}

/*-------------------------------------------------*/

// FUNCTION FOR DELETATION :

void DeleteRecord(int Arr[], int size, int place)
{
    for (int i = place - 1; i <= size - 1; i++)
    {
        Arr[i] = Arr[i + 1];
    }
}

/*-------------------------------------------------*/

/*******************************END******************************************/

/************************************SEARCH***********************************/

// FUNCTION FOR LINEAR SEARCH(FOR UN SORTED ARRAY):

void LinearSearch(int Arr[], int size, int num)
{

    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] == num)
        {
            cout << num << " is found in " << i + 1 << " place." << endl;
            found++;
        }
    }
    if (found == 0)
    {
        cout << "The following number is not in the list." << endl;
    }
}

/*-------------------------------------------------*/

// FUNCTION FOR BINARY SEARCH(FOR SORTED ARRAY) :

void BinarySearch(int Arr[], int size, int num)
{

    int low = 0, high = size - 1;

    int mid, found = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (Arr[mid] == num)
        {
            cout << num << " is found in " << mid + 1 << " place." << endl;
            found++;
        }
        if (Arr[mid] < num)
        {
            low = mid + 1;
        }
        else
        {

            high = mid - 1;
        }
    }
    if (found == 0)
    {
        cout << "The following number is not in the list." << endl;
    }
}

/*-------------------------------------------------*/

/*******************************END******************************************/

// MAIN FUNCTION:

main()
{

    system("cls");

    // DECLARING ARRAY



     int ar2[20]={10,20,30,40,50};

    // FUNCTION CALLING.................

    // Traversal(ar2,20,6);

    // Insert(ar2, 20, 30, 3);

    // DeleteRecord(ar2, 20, 1);

    // LinearSearch(ar2, 5, 30);

    // BinarySearch(ar2, 5, 30);

    // Traversal(ar2,20,6);
}
