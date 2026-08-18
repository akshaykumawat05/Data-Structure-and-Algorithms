class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(), prices.rend());
        sort(discounts.rbegin(), discounts.rend());

        double sum = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (i < discounts.size()) {
                sum += prices[i] -
                       (double)prices[i] * discounts[i] / 100;
            } else {
                sum += prices[i];
            }
        }

        return sum;
    }
};