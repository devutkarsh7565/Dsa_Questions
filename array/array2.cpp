#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 1;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
      if(arr[i] == 0)
      {
          count++;
          continue;
      }
      sum *= arr[i];
    }
    cout << sum << "tht" << endl;
    for (int i = 0; i < n; i++)
    {
      if (count > 0)
      {
          if (arr[i] == 0)
          {
              array[i] = sum;
          }
          else
              arr[i] = 0;
      }
      else
      {
          array[i] = sum / arr[i];
      }
    }

    for (int i = 0; i < n;i++)
    {
        cout << array[i] << endl;
    }
}