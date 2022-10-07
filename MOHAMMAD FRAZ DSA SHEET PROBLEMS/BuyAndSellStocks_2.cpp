#include <bits/stdc++.h>
using namespace std;

long long MaximumProfit(vector<int> &v, int ind, int buy, int n, vector<vector<long long>> &dp)
{

    if (ind == n)
        return 0; // base case

    if (dp[ind][buy] != -1) // if value is already computed then return from here
        return dp[ind][buy];

    long long profit;

    if (buy == 0)
    { // We can buy the stock
        profit = max(0 + MaximumProfit(v, ind + 1, 0, n, dp), -v[ind] + MaximumProfit(v, ind + 1, 1, n, dp));
    }

    if (buy == 1)
    { // We can sell the stock
        profit = max(0 + MaximumProfit(v, ind + 1, 1, n, dp), v[ind] + MaximumProfit(v, ind + 1, 0, n, dp));
    }

    return dp[ind][buy] = profit;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<vector<long long>> dp(n + 1, vector<long long>(2, -1));
    cout << "The maximum profit that can be generated is " << MaximumProfit(v, 0, 0, n, dp);
}
