class Solution {
public:
    int buyChoco(vector<int>& prices, int money) 
    {
/*----------O(n) Solution------------*/
       int smallest = prices[0];
       int ss = INT_MAX;
       int n = prices.size();

       for(int i=1;i<n;i++)
       {
         if(prices[i] <= smallest)
         {
             ss = smallest;
             smallest = prices[i];
         }
         else if(prices[i] > smallest && ss > prices[i])
         {
             ss = prices[i];
         }
       }

       int sum = smallest + ss;

       if(sum <= money)  return money-sum;
       else  return money;
    }
/*-----------O(n log(n)) + O(n)-------------*/
/*      sort(prices.begin(),prices.end());
        int cnt = 0;
        int n = prices.size();
        int fmoney = money;

        for(int i=0;i<n;i++)
        {
            if(prices[i] <= money)
            {
                cnt++;
                money -= prices[i];
            }
            else
            return fmoney;
 
            if(money >= 0 && cnt == 2)
            return money;
            else if(cnt > 2)
            break;
        } 

        return fmoney;
*/
};