#include <bits/stdc++.h>
 
#define ll                  long long int 
#define PI                  3.14159265359
#define am_so_cool_you_know (ios::sync_with_stdio(0), cin.tie(0),cout.tie(0));
#define kaam_shesh          return 0;
#define nl                  "\n"
 
using namespace std;

 

class Dynamic_Array
{
public:
    int Size;
    int Capacity;
    int *arr;
    Dynamic_Array()
    {
        Size = 0;
        Capacity = 1;
        arr = new int[Capacity];
    }
    int Get(int i)
    {

        if ((i < 0 ) or (i >= Size))
        {
            cout << "Index out of Range" << endl;
            return -1;
        }
        return arr[i];

    }
    void Set(int i,int val)
    {
        if ((i < 0 ) or (i >= Size))
        {
            cout << " Index out of Range" << endl;
            return;
        }
        arr[i] = val;

    }
    void Reverse()
    {
        int *n_arr = new int [Capacity];
        int k = Size-1;
        for (int i = 0; i < Size;i++)
        {
            n_arr[i] = arr[k];
            k--;
        }
        delete (arr);
        arr = n_arr;
    }
    void ReverseEfficient()
    {
        int k = Size - 1;
        for (int i = 0; i < Size / 2; i++)
        {
            swap(arr[i], arr[k]);
            k--;
        }
    }
    void PushBack(int val)
    {
        if(Size == Capacity)
        {
            int *n_arr = new int[Capacity * 2];
            for (int i = 0; i < Size;i++)
            {
                n_arr[i] = arr[i];
            }
            delete (arr);
            arr = n_arr;
            Capacity = 2 * Capacity;
        }
        arr[Size] = val;
        Size++;
    }
    int Get_Size()
    {
        return Size;
    }
    int Get_Capacity()
    {
        return Capacity;
    }
};

int main()
{
    am_so_cool_you_know;
    
    Dynamic_Array arr;
    for(int i =0;i<16;i++)
    {
        arr.PushBack(100 + i);
    }

    for(int i = 0; i < arr.Get_Size();i++)
    {
        cout << arr.Get(i)<<" ";
    }
    cout << nl;
    arr.PushBack(6969);
    for(int i = 0; i < arr.Get_Size();i++)
    {
        cout << arr.Get(i)<<" ";
    }
    cout << nl;
    arr.Reverse();
    for(int i = 0; i < arr.Get_Size();i++)
    {
        cout << arr.Get(i)<<" ";
    }
    cout << nl;
    arr.ReverseEfficient();
    for(int i = 0; i < arr.Get_Size();i++)
    {
        cout << arr.Get(i)<<" ";
    }
    kaam_shesh;
}
