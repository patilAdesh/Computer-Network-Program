#include<bits/stdc++.h>
using namespace std;

vector<int> bitDeStuffing(vector<int> &arr)
{
  int i = 0, count = 0;

  vector<int> ans;

  while (i < arr.size())
  {
      while (i < arr.size() && arr[i] == 1)
      {
          ans.emplace_back(arr[i]);
          i++;
          count++;
      }

      if (i == arr.size())
          break;

      if (count != 5)
      {
          ans.emplace_back(arr[i]);
      }
      i++;
      count = 0;
  }

  return ans;
}

int main()
{
  int n;
  cout << "Enter the size of array: ";
  cin >> n;
  vector<int> arr(n);

  cout << "Enter the elements in the array: ";
  for (int i = 0; i < n; i++)
  {
      cin >> arr[i];
  }

  cout << "Before Bit De-stuffing: ";
  for (int i = 0; i < n; i++)
  {
      cout << arr[i] << "  ";
  }
  cout << endl;

  arr = bitDeStuffing(arr);

  cout << "After Bit De-stuffing: ";
  for (int i = 0; i < arr.size(); i++)
  {
      cout << arr[i] << "  ";
  }
  cout << endl;

  return 0;
}