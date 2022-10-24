#include<iostream>
using namespace std;
void selectionSort(int arr[],int i,int n){
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[i]){
            int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
        }
    }
    if((i+1)<n){
        selectionSort(arr,i+1,n);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    selectionSort(arr,i,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}