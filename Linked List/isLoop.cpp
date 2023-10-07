#include <iostream>
using namespace std;
#include <limits.h>
class Node
{
public:
  int data;
  Node *next;

};

void Display (Node * p)
{
while (p != nullptr)
    {
      cout << p->data << " -> " << flush;
      p = p->next;
    }
}
int isLoop(Node *first)
{
    Node *p,*q;
    p=q=first;
    do{
        p=p->next;
        q=q->next;
        if(q!=nullptr)
        q=q->next;
        else
        {
            q=nullptr;
            
        }
    }
        while(p && q);
    if(p==q)
    return true;
    else
    return false;
}
int main ()
{

  int A[] = { 3, 5, 5,7, 10,10, 15 };

  Node *head = new Node;

  Node *temp;
  Node *last;

  head->data = A[0];
  head->next = nullptr;
  last = head;

  // Create a Linked List
  for (int i = 1; i < sizeof (A) / sizeof (A[0]); i++)
    {

      // Create a temporary Node
      temp = new Node;

      // Populate temporary Node
      temp->data = A[i];
      temp->next = nullptr;

      // last's next is pointing to temp
      last->next = temp;
      last = temp;
    }
   Node *first1 = head;
 
cout<<isLoop(first1)<<endl;

  return 0;
}
