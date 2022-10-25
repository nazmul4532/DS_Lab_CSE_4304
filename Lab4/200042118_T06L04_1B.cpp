#include <bits/stdc++.h>
 
#define ll                  long long int 
#define PI                  3.14159265359
#define am_so_cool_you_know (ios::sync_with_stdio(0), cin.tie(0),cout.tie(0));
#define kaam_shesh          return 0;
#define nl                  "\n"
 
using namespace std;

 
int main()
{
    am_so_cool_you_know;

    queue<int> q;
    
    int n, k;
    cin >> n;
    cin >> k;
    int i;
    for (i = 1; i <= n;i++)
    {
        q.push(i);
    }
    i = 1;
    while (1)
    {
        if(i==k)
        {
            i = 0;
            q.pop();
        }
        else
        {
            q.push(q.front());
            q.pop();
        }
        i++;
        if(q.size()==1)
        {
            break;
        }
    }
    cout << q.front() << nl;

    kaam_shesh;
}
