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
    
    queue<int> qS, qF;

    int in;
    cin >> in;
    int i;
    for (i = 0; i < in;i++)
    {
        int temp;
        cin >> temp;
        qS.push(temp);
    }
    for (i = 0; i < in;i++)
    {
        int temp;
        cin >> temp;
        qF.push(temp);
    }
    long long int x = in * in;
    while (x--)
    {
        if(qS.front()==qF.front())
        {
            qS.pop();
            qF.pop();
        }
        else
        {
            qS.push(qS.front());
            qS.pop();
        }
        if(qF.empty())
        {
            break;
        }
    }
    cout << qS.size() << nl;

    kaam_shesh;
}
