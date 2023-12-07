class Solution {
public:
    string largestOddNumber(string num) 
    {
        string ans;
        int n = num.length();   //the logic is
        int number = 0;         //no matter how big a num is if we put an odd digit at the end of it, the whole num become odd
        int i;                  

        for(i=n-1;i>=0;i--)
        {
           number = num[i] - '0';

           if(number % 2 != 0)
           {
              break;
           }
        }

        ans = num.substr(0,i+1);
        return ans;

        //TC - O(N)
        //SC - O(1)
    }
};