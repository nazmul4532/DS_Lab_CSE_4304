#include <bits/stdc++.h>
 
#define ll                  long long int 
#define PI                  3.14159265359
#define am_so_cool_you_know (ios::sync_with_stdio(0), cin.tie(0),cout.tie(0));
#define kaam_shesh          return 0;
#define nl                  "\n"
 
using namespace std;

//global queue... anything pushed into them will be saved but anything popped will not
queue<int> q1,q2;
// Push into the Stack
void push_s(int x) {
    //pushing the value into empty q2 first, so this is the first value in queue but also the last value in stack
    q2.push(x);
    // pushing all the values stored in q1 into q2
    while (!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }
    //setting q2 as empty and the stacked version of q2 in q1
    queue<int> q = q1;
        q1 = q2;
        q2 = q;
}
// Removes the element on top of the stack.
void pop_s() {
    //won't try to pop empty queue
    if (q1.empty())
            return;
    //pops the first value in q1, ie the top of the stack
        q1.pop();
}
// Get the top element.
int top_s() {
    //checks if the queue ie stack is empty
    if (q1.empty())
            return -1;
    //returns the front of q1, ie the top of stack
        return q1.front();
    
}
// Return whether the stack is empty.
bool empty_s() {
    //checks size if 0 its empty.. else its not
    if(q1.size()==0)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    am_so_cool_you_know;

    push_s(10);
    cout << top_s() << endl;
    push_s(20);
    cout << top_s() << endl;
    pop_s();
    cout << top_s() << endl;
    push_s(100);
    cout << top_s() << endl;
    cout << empty_s() << endl;
    pop_s();
    pop_s();
    cout << empty_s() << endl;
    
 
    kaam_shesh;
}
