// problem link
// https://codeforces.com/problemset/problem/1933/A


#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int sum = 0;
        for(int i = 0;i < n;i++){
            cin >> arr[i];
            arr[i] = abs(arr[i]);
            sum += arr[i];
        }

        cout << sum << endl;

    }
}