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
        cout << "Deleting Circular Linked-List" << endl;
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
                tail->next = head;
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
        for (int i = 0; i < n; i++)
        {
            // cout << "--> " << temp->data << " ";
            cout << temp->data << " ";
            // cout << i << " " << temp << " " << temp->data << " " << temp->next << endl;
            temp = temp->next;
            if (temp == NULL)
            {
                temp = head;
            }
        }
        // (temp!= NULL)
        // {
        // }
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
// void get_ad()
// {

    
// }
int main()
{
    linked_list test;
    test.create_node();
    test.Display();
}