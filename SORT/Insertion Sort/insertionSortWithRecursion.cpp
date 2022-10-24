#include<iostream>
using namespace std;
void insertionSort(int arr[], int i, int n)
{
    int key = arr[i]; 
        int j = i - 1; 
        
        while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
        if((i+1)<n)
        {
            insertionSort(arr,i+1,n);
        }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,1,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}