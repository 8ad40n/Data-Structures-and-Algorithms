#include<iostream>
#include<stdlib.h>
using namespace std;
int bSort(int x[], int s[], int f[],  int n)
{
    for(int pass = 1; pass< n; pass++){
        for(int i = 0; i < n-pass; i++ ){
            if(f[i]>f[i+1]){
                swap(f[i],f[i+1]);
                swap(x[i],x[i+1]);
                swap(s[i],s[i+1]);
            }
        }
    }
}

int main()
{
    int ne;
    cout<< "\nHow many activities? ";
    cin>>ne;

    //Auto input
    int activities[ne],start[ne],finish[ne];
    for(int i=0; i<ne; i++)
    {
        activities[i] = i+1;
        start[i] = 1+rand()%100;
        finish[i] = start[i] + 1 + rand()%30;
    }
    cout<<"\tActivity"<<"\tStart"<<"\tFinish"<<endl;
    for(int i=0;i<ne;i++)
        cout<<"\t"<<activities[i]<<"\t\t"<<start[i]<<"\t"<<finish[i]<<endl;

    bSort(activities,start,finish,ne);
    cout<<"\tActivity"<<"\tStart"<<"\tFinish"<<endl;
    for(int i=0;i<ne;i++)
        cout<<"\t"<<activities[i]<<"\t\t"<<start[i]<<"\t"<<finish[i]<<endl;

    /*Use loop to select activities and print*/
    //main();
}
