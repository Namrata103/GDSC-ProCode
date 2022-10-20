#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }//create new array
    int suffix_sum[n];
    suffix_sum[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--){
        suffix_sum[i] = suffix_sum[i+1] + arr[i];
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int n;
        cin >> n;
            cout << suffix_sum[n] << endl;
    }
}
