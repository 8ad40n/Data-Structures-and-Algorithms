//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
  //Your code here
  // string str=Geeks
char a[str.length()];
int count=0;
  
  for(int i=str.length();i>=0;i--)
    {
        if(count <= str.length()){
            
             a[count++]= str[i];
        }
        
       
    }
    str=a;
    cout<< str;
    return str;
 
}

