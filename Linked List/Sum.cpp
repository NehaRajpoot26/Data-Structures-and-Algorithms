#include <iostream>
using namespace std;
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
// Each node contains some data and pointer to next node.
// Here we are calculating the sum of data.
int Add(Node *p)
{
    int sum=0;
    while(p!=nullptr)
    {
        sum+=p->data;
        p=p->next;
    }
    return sum;
}
// Recursive Approach
int RAdd(Node *p)
{
  if(p==0)
    {
        return 0;
    }
    else{
        return Add(p->next)+p->data;
    }
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
  Display (first);
  cout << endl;
 cout << Add(first) << endl;
 cout << RAdd(first) << endl;
}
