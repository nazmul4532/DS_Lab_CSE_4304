#include <bits/stdc++.h>
 
#define ll                  long long int 
#define PI                  3.14159265359
#define am_so_cool_you_know (ios::sync_with_stdio(0), cin.tie(0),cout.tie(0));
#define kaam_shesh          return 0;
#define nl                  "\n"
 
using namespace std;

struct node
{
    int val;
    node * next;
};

class Singly_linked_list{
public:
    node *head, *tail;

    Singly_linked_list()
    {
        head = nullptr;
        tail = nullptr;
    }

    void PushBack(int n)
    {
        node *temp = new node();
        temp->val = n;
        temp->next = NULL;
        if(head==NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            node *add = head;
            while(add->next != NULL)
            {
                add = add->next;
            }
            add->next = temp;
        }
    }

    void display()
    {
        node *cur = head;

        while(cur != nullptr)
        {
            cout << cur->val << " ";
            cur = cur->next;
        }
        cout<<endl;
    }

    void Reverse()
    {

        node* prev = nullptr;
        node* curr = head;
        while (curr) {
            node* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        tail = head;
        head = prev;

    }
    void Popback()
    {
        node *remove = head;
        while(remove->next->next!=NULL)
        {
            remove = remove->next;
        }
        remove->next = NULL;
    }
    void displayHalf()
    {
        node *slow, *fast;
        slow = head;
        fast = head;
        bool flag = false;
        while (fast->next->next!=NULL)
        {
            
            fast = fast->next->next;
            if(fast->next==NULL)
            {
                break;
            }
            slow = slow->next;
        }
        // 1 2 3 4 5
            while (slow->next != NULL)
            {
                slow = slow->next;
                cout << slow->val << " ";
            }
        cout << nl;
    }
};







 int main()
{
    am_so_cool_you_know;
    
    Singly_linked_list a;
    int in;
    cout << "Number of inputs: " << nl;
    cin >> in;
    int i;
    for (i = 0; i < in;i++)
    {
        int temp;
        cin >> temp;
        a.PushBack(temp);
    }
    a.display();
    a.displayHalf();

    kaam_shesh;
}

