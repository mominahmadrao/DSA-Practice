#include <iostream>
using namespace std ;

class Node 
{
    public :
    int data ;
    Node *next ;
     
    Node(int value )
    {
        data = value ;
        next = NULL;
    }
    
};

Node *insertAtEnd( Node *head , int arr [] , int size )
{
     Node * last =  NULL ;
     for ( int  i = 0 ; i < size ; i++ )
     {
        if ( head == NULL )
        {
            head = new Node (arr[i]);
            head->next = head ;
            last = head ;
        }
        else
        {
            Node * temp = new Node (arr[i]);
            last->next = temp ;
            last = last->next ;
            last->next = head ;            
        }
     }
           return head ;
}
int main ( )
{
   int arr [5] = {0,2,4,6,8};
   Node * head = NULL; 
   head = insertAtEnd(head,arr,5);

   Node * q = head ;

   while ( q->next != head )
   {
       cout << q->data << " ";
       q = q->next ;
   }  
      cout << q->data ;
      cout << endl ;
}