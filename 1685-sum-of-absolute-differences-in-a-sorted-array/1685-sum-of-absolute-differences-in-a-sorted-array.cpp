class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) 
    {
       /* vector<int> ans;
       int sum = 0;
       int n = nums.size();

       for(int i=0;i<n;i++)
       {
           sum = 0;
           for(int j=0;j<n;j++)
           {
               sum += abs(nums[i] - nums[j]);
           }

           ans.push_back(sum);
       } 

       return ans;
       */

       /*
       vector<int> ans;
       vector<int> prefix;
       int n = nums.size();
       int sum = 0;

       for(int i=0;i<n;i++)
       {
           sum += nums[i];
           prefix.push_back(sum);
       }

       for(int i=0;i<n;i++)
       {
           int val = nums[i]*i - (prefix[i]-nums[i])  + (prefix[n-1] - prefix[i]) - (nums[i] * (n-1-i));
           ans.push_back(val);
       }

       return ans;
       */

       int n = nums.size();
       int sum = 0;
       vector<int> ans;
       int presum = 0;


       for(int i=0;i<n;i++)
       {
           sum += nums[i];
       }

       for(int i=0;i<n;i++)
       {
          presum += nums[i];
          int val = nums[i]*i - (presum-nums[i])  + (sum - presum) - (nums[i] * (n-1-i));

          ans.push_back(val);
       }

       return ans;




    }
};