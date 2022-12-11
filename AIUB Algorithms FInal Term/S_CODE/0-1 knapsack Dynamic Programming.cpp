#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

knapsack(int b[],int w[],int n,int C){

}

int main()
{
    int ne;
    cout<< "\nHow many items? ";
    cin>>ne;

    //Auto input
    int benefits[ne+1],wieghts[ne+1];
    int Capacity = 0;
    srand(time(0));
    for(int i=1; i<=ne; i++)
    {
        benefits[i] = 1+rand()%20;
        wieghts[i] = 1+rand()%5;
        Capacity = Capacity + (int)wieghts[i]*0.6;
    }
    cout<<"\tItem"<<"\tBenefit"<<"\tWeight"<<endl;
    for(int i=1;i<=ne;i++)
        cout<<"\t"<<i<<"\t"<<benefits[i]<<"\t"<<wieghts[i]<<endl;

    cout<<"Capacity: "<<Capacity<<endl;

    knapsack(benefits,wieghts,ne,Capacity);


    // Implement the formula for the matrix using nested loop

    main();
}
