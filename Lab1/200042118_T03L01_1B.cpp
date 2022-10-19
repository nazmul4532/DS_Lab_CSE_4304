#include <bits/stdc++.h>
 
#define ll                  long long int 
#define PI                  3.14159265359
#define am_so_cool_you_know (ios::sync_with_stdio(0), cin.tie(0),cout.tie(0));
#define kaam_shesh          return 0;
#define nl                  "\n"
 
using namespace std;

int iterativeBinarySearch(int arr[], int n ,int size)
{
    int start = 0;
    int end = size;
    while(1)
    {
        int middle = (start + end) / 2;
        if(arr[middle]==n)
        {
            return middle;
        }
        if (n>arr[middle])
        {
            start = middle+1;
        }
        else 
        {
            end = middle-1;
        }
        if(start>end)
        {
            return -1;
        }
    }
}
int recursiveBinarySearch (int arr[], int n,int strt, int size)
{
    int start = strt;
    int end = size;
    int middle = (start + end) / 2;
    if(start>end)
    {
        return -1;
    }
    if(n==arr[middle])
    {
        return middle;
    }
    else if (n>arr[middle])
    {
        return recursiveBinarySearch(arr, n, middle + 1, end);
    }
    else
    {
        return recursiveBinarySearch(arr, n, start, middle - 1);
    }
}

int main()
{
    am_so_cool_you_know;

    int arr[10000]={0};
    int temp=0;
    int max = 0;
    int size=0;
    while (1)
    {
        cin >> temp;
        if(temp>=0)
        {
            arr[size] = temp;
        }
        else if(temp <0)
        {
            break;
        }
        size++;
    }
    int n;
    cin >> n;
    int answerIterative = iterativeBinarySearch(arr, n, size);
    cout << answerIterative << nl;
    int answerRecursive = recursiveBinarySearch(arr, n, 0, size);
    cout << answerRecursive << nl;

    kaam_shesh;
}
