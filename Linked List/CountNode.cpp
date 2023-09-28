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
//Function for calculating the number of nodes present in Linked List.
int count (Node * p)
{
  int c = 0;
  while (p != nullptr)
    {
      c++;
      p = p->next;
    }
  return c;
}
// Recursive method for computing the number of nodes.
int Rcount(Node *p)
{
   if(p==0)return 0;
   else
   return Rcount(p->next)+1;
  
}
// Another Recursive method for computing the number of nodes.
int R1count(Node *p)
{
   if(p!=nullptr)
   return 1+R1count(p->next);
   else
   return 0;
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
 
  cout << count (first) << endl;
  cout << Rcount (first) << endl;
 cout << R1count (first) << endl;
}
