#include <bits/stdc++.h>
 
#define ll                  long long int 
#define PI                  3.14159265359
#define am_so_cool_you_know (ios::sync_with_stdio(0), cin.tie(0),cout.tie(0));
#define kaam_shesh          return 0;
#define nl                  "\n"
 
using namespace std;
class Node {
public:
	int val;
	Node* left;
	Node* right;
	Node(int val)
		: val(val)
		, left(NULL)
		, right(NULL)
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
		prev->left = node;
	else
		prev->right = node;
}

int maxDepth(Node *node)
{
    if(node==NULL)
    {
        return 0;
    }
    else{
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);

        if(lDepth>rDepth)
        {
            return (lDepth + 1);
        }
        else
        {
            return (rDepth + 1);
        }
    }
}
 
int main()
{
    am_so_cool_you_know;
    Node* root = NULL;
    while(1)
    {
        int temp;
        cin >> temp;
        if (temp==-1)
        {
            break;
        }
        else
        {
            insert(root, temp);
        }
    }
    int answer = maxDepth(root);
    cout << answer-1<< nl;
    kaam_shesh;
}
