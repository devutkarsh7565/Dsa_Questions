#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    cin >> n,m;
    int arr[n];
    int array[m];
    int sum1 = 0;
    int sum2 = 0;


    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


   for (int i = 0; i < m; i++)
    {
        cin >> array[i];
    }


    
   for (int i = 0; i < n; i++)
    {
        sum1 += arr[i];
    }

      
   for (int i = 0; i < m; i++)
    {
        sum2 += array[i];
    }

    for (int i = 0; i < n;i++) {
        for (int j = 0; j < m;j++)
        {
             if(sum1 + array[j] - arr[i] == sum2 + arr[i] - array[j]) {
                 cout << 1 << endl;
                 break;
             }
          
        }
    }
    
}