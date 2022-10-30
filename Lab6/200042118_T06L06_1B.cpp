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
    Node *left;
    Node *right;
    Node(int val)
        : val(val), left(NULL), right(NULL)
    {
    }
};

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

int maxElementPath(Node*q, int x)
{
    Node *node = q;
    int mx = -1;
    while(node->val !=x)
    {
        if(node->val>x)
        {
            mx = max(mx, node->val);
            node = node->left;
        }
        else
        {
            mx = max(mx, node->val);
            node = node->right;
        }
    }
    return max(mx, x);
}
int maximumElement(struct Node *root, int x, int y)
{
    Node *node = root;
    while((x<node->val && y<node->val)||(x>node->val && y>node->val))
    {
        if(x<node->val && y<node->val)
        {
            node = node->left;
        }
        else if(x>node->val && y>node->val)
        {
            node = node->right;
        }
    }
    return maxElementPath(node,y);
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
    while (tc--)
    {
        int x, y;
        cin >> x >> y;
        cout << maximumElement(root, x, y);
        cout << nl;
    }
    kaam_shesh;
}
