class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
/*------------inbuilt function Approach-------------*/

/*      int ans = 0;

        ans = __builtin_popcount(n);
        return ans;  
    
*/

/*------------O(n) Approach------------*/
    
    int cnt = 0;

    for(int i=0;i<=31;i++)
    {
        if( (n >> i) & 1 == 1)
        cnt++;
    }
       return cnt;
       
    }

};