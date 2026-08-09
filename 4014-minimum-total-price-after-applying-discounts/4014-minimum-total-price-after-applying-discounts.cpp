
class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
         sort(prices.rbegin(), prices.rend());
        sort(discounts.rbegin(), discounts.rend());
        double sum = 0;
        int i = 0;
        int j = 0;
        while (i < prices.size() && j < discounts.size()) {
            sum += prices[i] * (100.0 - discounts[j]) / 100.0;
            i++;
            j++;
        }
        while (i < prices.size()) {
            sum += prices[i];
            i++;
        }

        return sum;
    }
};