//Template
#include<bits/stdc++.h>
using namespace std;
 
#define endl        "\n"
#define ll          long long
#define pb          push_back
#define pop         pop_back
#define FOR         for(int i=0;i<n;i++)
#define yes         cout<<"YES"<<endl
#define no          cout<<"NO"<<endl
#define pi          3.141592653589793238
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


void merge(int arr[],int l,int mid ,int r){
    int size1=mid-l+1;
    int size2=r-mid ;

    int a[size1];
    int b[size2];  //temporary array

    for(int i=0;i<size1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<size2;i++){
        b[i]=arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;

    while( i<size1 && j<size2 ){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;
            i++;
        }
        else {
            arr[k]=b[j];
            k++;
            j++;
        }
    }

    while(i<size1){
        arr[k]=a[i];
            k++;
            i++;
    }
    while(j<size2){
        arr[k]=b[j];
            k++;
            j++;
    }
}

void mergeSort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);    //recursive functions
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);

    }
}

int main(){
    BOOST;

int l=0;                //1st index
int n;                  //size of array
cin>>n;
int r=n-1;              //last index of the array

int arr[n];
FOR{
        cin>>arr[i];
    }

    mergeSort(arr,l,r);
    
cout<<endl;

    FOR{
        cout<<arr[i]<<" ";
    }
}

