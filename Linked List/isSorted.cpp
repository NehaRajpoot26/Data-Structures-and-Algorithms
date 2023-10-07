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
int isSorted(Node *p)
{
    int x=INT_MIN;
    while(p!=nullptr)
    {
        if (p->data < x)
        return 0;
    
        else
        {
        x=p->data;
        p=p->next;
        }
    }
    return 1;
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
  Node *first = head;
cout<<isSorted(first)<<endl;
return 0;
}
