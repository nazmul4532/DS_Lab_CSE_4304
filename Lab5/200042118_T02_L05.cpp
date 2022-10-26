#include <bits/stdc++.h>
 
#define ll                  long long int 
#define PI                  3.14159265359
#define am_so_cool_you_know (ios::sync_with_stdio(0), cin.tie(0),cout.tie(0));
#define kaam_shesh          return 0;
#define nl                  "\n"
#define SIZE 100

using namespace std;

int capacity=100;
int *harr = new int[capacity];
int heap_size=0;
int parent(int i){
    return (i - 1) / 2;
}
int leftChild(int i){
    return (2 * i + 1);
}
int rightChild(int i){
    return (2 * i + 2);
}
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void Min_heap_insert(int k){
    if(heap_size==capacity)
    {
        cout << "\nOverflow: Couldn't Insert Key\n";
        return;
    }
    //new heap size
    heap_size++;
    // inserting the key at the end
    int i = heap_size - 1;
    harr[i] = k;
    //swapping parent with child if parent is larger recursively
    while(i!=0 && harr[parent(i)]>harr[i])
    {
        swap(&harr[i], &harr[parent(i)]);
        i = parent(i);
    }
}
void Min_Heapify(int i){
    int l = leftChild(i);
    int r = rightChild(i);
    int smallest = i;
    if(l<heap_size && harr[l]<harr[i])
    {
        smallest = l;
    }
    if(r<heap_size && harr[r]<harr[smallest])
    {
        smallest = r;
    }
    if(smallest != i)
    {
        swap(&harr[i], &harr[smallest]);
        Min_Heapify(smallest);
    }
}
int Min_heap_extract()
{
    if(heap_size<=0)
    {
        return 99999;
    }
    if(heap_size==1)
    {
        heap_size--;
        return harr[0];
    }
    //removes the minimum value from the heap and rearranges the new Heap
    int root = harr[0];
    harr[0] = harr[heap_size - 1];
    heap_size--;
    Min_Heapify(0);

    return root;
}
int Heap_Minimum(){
    return harr[0];
}
void printHeap(){
    int i = 0;
    cout << "Min Heap: ";
    for (i = 0; i < heap_size; i++)
    {
        cout << harr[i] << " ";
    }
    cout << nl;
}

int main()
{
    am_so_cool_you_know;
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
            Min_heap_insert(temp);
        }
    }
    printHeap();
    cout << Heap_Minimum() << nl;
    printHeap();
    cout<<Min_heap_extract()<<nl;
    printHeap();
    cout<<Heap_Minimum()<<nl;
    printHeap();
    Min_heap_insert(45);
    printHeap();
    Min_heap_insert(47);
    printHeap();

    kaam_shesh;
}
