#include <bits/stdc++.h>
 
#define ll                  long long int 
#define PI                  3.14159265359
#define am_so_cool_you_know (ios::sync_with_stdio(0), cin.tie(0),cout.tie(0));
#define kaam_shesh          return 0;
#define nl                  "\n"
 
using namespace std;

queue<int> temp;

int ping(int t)
{ 
    temp.push(t);

    while (temp.front()<t-3000)
    {
        temp.pop();
    }

    return temp.size();
}

int main()
{
    am_so_cool_you_know;

    cout << ping(1) << nl;
    cout << ping(2) << nl;
    cout << ping(3) << nl;
    cout << ping(4) << nl;
    cout << ping(3001) << nl;
    cout << ping(3002) << nl;
    cout << ping(3003) << nl;
    cout << ping(6003) << nl;
    cout << ping(10003) << nl;

    kaam_shesh;
}
