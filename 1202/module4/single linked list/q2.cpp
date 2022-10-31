#include <iostream>

using namespace std;

class node
{
public:
  int data;
  node *next;
};

class linked_list
{
private:
  node *head, *tail;
  int n;

public:
  linked_list()
  {
    head = NULL;
    tail = NULL;
  }

  void create_node()
  {
    int x;
    cout << "How many nodes you need?" << endl;
    cin >> n;
    cout << "ENter your node values" << endl;
    for (int i = 1; i <= n; i++)
    {
      cin >> x;
      node *tmp = new node;
      tmp->data = x;
      tmp->next = NULL;
      if (head == NULL)
      {
        head = tmp;
      }
      if (tail == NULL)
      {
        tail = tmp;
      }
      else
      {
        tail->next = tmp;
        tail = tmp;
      }
    }
  }
  void enter_node()
  {
    int a, b;
    cout << "Enter the premade node value and to be inserted node value" << endl;
    cin >> a >> b;
    node *p = head;
    node *q = new node;
    if (p == NULL)
    {
      cout << "Not Found";
    }
    while (p != NULL)
    {
      if (p->data == a)
      {
        // if (p == head)
        // {
        //   q->data = b;
        //   head = q;
        //   q->next =p;
        //   break;
        // }
        // else
        // {
        q->data = b;
        q->next = p->next;
        p->next = q;
        break;
      }
      else
      {
        p = p->next;
      }
    }
  }

  void delete_node()
  {
    int a, b;
    cout << "Enter the node value to be deleted" << endl;
    cin >> b;
    node *p = head;
    node *prev = NULL;
    if (p == NULL)
    {
      cout << "Not Found";
    }
    while (p != NULL)
    {
      if (p->data == b)
      {
        if (p == head)
        {
          head = p->next;
          break;
        }
        else
        {
          prev->next = p->next;
          break;
        }
      }
      else
      {
        prev = p;
        p = p->next;
      }
    }
  }
  void update_node()
  {
    int a, b;
    cout << "Enter the node value to be updated" << endl;
    cin >> b >> a;
    node *p = head;
    // node *prev = NULL;
    if (p == NULL)
    {
      cout << "Not Found";
    }
    while (p != NULL)
    {
      if (p->data == b)
      {
        p->data = a;
        break;
      }
      else
      {
        p = p->next;
      }
    }
  }

  void Display()
  {
    node *temp = head;
    if (head == NULL)
    {
      cout << "List empty" << endl;
    }
    // cout << "h";
    while (temp != NULL)
    {
      // cout << "--> " << temp->data << " ";
      cout << temp->data << " ";
      // cout << i << " " << temp << " " << temp->data << " " << temp->next << endl;
      temp = temp->next;
      // i++;
    }
    cout << endl;
    // temp = head;
    // int i = 1;
    // cout << "no node        data next" << endl;
    // while (temp != NULL)
    // {
    //   // cout << " --> " << temp->data << " ";
    //   cout << i << " " << temp << " " << temp->data << " " << temp->next << endl;
    //   temp = temp->next;
    //   i++;
    // }
    // cout << endl;
  }
};
void menu()
{
  cout << endl;
  cout << "******** Menu *****" << endl;
  cout << "1. Create \n2. Insert \n3. Delete \n4.Update \n5. Display \n6. Exit" << endl;
  cout << "Enter your option: " << endl;
}
int main()
{
  linked_list a;
  int m;
  while (m != 6)
  {
    menu();
    cin >> m;
    switch (m)
    {
    case 1:
      a.create_node();
      a.Display();
      break;
    case 2:
      a.enter_node();
      a.Display();
      break;
    case 3:
      a.delete_node();
      a.Display();
      break;
    case 4:
      a.update_node();
      a.Display();
      break;
    case 5:
      a.Display();
      break;
    case 6:
      break;
    }
  }
  return 0;
}