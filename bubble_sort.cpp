#include <bits/stdc++.h>
using namespace std;
#define ll long long

void bubble_sort(vector<ll>& arr, ll n)
{
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (!flag)
            break;
    }
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubble_sort(arr, n);

    for (auto i : arr)
    {
        cout << i << " ";
    }
}
