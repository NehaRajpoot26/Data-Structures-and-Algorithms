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
// Recursive Display of a Linked List
void RDisplay (Node * p)
{
if (p != nullptr)
    {
      RDisplay (p->next);
      cout << p->data << " -> ";
    }
}
int main ()
{
    int A[] = { 3, 5, 7, 10, 15 };
    Node *head = new Node;
    Node *temp;Node *last;
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
  RDisplay (first);
}
