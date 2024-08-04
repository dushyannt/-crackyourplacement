class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int i=0 , j = prices.size() - 1 ;
        int profit = 0 ; 
        int buy = prices[i] ;
        for(int i=1 ; i < prices.size() ; i++)
        {
            if(buy > prices[i])
            {
                buy = prices[i] ;
            }
            else if(  prices[i] - buy > profit )
            {
                profit = prices[i] - buy ;
            }
        }
        return profit ;
    }
};