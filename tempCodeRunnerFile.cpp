#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        int count =0;
        if((a+b+c)>=2 && (a+b+c)<=3){
            count ++;
        }
        cout<<count <<endl;
    }
}