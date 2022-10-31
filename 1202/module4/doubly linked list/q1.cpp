#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
    node *previ;
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
            tmp->previ = NULL;
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
                tmp->previ = tail;
                tail = tmp;
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

    void enter_node()
    {
        int a, b;
        cout << "Enter the premade node value and to be inserted node value" << endl;
        cin >> a >> b;
        node *p = head;
        node *q = new node;
        if (p == NULL)
        {
            cout << "Linked list Not Found";
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
                q->previ = p;
                p->next = q;
                break;
            }
            else
            {
                p = p->next;
            }
            if (p == head)
            {
                break;
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
            if (p == head)
            {
                break;
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
                    p->next->previ = NULL;
                    break;
                }
                else
                {
                    prev->next = p->next;
                    p->previ = prev;
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

    void get_ad()
    {
        node *temp = head;
        if (head == NULL)
        {
            cout << "List empty" << endl;
        }
        // cout << "h";
        int i = 1;
        cout << "no prev        node        data next" << endl;
        while (temp != NULL)
        {
            // cout << " --> " << temp->data << " ";
            cout << i << " " << temp->previ << " " << temp << " " << temp->data << " " << temp->next << endl;
            temp = temp->next;
            i++;
        }
        cout << endl;
    }
};

void menu()
{
    cout << endl;
    cout << "******** Menu *****" << endl;
    cout << "Doubly Linked List" << endl;
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
            break;
        case 2:
            a.enter_node();
            break;
        case 3:
            a.delete_node();
            break;
        case 4:
            a.update_node();
            break;
        case 5:
            a.get_ad();
            break;
        case 6:
            break;
        }
    }
    return 0;
}
