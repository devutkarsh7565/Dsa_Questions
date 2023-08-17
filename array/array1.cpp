#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
   
    int findArrSum  = 0;
    int findIndexSum = 0;
    for (int i = 0; i < n -1; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1;i++) {
        findArrSum += arr[i];
    }
       for (int i = 1; i <= n;i++) {
        findIndexSum += i;
    }

        cout << findIndexSum - findArrSum << endl;
}