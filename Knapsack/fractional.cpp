#include<iostream>
using namespace std;
struct Item{
	char itemsName[4];
	float profit;
	float weight;
	float ratio;
};

void Knapsack(Item items[], int n, int W){
	float wt;
	float value;
	float totalWeight = 0.0;
	float totalProfit = 0.0;
	for(int i=0;i<n;i++){
		if(items[i].weight + totalWeight <=W){
			totalWeight += items[i].weight;
			totalProfit += items[i].profit;
		}
		else{
			wt = (W-totalWeight);
			value = wt*(items[i].profit/items[i].weight);
			totalWeight +=wt;
			totalProfit +=value;
		}
	}
	
	cout<<"Total weight is: "<<totalWeight<<endl;
	cout<< "Maximum Profit is: "<<totalProfit<<endl;
}

int main(){
	int n = 4;
	int W = 60;
	Item items[4]={{"A", 280, 40, 0},
	               {"B", 100, 10, 0},
	               {"C", 120, 20, 0},
	               {"D", 120, 24, 0},
	};
	for(int i=0;i<n;i++){
		items[i].ratio = items[i].profit/items[i].weight;
	}
	Item temp;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(items[j+1].ratio>items[j].ratio){
				temp = items[j+1];
				items[j+1]=items[j];
				items[j]=temp;
			}
		}
	}
	
	Knapsack(items, n, W);
	
	return 0;
}
