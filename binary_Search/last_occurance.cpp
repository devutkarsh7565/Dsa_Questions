#include <bits/stdc++.h>
using namespace std;


int firstOccurrence(int arr[],int size,int key) {

    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if(arr[mid] == key)
        {
          
            ans = mid;
              s = mid + 1;
        }

        else if(arr[mid] > key) {
             e = mid - 1;
         }
          else if(arr[mid] < key) {
             s = mid + 1;
         }
        
        mid = (s + e) / 2;
    }

    return ans;
}

int main()
{
    int n;
    int key = 1;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n;i++) {
        cin >> arr[i];
    }
    int ans = firstOccurrence(arr, n,key);

    cout << ans << endl;
}