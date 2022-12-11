#include<iostream>
#include<stdlib.h>
using namespace std;

int bSort(int x[], int b[], int w[], float v[], int n)
{
    for(int pass = 1; pass< n; pass++){
        for(int i = 0; i < n-pass; i++ ){
            if(v[i]<v[i+1]){
                swap(v[i],v[i+1]);
                swap(x[i],x[i+1]);
                swap(b[i],b[i+1]);
                swap(w[i],w[i+1]);
            }
        }
    }
}


int main()
{
    int ne;
    cout<< "\nHow many items? ";
    cin>>ne;

    //Auto input
    int items[ne],benefits[ne],wieghts[ne];
    float vindex[ne];
    int Capacity = 0;

    for(int i=0; i<ne; i++)
    {
        items[i] = i+1;
        benefits[i] = 1+rand()%100;
        wieghts[i] = 1+rand()%20;
        vindex[i] = (float)benefits[i]/wieghts[i];
        Capacity = Capacity + (int)wieghts[i]*0.6;
    }
    cout<<"\tItem"<<"\tBenefit"<<"\tWeight"<<"\tV"<<endl;
    for(int i=0;i<ne;i++)
        cout<<"\t"<<items[i]<<"\t"<<benefits[i]<<"\t"<<wieghts[i]<<"\t"<<vindex[i]<<endl;

    cout<<"Capacity: "<<Capacity<<endl;
    bSort(items,benefits,wieghts,vindex,ne);
    cout<<"\tItem"<<"\tBenefit"<<"\tWeight"<<"\tV"<<endl;
    for(int i=0;i<ne;i++)
        cout<<"\t"<<items[i]<<"\t"<<benefits[i]<<"\t"<<wieghts[i]<<"\t"<<vindex[i]<<endl;


    /*use loop to choose items and print*/
    float w = 0;
    while(w<Capacity)
    {

    }
    //main();
}
