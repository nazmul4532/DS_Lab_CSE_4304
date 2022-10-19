#include <bits/stdc++.h>
 
#define ll                  long long int 
#define PI                  3.14159265359
#define am_so_cool_you_know (ios::sync_with_stdio(0), cin.tie(0),cout.tie(0));
#define kaam_shesh          return 0;
#define nl                  "\n"
 
using namespace std;

int factorial (int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n==1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    am_so_cool_you_know;
    int n;
    cin >> n;
    int answer = factorial(n);
    cout << answer << nl;
    kaam_shesh;
}
