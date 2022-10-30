#include <bits/stdc++.h>

#define ll long long int
#define PI 3.14159265359
#define am_so_cool_you_know (ios::sync_with_stdio(0), cin.tie(0), cout.tie(0));
#define kaam_shesh return 0;
#define nl "\n"
#define SIZE 100

using namespace std;

class Node
{
public:
    int val;
    int sub_tree;
    Node *left;
    Node *right;
    Node(int val)
        : val(val), left(NULL), right(NULL)
    {
    }
};
int LeftSubtreeSize(Node *root)
{
    int leftNodeCount=0;
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        LeftSubtreeSize(root->left);
        leftNodeCount++;
        LeftSubtreeSize(root->right);
    }
    return leftNodeCount;
}
int inorder(Node* root, int data)
{
	Node* temp = root;
	stack<Node*> st;
    int count = 0;
    while (temp != NULL || !st.empty())
    {
        if (temp != NULL) {
			st.push(temp);
			temp = temp->left;
		}
		else {
			temp = st.top();
			st.pop();
            if(temp->val==data)
            {
                break;
            }
            count++;
            temp = temp->right;
		}
    }
    return count;
}
void insert(Node *&root, int key)
{
    Node *node = new Node(key);
    if (!root)
    {
        root = node;
        return;
    }
    Node *prev = NULL;
    Node *temp = root;
    while (temp)
    {
        if (temp->val > key)
        {
            prev = temp;
            temp = temp->left;
        }
        else if (temp->val < key)
        {
            prev = temp;
            temp = temp->right;
        }
    }
    if (prev->val > key)
        prev->left = node;
    else
        prev->right = node;
}

struct Node *search(Node *root, int key){
    if(root==NULL||root->val == key)
    {
        return root;
    }
    if(root->val<key)
    {
        return search(root->right, key);
    }
    return search(root->left, key);
}


int main()
{
    am_so_cool_you_know;
    Node *root = NULL;
    while (1)
    {
        int temp;
        cin >> temp;
        if (temp == -1)
        {
            break;
        }
        else
        {
            insert(root, temp);
        }
    }
    int tc;
    cin >> tc;
    int leftNodes = LeftSubtreeSize(root->left);
    while (tc--)
    {
        int x;
        cin >> x;
        if(x<=root->val)
        {
            cout << inorder(root->left, x) << nl;
        }
        else
        {
            cout << inorder(root->left, x) + leftNodes + 1 << nl;
        }
    }
    kaam_shesh;
}
