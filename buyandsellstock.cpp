#include <iostream>
using namespace std;
void maxprofit(int *prices, int n)
{
    int bestBuy=INT64_MAX;
    for (int i = 0; i < n; i++)
    {
        bestBuy = min(bestBuy, prices[i]);
    }
    int maxprofit = 0;
    for (int i = 0; i < n; i++)
    {
        int currprofit = prices[i] - bestBuy;
        maxprofit = max(maxprofit, currprofit);
    }
    cout << "max profit : " << maxprofit << endl;
}
int main()
{
    int prices[6] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);
    maxprofit(prices, n);
    return 0;
}