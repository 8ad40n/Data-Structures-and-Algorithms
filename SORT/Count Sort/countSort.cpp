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
// counting sort sorting algorithm
void CountingSort(int input_array[],int s, int r)
{
	int output_array[s];
	int count_array[r];
	
	// initialize all elements to 0 in count array
	for(int i=0;i<r;i++)
		count_array[i]=0;
		
	// to take a count of all elements in the input array
	for(int i=0;i<s;i++)
		count_array[input_array[i]]++;
	
	// cummulative count of count array to get the 
	// positions of elements to be stored in the output array
	for(int i=1;i<r;i++)
		count_array[i]=count_array[i]+count_array[i-1];
	
	// placing input array elements into output array in proper
	//  positions such that the result is a sorted array in ASC order
	for(int i=0;i<s;i++)
		output_array[--count_array[input_array[i]]] = input_array[i];
	
	// copy output array elements to input array
	for(int i=0;i<s;i++)
		input_array[i]=output_array[i];
}

int main()
{
    BOOST;
	int size;
	int range = 10;
	cin>>size;
	int myarray[size];
	cout<<"Enter "<<size<<" integers : "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>myarray[i];
	}
	cout<<"Before Sorting"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<myarray[i]<<" ";
	}
	cout<<endl;
	CountingSort(myarray,size,range);  // counting sort called
	cout<<"After Sorting"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<myarray[i]<<" ";
	}
	return 0;
}