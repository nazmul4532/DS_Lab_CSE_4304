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
    
    while(1)
    {
        int temp;
        cin >> temp;
        if(temp == -1)
        {
            break;
        }
        q.push(temp);
    }
    int k;
    cin >> k;
    int ans = 0;
    int value;
    for (int i = 0; i < q.size(); i++)
    {
        if(i==k)
        {
            value = q.front();
        }
        q.push(q.front());
        q.pop();
        
    }
    for (int i = 0; i < q.size();i++)
    {
        if(q.front()<value)
        {
            ans = ans + q.front();
        }
        else if(q.front()>value && i<=k)
        {
            ans = ans + value;
        }
        else if(q.front()==value && i<=k)
        {
            ans = ans + value;
        }
        else
        {
            ans = ans + value - 1;
        }

        q.push(q.front());
        q.pop();  
    }

    cout << ans << nl;

    kaam_shesh;
}
