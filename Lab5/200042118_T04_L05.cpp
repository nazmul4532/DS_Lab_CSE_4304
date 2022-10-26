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
    priority_queue<pair<int, bool>, vector<pair<int, bool> > , greater <pair<int, bool> > >pQueue;
    int tc;
    cin >> tc;
    while(tc--)
    {
        int start;
        int end;
        cin >> start >> end;
        pQueue.push(make_pair(start,true));
        pQueue.push(make_pair(end,false));
        
    }
    int checkRoom = 0;
    int maxRoom = 0;
    while(!pQueue.empty())
    {
        pair<int, bool> top = pQueue.top();
        if(top.second)
        {
            checkRoom++;
        }
        else if(!top.second)
        {
            checkRoom--;
        }
        maxRoom = max(maxRoom, checkRoom);
        pQueue.pop();
    }
    // while(1)
    // {

    //     pair<int, bool> top = pQueue.top();
    //     cout << top.first << " " << top.second << nl;
    //     pQueue.pop();
    //     if(pQueue.empty())
    //     {
    //         break;
    //     }
    // }
    cout << maxRoom << nl;
    kaam_shesh;
}
