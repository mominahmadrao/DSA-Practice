#include <iostream>
using namespace std;

class Node 
{
    public:
    int data ;
    Node *prev ;
    Node *next ;

    Node ( int value )
    {
       data = value ;
       next = prev = NULL;
    }

};

int main ( )
{
    Node *head = NULL;
    Node *tail = NULL;

    int arr [ ] = {1,2,3,4,5};

    for  ( int i = 0 ; i < 5 ; i++)
    {

     if ( head == NULL )
     {
        head = new Node (arr[i] );
        tail = head ;
     }
     else
     {
       Node *temp = new Node (arr[i]);
       tail->next = temp ;
       temp->prev = tail;
       tail = temp ; 

     }

    }
    
    Node *p = head ;
    while ( p != NULL )
    {
        cout << p->data << " " ;
        p = p->next ;
    }
        cout << endl ;

    return 0 ;
}
