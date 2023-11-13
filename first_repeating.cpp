// Given an array arr[] of size N. The task is to find the first repeating element in an
// array of integers, i.e., an element that occurs more than once and whose index of
// first occurrence is smallest. solve it with time complexity O(n)

#include <iostream>
using namespace std;

int main()
{
    int n;
    bool flag = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    const int N= 1e6+2;
    int d[N];
    for (int i = 0; i < N; i++)
    {
        d[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        int add = a[i];
        d[add]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (d[a[i]] > 0)
        {
            cout << i+1;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << -1;
    }
    return 0;
}
