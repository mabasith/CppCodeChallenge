//Best Time to Buy and Sell Stock - Solution.
/*an algorithm to find the maximum profit.*/

int maxProfit(vector<int>& prices) {
       int minp = INT_MAX, maxp = 0;
        for(auto price : prices)
        {
            if(minp>price)
                minp = price;
            if((price-minp) > maxp)
                maxp = price-minp;
        }
        return maxp;
    }