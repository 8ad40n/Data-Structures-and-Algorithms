
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


int partition(int arr[], int start, int end)
{

	int p=arr[end];
	int i=start-1;
	for(int j=start; j<end; j++){
		if(arr[j]<p){
			i++;
			//swap
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;


		}
	}
	i++;
	int temp=arr[i];
	arr[i]=p;
	arr[end]=temp;

	return i;
	

}

void quickSort(int arr[], int start, int end)
{

	if (start < end)
	{
    // partitioning the array
	int p = partition(arr, start, end);

	// Sorting the left part
	quickSort(arr, start, p - 1);

	// Sorting the right part
	quickSort(arr, p + 1, end);
	}

	
}

int main()
{
    BOOST;

	int arr[] = { 9, 3, 4, 2, 1, 8 };
	int n = 6;

	quickSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;

	
}
