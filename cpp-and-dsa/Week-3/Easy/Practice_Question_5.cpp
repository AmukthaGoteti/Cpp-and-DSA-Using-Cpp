/*
    Problem Statement:
        You are given an array prices 
        where prices[i] is the price of a 
        given stock on the ith day.
        You want to maximize your profit by 
        choosing a single day to 
        buy one stock and 
        choosing a different day in the 
        future to sell that stock.
        Return the maximum profit 
        you can achieve from this transaction.
        If you cannot achieve any profit, return 0.
*/

#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    if (n < 2) return 0;
    // Step 1: Find minimum element index
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (prices[i] < prices[minIndex]) {
            minIndex = i;
        }
    }
    // Step 2: Find maximum element AFTER minimum
    int maxAfterMin = prices[minIndex];
    for (int i = minIndex + 1; i < n; i++) {
        if (prices[i] > maxAfterMin) {
            maxAfterMin = prices[i];
        }
    }
    // Step 3: Calculate profit
    int profit = maxAfterMin - prices[minIndex];
    return profit > 0 ? profit : 0;
}

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    int ans = maxProfit(prices);
    cout << ans << endl;
    return 0;
}