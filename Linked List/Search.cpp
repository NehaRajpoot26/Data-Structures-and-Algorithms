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
Node *search(Node *p,int key)
{
    while(p!=nullptr){
    if(key==p->data)
    return p;
    p=p->next;
    }
    // key is not found
    return nullptr;
    
}
Node *Rsearch(Node *p,int key)
{
  if(p==nullptr)
  return nullptr;
  if(key==p->data)
    return p;
    
    return Rsearch(p->next,key);
    
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
Node *p=search(first,5);
cout <<p<<endl;
Node *p1=Rsearch(first,15);
cout <<p1<<endl;
}
