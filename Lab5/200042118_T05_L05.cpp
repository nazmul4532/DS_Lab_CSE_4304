#include <bits/stdc++.h>
 
#define ll                  long long int 
#define PI                  3.14159265359
#define am_so_cool_you_know (ios::sync_with_stdio(0), cin.tie(0),cout.tie(0));
#define kaam_shesh          return 0;
#define nl                  "\n"
#define SIZE 100

using namespace std;

int main()
{
    am_so_cool_you_know;
    priority_queue<int> pQueue;
    int temp = 0;
    while(1)
    {
        cin >> temp;
        if(temp == -1)
        {
            break;
        }
        else
            pQueue.push(temp);
    }
    int temp1=0;
    int temp2=0;
    while (pQueue.size()>1)
    {
        temp1 = pQueue.top();
        pQueue.pop();
        temp2 = pQueue.top();
        pQueue.pop();

        if(temp1!=temp2)
        {
            temp1 = temp1 - temp2;
            pQueue.push(temp1);
        }
    }
    if(pQueue.empty())
    {
        cout << 0 << nl;
        kaam_shesh;
    }
    cout << pQueue.top() << nl;
    kaam_shesh;
}
