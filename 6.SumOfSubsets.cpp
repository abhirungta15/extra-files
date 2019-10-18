#include <bits/stdc++.h>
using namespace std;


void subsetSum(int arr[], int n, int k, vector<int>& v, int startIdx){
    if (k == 0){
        for (int j = 0; j < v.size(); j++){
            cout << v[j] <<" ";
        }
        cout << endl;
        return;
    }
    if (n == 0)
        return;
        
    for (int i = startIdx; i < n; i++){
        if (arr[i] <= k){
            v.push_back(arr[i]);
            subsetSum(arr, n, k - arr[i], v, i + 1);
            v.pop_back();
        }
    }
    return;
}

int main(){
    int n;
    cout<<"Enter size of set:";
    cin >> n;
    int arr[n];
    cout<<"\nEnter set elements:";
    for (int i = 0 ; i < n; i++)
        cin >> arr[i];
    int k;
    cout<<"\nEnter Sum :";
    cin >> k;
    vector<int> v;
    subsetSum(arr, n, k, v, 0); 
    return 0;
}
