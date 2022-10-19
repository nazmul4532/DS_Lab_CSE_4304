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
    int arr[1000000]={0};
    int count[1000000]={0};
    int temp=0;
    int max = 0;
    while (1)
    {
        cin >> temp;
        if(temp > 0)
        {
            arr[temp] = temp;
            count[temp]++;
            if(temp>max)
            {
                max = temp;
            }
        }
        else if(temp<=0)
        {
            break;
        }
    }

    int i = 0;
    int j = 0;
    int tempCOUNT=0;
    for (i = 0; i < max; i++)
    {
        for (j = 0; j < max;j++)
        {
            if (count[j] < count[j + 1])
                {
                    swap(count[j], count[j + 1]);
                    swap(arr[j], arr[j + 1]);
                }
        }
    }
    for (i = 0; i < max+1; i++)
    {
        if( count[i]!=0 && count[i]>1)
        {
            cout << arr[i] << " occurs: " << count[i] << " times" << nl;
        }
        else if( count[i]!=0 && count[i]==1)
        {
            cout << arr[i] << " occurs: " << count[i] << " time" << nl;
        }
    }
    kaam_shesh;
}
