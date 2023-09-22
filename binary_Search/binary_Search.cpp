#include <bits/stdc++.h>
using namespace std;


int binarySearch(int arr[],int size,int key) {

    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {

        if(arr[mid] == key)
        {
            return mid;
        }

         if(arr[mid] > key) {
             e = mid - 1;
         }
           if(arr[mid] < key) {
             s = mid + 1;
         }
        
        mid = (s + e) / 2;
    }

    return -1;
}

int main()
{
    int n;
    int key = 5;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n;i++) {
        cin >> arr[i];
    }
    int ans = binarySearch(arr, n,key);

    cout << ans << endl;
}