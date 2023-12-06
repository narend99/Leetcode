class Solution {
public:
    int totalMoney(int n) 
    {
/*----------O(n) Solution-----------*/
/*      int days = 1;
        int amt = 0;
        int week = 1;
        int s = 1;

        while(days <= n)
        {
            if(days % 7 != 0)
            {
                amt += s;
                s += 1;
            }
            else
            {
                amt += s;
                week += 1;
                s  = week;
            }

            days++;
        }
        return amt;
    }
*/

/*--------------O(1) Approach --------------*/
      int first_term = 28;
      int last_term = 0;
      int amt = 0;

      int week  = n/7;
      int rem_days = n % 7;

      //finding last term
      last_term = first_term + (week -1) * 7;

      //find the amt in complete weeks
      amt = (week * (first_term + last_term)) / 2;

      //find the amt in remaining days
      for(int i=1;i<=rem_days;i++)
       amt += i + week;

     return amt;
    }

    //TC --- O(1)
    //SC --- O(1)
};