#include <bits/stdc++.h>
 
#define ll                  long long int 
#define PI                  3.14159265359
#define am_so_cool_you_know (ios::sync_with_stdio(0), cin.tie(0),cout.tie(0));
#define kaam_shesh          return 0;
#define nl                  "\n"
#define SIZE 100

using namespace std;
int parentNode(int i) {
    return (i) / 2;
}

int leftChild(int i) {
    return (2 * i + 1);
}

int rightChild(int i) {
    return (2*i + 2);
}

void swap(int* a, int* b)
{
 
    int temp = *a;
 
    *a = *b;
 
    *b = temp;
}
void heapify(int arr[], int N, int i)
{

    int largest = i;
 
    int left = leftChild(i);

    int right = rightChild(i);
 
    //check if left child is larger than i
    if (left < N && arr[left] > arr[largest])
 
        largest = left;
 
    //check if right child is larger than i
    if (right < N && arr[right] > arr[largest])
 
        largest = right;
 
    // Swap and continue heapifying if root is not largest
    if (largest != i) {
 
        swap(&arr[i], &arr[largest]);
 
        // Recursively heapify the affected
        // sub-tree
        heapify(arr, N, largest);
    }
}
void Build_max_heap(int arr[], int N)
{
    // heapifies continuously from the last non-leaf node to the root essentially creates the max_heap
    for (int i = N / 2 - 1; i >= 0; i--)

        heapify(arr, N, i);
}
void Heap_Sort(int arr[],int N)
{
    Build_max_heap(arr, N);
    // Heap sort
    for (int i = N - 1; i >= 0; i--) {
 
        swap(&arr[0], &arr[i]);
 
        // Heapify root element to get highest element at
        // root again
        heapify(arr, i, 0);
    }
}


 
int main()
{
    am_so_cool_you_know;

    int arr[SIZE];
    int i = 0;
    int temp = 0;
    while (1)
    {
        
        cin>>temp;
        if(temp == -1)
        {
            break;
        }
        else
        {
            arr[i] = temp;
            i++;
        }
    }

    int arr_size = i;
    Build_max_heap(arr, arr_size);
    cout << "Max Heap: ";
    for (i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << nl;
    Heap_Sort(arr, arr_size);
    cout << "Sorted: ";
    i = arr_size;
    while(i--)
        {
            cout << arr[i]<<" ";
            if(i==0)
                break;
        }
    cout << nl;
    
    kaam_shesh;
}
