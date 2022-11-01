#include <bits/stdc++.h>
 
#define ll                  long long int 
#define PI                  3.14159265359
#define am_so_cool_you_know (ios::sync_with_stdio(0), cin.tie(0),cout.tie(0));
#define kaam_shesh          return 0;
#define nl                  "\n"
 
using namespace std;
// queue<int> bstQueue;
queue<int> checkQueue;
bool greenFlag = true;
class Node
{
public:
	int val;
	Node* left;
	Node* right;
    Node* parent;
    Node(int val)
        : val(val), left(NULL), right(NULL)
    {
	}
};

void insert(Node*& root, int key)
{
	Node* node = new Node(key);
	if (!root) {
		root = node;
		return;
	}
	Node* prev = NULL;
	Node* temp = root;
	while (temp) {
		if (temp->val > key) {
			prev = temp;
			temp = temp->left;
		}
		else if (temp->val < key) {
			prev = temp;
			temp = temp->right;
		}
	}
	if (prev->val > key)
		{
            prev->left = node;
            node->parent = prev;
        }
	else
		{
            prev->right = node;
            node->parent = prev;
        }        
}

void preorderCheck(Node* root)
{
    Node* temp = root;
    stack<Node*> st;
	while ((temp != NULL || !st.empty()) && greenFlag==true) {
		if (temp != NULL) {
			st.push(temp);
            // bstQueue.push(temp->val);
            if(checkQueue.front()!= temp->val)
            {
                greenFlag = false;
            }
            else
            {
                checkQueue.pop();
            }
            // cout << temp->val << " ";
            temp = temp->left;
		}
		else {
			temp = st.top();
			st.pop();
			temp = temp->right;
		}
	}
}

 
int main()
{
    am_so_cool_you_know;
    Node* root = NULL;
    while (1)
    {
        int temp;
        cin >> temp;
        if(temp<=-1)
        {
            break;
        }
        else
        {
            insert(root,temp);
            checkQueue.push(temp);
        }
    }
    preorderCheck(root);
    // int n = checkQueue.size();
    // int flag = true;
    // while (n--)
    // {
    //     if(checkQueue.front()==bstQueue.front())
    //     {
    //         checkQueue.pop();
    //         bstQueue.pop();
    //     }
    //     else
    //     {
    //         flag = false;
    //         break;
    //     }
    // }
    if (greenFlag == true)
    {
        cout << "Valid Preorder Sequence" << nl;
    }
    else
    {
        cout << "Invalid Preorder Sequence" << nl;
    }
        kaam_shesh;
}
