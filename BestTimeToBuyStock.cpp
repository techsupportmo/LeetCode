class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        //Buy low
        //Sell high
        
        //We want to buy the lowest price, so this stores the lowest number at index i
        int minPrice = INT_MAX;
        
        //lowest profit is zero (you won't sell if you can't make money)
        int highestProfit = 0;
        
        
        //Loops through entire array
        for(int i = 0; i < prices.size(); i++)
        {
            //first checks if number is lowest price so far (lower than minPrice)
            if(prices.at(i) < minPrice)
            {
                minPrice = prices.at(i);
            }
            //finds if the current value being checked [prices.at(i)]
            //minus the lowest buying price we have found so far [minPrice]
            // is a bigger value - meaning we can make more profit
            else if(prices.at(i) - minPrice > highestProfit) 
            {
                highestProfit = prices.at(i) - minPrice;
            }
        }
        
        
        return highestProfit;
        
    }
};