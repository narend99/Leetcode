class Solution {
public:
    int maxScore(string s) 
    {
        int n = s.length();
        int cnt_0 = 0;
        int cnt_1 = 0;
        int maxi = INT_MIN;

        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(s[j] == '0')
                 cnt_0++;
            }

            for(int k=i+1;k<n;k++)
            {
                if(s[k] == '1')
                 cnt_1++;
            }

            maxi = max(maxi,cnt_0+cnt_1);

            cnt_0 = 0;
            cnt_1 = 0;
        }

        return maxi;
    }

     //TC -- O(N^2)
     //SC -- O(1)
};