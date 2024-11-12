#include <bits/stdc++.h>
using namespace std;

struct item
{
    int weight, profit;
    item(int weight, int profit)
        : weight(weight), profit(profit)
    {
    }
};

bool cmp(item &a, item &b) {
    double r1 = (double)a.profit / a.weight;
    double r2 = (double)b.profit / b.weight;
    return r1 > r2;
}

double knapsack(int cap, vector<item> &arr, int n) {
    int currentweight = 0;
    double maxprofit = 0.0;
    sort(arr.begin(), arr.end(), cmp);
    // for (auto &&i : arr)
    // {
    //     cout<<i.weight/i.profit<<'\n';
    // }
    
    for (int i = 0; i < n; i++) {
        if (currentweight + arr[i].weight <= cap) {
            currentweight += arr[i].weight;
            maxprofit += arr[i].profit;
            cout<<"new weight = "<<arr[i].weight<<" used "<<arr[i].weight<<'\n';
            
        
        } else {
            int remain = cap - currentweight;
            //cout<<arr[i].weight<<" "<< arr[i].profit<<" "<<remain<<'\n';
            maxprofit += arr[i].profit * ((double)remain / arr[i].weight);
            //cout<<arr[i].weight<<" "<< arr[i].profit<<" "<<'\n';
            cout<<"new weight = "<<arr[i].weight<<" used "<<remain<<'\n';
            
            break;
        }
    }
    return maxprofit;
}

int main() {
    vector<item> arr = { {10, 60}, {20, 100}, {30, 120} };
    int cap = 55;
    int n = arr.size();
    double ans = knapsack(cap, arr, n);
    cout << "max profit = " << ans;
    return 0;
}
